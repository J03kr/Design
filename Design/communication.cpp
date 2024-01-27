#include "communication.h"
#include "ui_communication.h"

Communication::Communication(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Communication)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    auto fcon=[&](){

        auto ip =m_socket.localAddress().toString();
        ui->m_com->append(ip+"ip连接成功");

    };

    connect(&m_socket,&QAbstractSocket::connected,this,fcon);

    auto fdiscon=[&](){

        auto ip =m_socket.localAddress().toString();
        ui->m_com->append(ip+"ip断开连接");


    };

    connect(&m_socket,&QAbstractSocket::disconnected,this,fdiscon);
}

Communication::~Communication()
{
    delete ui;
}

void Communication::tcp_connect()
{
    auto ip_local=m_s.getLocalIp();
    auto ip_server=m_s.getServerIp();
    auto server_Port=m_s.serverPort();
    m_socket.close();
    m_socket.bind(QHostAddress(ip_local));
    m_socket.connectToHost(ip_server,server_Port);


    connect(&m_socket,&QAbstractSocket::readyRead,this,&Communication::dealClientread);
}

void Communication::dealClientread()
{
    m_buffer.push_back(m_socket.readAll());
    if(m_buffer.size()>=4&& m_buffer[0]==0x66){
        quint16 len=(m_buffer[2]<<8 & 0xFF00)| static_cast<quint16>(m_buffer[1]);
        if(m_buffer.size()>=len){
            QByteArray arr=m_buffer.mid(0,len);
            dealPack(arr);
            m_buffer=m_buffer.mid(len);

        }
    }
}

void Communication::dealPack(QByteArray arr)
{
    //拿到了一包数据
    char cmd=arr[3];
    QByteArray arrData=arr.mid(4);

    do{
        if(cmd==0x01)
        {
            //心跳包，计时
            break;
        }

        if(cmd==0x02)
        {
            //我发送出去的数据包
            ui->m_com->append("<font color='green'>我发送："+arrData);
            break;
        }

        if(cmd==0x03)
        {
            //我接收到的数据包
            ui->m_com->append("<font color='blue'>我接受的数据："+arrData);
            break;
        }

    }while(false);
}

void Communication::on_m_min_clicked()
{
    showMinimized();
}


void Communication::on_m_max_clicked()
{
    pressnum++;
    if (pressnum%2){
        showMaximized();
    }
    else{
        showNormal();
    }
}


void Communication::on_m_close_clicked()
{
    exit(0);
}


void Communication::on_m_add_clicked()
{

}


void Communication::on_m_search_clicked()
{

}


void Communication::on_m_setting_clicked()
{
    int ret = m_s.exec();
    if(ret)
        tcp_connect();
}


void Communication::on_m_send_clicked()
{
    auto str =ui->m_input->toPlainText();
    ui->m_input->clear();


    QByteArray arr=str.toUtf8();
    quint16 l=arr.size()+4;
    arr.insert(0,0x66);
    arr.insert(1,(static_cast<char>(l&0x00ff)));
    arr.insert(2,static_cast<char>(l>>8&0x00ff));
    arr.insert(3,0x03);
    m_socket.write(arr);
}


#ifndef SERVER_H
#define SERVER_H

#endif // SERVER_H
#include <QCoreApplication>
#include<QObject>
#include<QTcpServer>
#include<QDebug>
#include<QTcpSocket>
class Server:public QObject{
    Q_OBJECT

public:
    Server(){

    }
    ~Server(){

    }
    void init(){
        m_tcpserver.listen(QHostAddress("192.168.2.123"),8899);
        connect(&m_tcpserver,&QTcpServer::newConnection,this,&Server::dealNewCon);
        qDebug()<<"server running";

    }
    void dealNewCon(){
        qDebug()<<"new con ";

        auto *m_socket=m_tcpserver.nextPendingConnection();
        TcpInfo info{m_socket};
        m_ltcp<<info;
        connect(m_socket,&QTcpSocket::readyRead,this,&Server::dealread);
    }
    void dealread()
    {
        QTcpSocket *socket=static_cast<QTcpSocket *>(sender());
        auto data=socket->readAll();
        for(int i=0;i<m_ltcp.size();i++)
        {
            if(m_ltcp[i].socket==socket)
            {
                m_ltcp[i].arrData.append(data);
                dealPack(i);
                break;
            }
        }
    }
    void dealRecieve(int i ,QByteArray arr)
    {
        auto info=m_ltcp[i];
        //qDebug()<<arr[3];
        auto cmd= arr[3];
        QByteArray arrData=arr.mid(4);

        do
        {
            if(cmd==0x01)
            {
                //心跳包，计时
                break;
            }

            if(cmd==0x03)
            {
                //auto strIp=info.socket->peerAddress().toString();
                auto strIp=info.socket->peerAddress().toString()+":";
                arrData.insert(0,strIp.toUtf8());

                //发送给当前客户
                QByteArray arrSendBuffer;
                arrSendBuffer.append(0x66);
                quint16 l=arrData.size()+4;
                arrSendBuffer.append(static_cast<char>(l&0x00ff));
                arrSendBuffer.append(static_cast<char>(l>>8&0x00ff));
                arrSendBuffer.append(0x03);
                arrSendBuffer.append(arrData);

                for (int i=0; i<m_ltcp.size();i++)
                {
                    if(m_ltcp[i].socket==info.socket)
                    {
                        arrSendBuffer[3]=0x02;
                        m_ltcp[i].socket->write(arrSendBuffer);
                        continue;

                    }
                    arrSendBuffer[3]=0x03;
                    m_ltcp[i].socket->write(arrSendBuffer);
                    continue;
                }
                break;
            }

        }while(false);
    }
    void dealPack(int i)
    {
        auto info=&m_ltcp[i];
        if(info->arrData.size()>=4&& info->arrData[0]==(0x66)){
            quint16 len=(info->arrData[2]<<8 & 0xFF00)| static_cast<quint16>(info->arrData[1]);
            if(info->arrData.size()>=len)
            {
                //取出完整的数据包
                QByteArray arr=info->arrData.mid(0,len);
                dealRecieve(i, arr);
                info->arrData=info->arrData.mid(len);
            }
        }

    }
private:
    QTcpServer m_tcpserver;
    struct TcpInfo{

        QTcpSocket * socket;
        QByteArray arrData;

    };
    QList<TcpInfo >m_ltcp;
};

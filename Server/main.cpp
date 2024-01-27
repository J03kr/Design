#include "Server.h""

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Server m_s;
    m_s.init();
    return a.exec();
}

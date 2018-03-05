#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include "ui_server.h"
#include <QTcpSocket>
#include <QTcpServer>

namespace Ui{
    class Server;
}

class Server : public QWidget
{
    Q_OBJECT

public:
    Server(QWidget *parent = 0);
    ~Server();

private:
    void printMsg(const QString& msg);

    Ui::Server*         m_ui;
    QTcpServer*         m_server;
    QTcpSocket*         m_socket;
};

#endif // SERVER_H

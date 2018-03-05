#ifndef CLIENT_H
#define CLIENT_H

#include <QWidget>
#include "ui_client.h"
#include <QTcpSocket>

namespace Ui{
    class Client;
}

class Client : public QWidget
{
    Q_OBJECT

public:
    Client(QWidget *parent = 0);
    ~Client();

private:
    void printMsg(const QString& msg);

    Ui::Client*         m_ui;
    QTcpSocket*         m_socket;
};

#endif // CLIENT_H

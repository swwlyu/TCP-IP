#include "server.h"
#include <QDebug>

Server::Server(QWidget *parent)
    : QWidget(parent)
{
    m_ui = new Ui::Server;
    m_ui->setupUi(this);
    m_server = new QTcpServer;
    m_socket = new QTcpSocket;
    m_ui->portLineEdit->setText("8765");
    m_ui->sendBtn->setEnabled(false);
    connect(m_server, &QTcpServer::newConnection, this, [&](){
        m_socket = m_server->nextPendingConnection();
        QObject::connect(m_socket, &QTcpSocket::readyRead, this, [&](){
            QByteArray buffer; 
            buffer = m_socket->readAll();
            if (!buffer.isEmpty()) {
                m_ui->receiveTextEdit->setText(buffer);
            }  
        });
        QObject::connect(m_socket, &QTcpSocket::disconnected, this, [&](){
            m_ui->sendBtn->setEnabled(false);
            printMsg("Disconnected!");
        });
        m_ui->sendBtn->setEnabled(true);
        printMsg("A Client connect!");
    });
    connect(m_ui->listenBtn, &QPushButton::clicked, this, [&](){
        if (m_ui->listenBtn->text() == tr("Listen")) {
            int port = m_ui->portLineEdit->text().toInt();
            if (!m_server->listen(QHostAddress::Any, port)) {
                printMsg(tr("Error: ") + m_server->errorString());
                return;
            }
            m_ui->listenBtn->setText("Cancel listen");
            printMsg( "Listen successfully!");
        } else {
            if (m_socket->state() == QAbstractSocket::ConnectedState) {                 
                m_socket->disconnectFromHost();
            }
            m_server->close(); 
            m_ui->listenBtn->setText("Listen");
            m_ui->sendBtn->setEnabled(false);
        }
    });

    connect(m_ui->sendBtn, &QPushButton::clicked, this, [&](){
        m_socket->write(m_ui->sendTextEdit->toPlainText().toLatin1());
        m_socket->flush();
    });
}

Server::~Server()
{
    delete m_ui;
}

void Server::printMsg(const QString& msg)
{
    m_ui->showLabel->setText(msg);
}

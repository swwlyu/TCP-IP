#include "client.h"
#include <QDebug>

Client::Client(QWidget *parent)
    : QWidget(parent)
{
    m_ui = new Ui::Client;
    m_ui->setupUi(this);
    m_socket = new QTcpSocket;
    m_ui->sendBtn->setEnabled(false);
    m_ui->ipAddressLineEdit->setText("127.0.0.1");
    m_ui->portLineEdit->setText("8765");

    connect(m_socket, &QTcpSocket::readyRead, this, [&](){
        QByteArray buffer;
        buffer = m_socket->readAll();
        if (!buffer.isEmpty()) {
            m_ui->receiveTextEdit->clear();
            m_ui->receiveTextEdit->setText(buffer);
        }
    });

    connect(m_ui->connectBtn, &QPushButton::clicked, this, [&](){
        m_ui->connectBtn->setEnabled(false);
        if (m_ui->connectBtn->text() == tr("Connect")) {
            QString IP;
            int port; 
            IP = m_ui->ipAddressLineEdit->text();
            port = m_ui->portLineEdit->text().toInt();
            m_socket->abort(); 
            m_socket->connectToHost(IP, port);
            if (!m_socket->waitForConnected(30000)) {
                printMsg(tr("Connection failed,retry!"));
                m_ui->connectBtn->setEnabled(true);
                
                return;
            }
            printMsg(tr("Connect successfully!"));
            m_ui->sendBtn->setEnabled(true);
            m_ui->connectBtn->setText("Disconnect");
        } else {
            m_socket->disconnectFromHost(); 
            m_ui->connectBtn->setText("Connect");
            m_ui->sendBtn->setEnabled(false);
        }
        m_ui->connectBtn->setEnabled(true);
    });

    connect(m_socket, &QTcpSocket::disconnected, this, [&](){
        m_ui->connectBtn->setText(tr("Connect"));
        printMsg(tr("disconnect!"));
        m_ui->sendBtn->setEnabled(false);
    });

    connect(m_ui->sendBtn, &QPushButton::clicked, this, [&](){
        m_socket->write(m_ui->sendTextEdit->toPlainText().toLatin1());
        m_socket->flush();
    });
}

Client::~Client()
{
    delete m_ui;
}

void Client::printMsg(const QString& msg)
{
    m_ui->showLabel->setText(msg);
}

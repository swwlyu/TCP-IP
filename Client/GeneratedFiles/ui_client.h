/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *ipAddressLineEdit;
    QLabel *label_2;
    QLineEdit *portLineEdit;
    QPushButton *connectBtn;
    QTextEdit *receiveTextEdit;
    QTextEdit *sendTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *showLabel;
    QPushButton *sendBtn;

    void setupUi(QWidget *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QStringLiteral("Client"));
        Client->resize(600, 400);
        verticalLayout = new QVBoxLayout(Client);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Client);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ipAddressLineEdit = new QLineEdit(Client);
        ipAddressLineEdit->setObjectName(QStringLiteral("ipAddressLineEdit"));

        horizontalLayout->addWidget(ipAddressLineEdit);

        label_2 = new QLabel(Client);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        portLineEdit = new QLineEdit(Client);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        horizontalLayout->addWidget(portLineEdit);

        connectBtn = new QPushButton(Client);
        connectBtn->setObjectName(QStringLiteral("connectBtn"));

        horizontalLayout->addWidget(connectBtn);


        verticalLayout->addLayout(horizontalLayout);

        receiveTextEdit = new QTextEdit(Client);
        receiveTextEdit->setObjectName(QStringLiteral("receiveTextEdit"));

        verticalLayout->addWidget(receiveTextEdit);

        sendTextEdit = new QTextEdit(Client);
        sendTextEdit->setObjectName(QStringLiteral("sendTextEdit"));

        verticalLayout->addWidget(sendTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showLabel = new QLabel(Client);
        showLabel->setObjectName(QStringLiteral("showLabel"));
        showLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(showLabel);

        sendBtn = new QPushButton(Client);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_2->addWidget(sendBtn);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QWidget *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", 0));
        label->setText(QApplication::translate("Client", "IP:", 0));
        label_2->setText(QApplication::translate("Client", "\347\253\257\345\217\243\357\274\232", 0));
        connectBtn->setText(QApplication::translate("Client", "Connect", 0));
        showLabel->setText(QString());
        sendBtn->setText(QApplication::translate("Client", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

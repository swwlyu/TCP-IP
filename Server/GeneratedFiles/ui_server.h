/********************************************************************************
** Form generated from reading UI file 'server.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVER_H
#define UI_SERVER_H

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

class Ui_Server
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *portLineEdit;
    QPushButton *listenBtn;
    QTextEdit *receiveTextEdit;
    QTextEdit *sendTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *showLabel;
    QPushButton *sendBtn;

    void setupUi(QWidget *Server)
    {
        if (Server->objectName().isEmpty())
            Server->setObjectName(QStringLiteral("Server"));
        Server->resize(600, 400);
        verticalLayout = new QVBoxLayout(Server);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Server);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        portLineEdit = new QLineEdit(Server);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));

        horizontalLayout->addWidget(portLineEdit);

        listenBtn = new QPushButton(Server);
        listenBtn->setObjectName(QStringLiteral("listenBtn"));

        horizontalLayout->addWidget(listenBtn);


        verticalLayout->addLayout(horizontalLayout);

        receiveTextEdit = new QTextEdit(Server);
        receiveTextEdit->setObjectName(QStringLiteral("receiveTextEdit"));

        verticalLayout->addWidget(receiveTextEdit);

        sendTextEdit = new QTextEdit(Server);
        sendTextEdit->setObjectName(QStringLiteral("sendTextEdit"));

        verticalLayout->addWidget(sendTextEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        showLabel = new QLabel(Server);
        showLabel->setObjectName(QStringLiteral("showLabel"));
        showLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(showLabel);

        sendBtn = new QPushButton(Server);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_2->addWidget(sendBtn);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Server);

        QMetaObject::connectSlotsByName(Server);
    } // setupUi

    void retranslateUi(QWidget *Server)
    {
        Server->setWindowTitle(QApplication::translate("Server", "Server", 0));
        label->setText(QApplication::translate("Server", "Port:", 0));
        listenBtn->setText(QApplication::translate("Server", "Listen", 0));
        showLabel->setText(QString());
        sendBtn->setText(QApplication::translate("Server", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Server: public Ui_Server {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVER_H

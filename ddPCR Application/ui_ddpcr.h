/********************************************************************************
** Form generated from reading UI file 'ddpcr.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDPCR_H
#define UI_DDPCR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ddPCR
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuSuper_Sweet_Graphing_Bro;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ddPCR)
    {
        if (ddPCR->objectName().isEmpty())
            ddPCR->setObjectName("ddPCR");
        ddPCR->resize(800, 600);
        centralwidget = new QWidget(ddPCR);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(640, 40, 91, 24));
        ddPCR->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ddPCR);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 41));
        menuSuper_Sweet_Graphing_Bro = new QMenu(menubar);
        menuSuper_Sweet_Graphing_Bro->setObjectName("menuSuper_Sweet_Graphing_Bro");
        ddPCR->setMenuBar(menubar);
        statusbar = new QStatusBar(ddPCR);
        statusbar->setObjectName("statusbar");
        ddPCR->setStatusBar(statusbar);

        menubar->addAction(menuSuper_Sweet_Graphing_Bro->menuAction());

        retranslateUi(ddPCR);

        QMetaObject::connectSlotsByName(ddPCR);
    } // setupUi

    void retranslateUi(QMainWindow *ddPCR)
    {
        ddPCR->setWindowTitle(QCoreApplication::translate("ddPCR", "ddPCR", nullptr));
        label->setText(QCoreApplication::translate("ddPCR", "Trial Name", nullptr));
        menuSuper_Sweet_Graphing_Bro->setTitle(QCoreApplication::translate("ddPCR", "Super Sweet Graphing Bro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ddPCR: public Ui_ddPCR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDPCR_H

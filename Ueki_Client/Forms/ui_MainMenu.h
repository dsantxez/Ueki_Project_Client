/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created: Thu Mar 7 13:42:33 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *Movie;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *sartu;
    QLabel *user;
    QLabel *password;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QString::fromUtf8("MainMenu"));
        MainMenu->resize(640, 480);
        MainMenu->setContextMenuPolicy(Qt::DefaultContextMenu);
        Movie = new QLabel(MainMenu);
        Movie->setObjectName(QString::fromUtf8("Movie"));
        Movie->setGeometry(QRect(0, 0, 640, 480));
        Movie->setMinimumSize(QSize(241, 0));
        lineEdit = new QLineEdit(MainMenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 430, 113, 23));
        lineEdit_2 = new QLineEdit(MainMenu);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 430, 113, 23));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        sartu = new QPushButton(MainMenu);
        sartu->setObjectName(QString::fromUtf8("sartu"));
        sartu->setGeometry(QRect(520, 430, 94, 24));
        user = new QLabel(MainMenu);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(0, 420, 81, 41));
        password = new QLabel(MainMenu);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(220, 430, 101, 31));

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Ueki Battle Ground", 0, QApplication::UnicodeUTF8));
        Movie->setText(QApplication::translate("MainMenu", "TextLabel", 0, QApplication::UnicodeUTF8));
        sartu->setText(QApplication::translate("MainMenu", "Enter", 0, QApplication::UnicodeUTF8));
        user->setText(QApplication::translate("MainMenu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/images/user.png\" /></p></body></html>", 0, QApplication::UnicodeUTF8));
        password->setText(QApplication::translate("MainMenu", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

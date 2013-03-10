/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created: Sat Mar 9 19:46:54 2013
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
        MainMenu->resize(641, 480);
        MainMenu->setContextMenuPolicy(Qt::DefaultContextMenu);
        Movie = new QLabel(MainMenu);
        Movie->setObjectName(QString::fromUtf8("Movie"));
        Movie->setGeometry(QRect(0, 0, 640, 480));
        Movie->setMinimumSize(QSize(241, 0));
        lineEdit = new QLineEdit(MainMenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 430, 113, 23));
        lineEdit->setFrame(false);
        lineEdit_2 = new QLineEdit(MainMenu);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(470, 430, 113, 23));
        lineEdit_2->setFrame(false);
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_2->setCursorPosition(0);
        sartu = new QPushButton(MainMenu);
        sartu->setObjectName(QString::fromUtf8("sartu"));
        sartu->setGeometry(QRect(583, 430, 51, 24));
        user = new QLabel(MainMenu);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(20, 420, 91, 31));
        QFont font;
        font.setPointSize(6);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        user->setFont(font);
        user->setFrameShape(QFrame::NoFrame);
        user->setTextFormat(Qt::RichText);
        user->setPixmap(QPixmap(QString::fromUtf8(":/images/UekiUserV2.png")));
        user->setScaledContents(true);
        password = new QLabel(MainMenu);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(270, 420, 191, 31));
        password->setFont(font);
        password->setTextFormat(Qt::AutoText);
        password->setPixmap(QPixmap(QString::fromUtf8(":/images/UekiPasswordV2.png")));
        password->setScaledContents(true);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Ueki Battle Ground", 0, QApplication::UnicodeUTF8));
        Movie->setText(QApplication::translate("MainMenu", "TextLabel", 0, QApplication::UnicodeUTF8));
        sartu->setText(QApplication::translate("MainMenu", "Enter", 0, QApplication::UnicodeUTF8));
        user->setText(QString());
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

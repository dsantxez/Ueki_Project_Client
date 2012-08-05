/********************************************************************************
** Form generated from reading UI file 'MainMenu.ui'
**
** Created
**      by: Qt User Interface Compiler version 4.7.4
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

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *Movie;

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

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "Ueki Battle Ground", 0, QApplication::UnicodeUTF8));
        Movie->setText(QApplication::translate("MainMenu", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

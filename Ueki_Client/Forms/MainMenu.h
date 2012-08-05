/* 
 * File:   MainMenu.h
 * Author: denis
 *
 * Created on August 5, 2012, 3:41 PM
 */

#ifndef _MAINMENU_H
#define	_MAINMENU_H

#include "ui_MainMenu.h"
#include <QMovie>

class QMovie;

class MainMenu : public QDialog {
    Q_OBJECT
public:
    MainMenu();
    virtual ~MainMenu();
private:
    Ui::MainMenu widget;
};

#endif	/* _MAINMENU_H */

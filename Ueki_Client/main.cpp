/*
 * File:   main.cpp
 * Author: denis
 *
 * Created on August 5, 2012, 3:34 PM
 */

#include <QtGui/QApplication>
#include <stdio.h>
#include "Forms/MainMenu.h"
#include <string>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    app.setApplicationName("PhononTest");
    MainMenu *mainMenu = new MainMenu();
    mainMenu->show();
    // create and show your widgets here

    return app.exec();
}

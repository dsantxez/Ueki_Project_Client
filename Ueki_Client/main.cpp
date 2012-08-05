/*
 * File:   main.cpp
 * Author: denis
 *
 * Created on August 5, 2012, 3:34 PM
 */

#include <QtGui/QApplication>

#include "Forms/MainMenu.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    MainMenu *mainMenu = new MainMenu();
    mainMenu->show();
    // create and show your widgets here

    return app.exec();
}

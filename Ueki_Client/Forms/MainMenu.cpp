/*
 * File:   MainMenu.cpp
 * Author: denis
 *
 * Created on August 5, 2012, 3:41 PM
 */

#include "MainMenu.h"

MainMenu::MainMenu() {
    widget.setupUi(this);
    QMovie  *movie = new QMovie("ajax-loader.gif");
    widget.Movie->setMovie(movie);
    movie->start();
}

MainMenu::~MainMenu() {
}

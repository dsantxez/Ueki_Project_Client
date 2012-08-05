/*
 * File:   MainMenu.cpp
 * Author: denis
 *
 * Created on August 5, 2012, 3:41 PM
 */

#include "MainMenu.h"

MainMenu::MainMenu() {
    widget.setupUi(this);
    QMovie  *movie = new QMovie(":/images/ueki_intro.gif");
    widget.Movie->setMovie(movie);
    movie->start();
    Phonon::MediaObject *music =
     Phonon::createPlayer(Phonon::MusicCategory,
                          Phonon::MediaSource(":/music/ueki.mp3"));
    music->play();

}

MainMenu::~MainMenu() {
}


#ifndef HALCONMILENARIO_MAINWINDOW_H
#define HALCONMILENARIO_MAINWINDOW_H


#include <SFML/Graphics.hpp>
#include "../data/LinkedList.h"
#include "../data/Map.h"

class MainWindow{
private:
    sf::RenderWindow window;
    sf::Sprite nave;
    sf::Sprite final;
    void moverNave();
    Map* map;

public:
    MainWindow();
};

#endif //HALCONMILENARIO_MAINWINDOW_H

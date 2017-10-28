
#ifndef HALCONMILENARIO_NODO_H
#define HALCONMILENARIO_NODO_H


#include <SFML/Graphics.hpp>

class Nodo{
public:
    sf::Vector2u coor;
    int tipo;
    Nodo* next;
    Nodo();
    Nodo(sf::Vector2u, int);
    sf::Sprite texture;
};
#endif //HALCONMILENARIO_NODO_H

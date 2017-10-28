

#include <iostream>
#include "Nodo.h"

Nodo::Nodo() {
    this->next = NULL;

}

Nodo::Nodo(sf::Vector2u coor, int tipo) {
    this->tipo = tipo;
    this->coor = coor;
    this->next = NULL;

}

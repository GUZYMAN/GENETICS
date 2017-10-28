
#ifndef HALCONMILENARIO_LINKEDLIST_H
#define HALCONMILENARIO_LINKEDLIST_H

#include "Nodo.h"

class LinkedList{
public:
    Nodo* head;
    int size;
    LinkedList();
    void deleteElement(sf::Vector2u);
    void insertFirst(sf::Vector2u, int);
    void printList();
    bool findCoor(sf::Vector2u);
};
#endif //HALCONMILENARIO_LINKEDLIST_H


#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
    this->head = NULL;
    this->size = 0;
}

void LinkedList::insertFirst(sf::Vector2u coor, int tipo) {
    Nodo* newNodo = new Nodo(coor, tipo);
    if(this->head == NULL){
        this->head = newNodo;
        size++;
    }else{
        Nodo* current = this->head;
        newNodo->next = current;
        this->head = newNodo;
        size++;
    }
}

void LinkedList::deleteElement(sf::Vector2u coor)
{
    Nodo* current = this->head;
    Nodo* previous = current;
    while(current->coor != coor && current->next != NULL){
        previous = current;
        current = current->next;
    }
    if(current->coor == coor){
        previous->next = current->next;
        free(current);
        size--;
    }
}

bool LinkedList::findCoor(sf::Vector2u coor) {
    if(this->head != NULL) {
        Nodo *current = this->head;
        while (current->coor != coor && current->next != NULL) {
            current = current->next;
        }
        if (current->coor == coor) {
            return true;
        } else {
            return false;
        }
    }else{
        return false;
    }
}

void LinkedList::printList() {
    if(this->head != NULL) {
        Nodo *current = this->head;
        while (current->next != NULL){
            std::cout << current->tipo << std::endl;
            current = current->next;
        }
        std::cout << current->tipo << std::endl;
    }
}



#ifndef HALCONMILENARIO_MAP_H
#define HALCONMILENARIO_MAP_H


#include "LinkedList.h"

class Map {
public:
    Map();
    int A[50][50];
    LinkedList drawList;
    void imprimir();
    void generarAsteroides(int x, int y);
    void colocarPuntos();


};


#endif //HALCONMILENARIO_MAP_H

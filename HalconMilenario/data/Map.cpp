
#include <iostream>
#include <SFML/System.hpp>
#include "Map.h"

Map::Map() {
    this->drawList = LinkedList();
    for (int i = 0; i < 50; ++i) {
        for (int j = 0; j < 50; ++j) {
            this->A[i][j] = 0;
        }
    }
}

void Map::imprimir() {

    for (int i = 0; i < 50; ++i) {
        for (int j = 0; j < 50; ++j) {
            std::cout << this->A[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

void Map::generarAsteroides(int x, int y)
{
    int c;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1,x-1);
    for (c = 0;c < x/2; ++c){
        int a = dis(gen);
        int b = dis(gen);

        sf::Vector2u vect = sf::Vector2u(a,b);

        if(this->drawList.findCoor(vect)){
            c--;
        }else{
            this->A[a][b] = 2;
            this->drawList.insertFirst(vect, 2);
        }
    }

}

void Map::colocarPuntos() {
    int c;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0,49);
    int a = dis(gen);
    sf::Vector2u vect = sf::Vector2u(0,a);
    this->A[0][a] = 1;
    this->drawList.insertFirst(vect, 1);

    int b = dis(gen);
    sf::Vector2u vect2 = sf::Vector2u(49,a);
    this->A[49][a] = 3;
    this->drawList.insertFirst(vect, 3);
}

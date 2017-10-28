
#include <iostream>
#include "MainWindow.h"

MainWindow::MainWindow() {
    this->window.create(sf::VideoMode(1280,720),"Halcon Milenario",sf::Style::Titlebar | sf::Style::Close);
    this->window.setVerticalSyncEnabled(true);
    this->window.setPosition(sf::Vector2i(200,100));


    sf::Texture bg;
    sf::Sprite bgS;
    if(!bg.loadFromFile("bg.jpg"))
        std::cout << "Error could not load nave image" << std::endl;
    bgS.setTexture(bg);
    bgS.setScale(1.83f, 1.03f);

    sf::Texture asteroide;
    sf::Sprite asteroideS;
    if(!asteroide.loadFromFile("asteroide.png"))
        std::cout << "Error could not load nave image" << std::endl;
    asteroideS.setTexture(asteroide);

    this->map = new Map();
    this->map->generarAsteroides(50,50);this->map->colocarPuntos();this->map->imprimir();

    while(this->window.isOpen())
    {
        sf::Event Event;
        while(this->window.pollEvent(Event))
        {
            switch(Event.type)
            {
                case sf::Event::Closed:
                    this->window.close();
            }
        }
        this->window.clear();
        this->window.draw(bgS);

        for (int i = 0; i < 50; ++i) {
            for (int j = 0; j < 50; ++j) {
                if(map->A[i][j] == 1){
                    sf::Texture nave;
                    sf::Sprite naveS;
                    if(!nave.loadFromFile("nave.png"))
                        std::cout << "Error could not load nave image" << std::endl;
                    this->nave.setTexture(nave);
                    this->nave.setPosition(i*23,j*13);
                    this->nave.setScale(0.22f,0.22f);
                    this->window.draw(this->nave);
                }
                if (map->A[i][j] == 2){
                    sf::Texture asteroide;
                    sf::Sprite asteroideS;
                    if(!asteroide.loadFromFile("asteroide.png"))
                        std::cout << "Error could not load nave image" << std::endl;
                    asteroideS.setTexture(asteroide);
                    asteroideS.setPosition(i*23,j*13);
                    asteroideS.setScale(0.30f,0.30f);
                    this->window.draw(asteroideS);
                }
                if(map->A[i][j] == 3){
                    sf::Texture final;
                    sf::Sprite finalS;
                    if(!final.loadFromFile("final.png"))
                        std::cout << "Error could not load nave image" << std::endl;
                    this->final.setTexture(final);
                    this->final.setPosition(i*23,j*13);
                    this->final.setScale(0.29f,0.29f);
                    this->window.draw(this->final);
                }
            }
        }
        moverNave();
        this->window.display();
    }
}

void MainWindow::moverNave()
{

}

#include <SFML/Graphics/RenderWindow.hpp>

#include "Structure/MainWindow.h"

using namespace std;

int main() {
    MainWindow *win = new MainWindow();
}

 /*
#include <iostream>
#include <SFML/Graphics.hpp>
#include "data/Maze.h"
using namespace std;

int main() {
    sf::RenderWindow wd;
    wd.create(sf::VideoMode(1280, 720), "Halcon Milenario", sf::Style::Titlebar | sf::Style::Close);

    //variable declaration
    bool setFlag = false; //sentinel value for while loop
    int row;
    int col;
    Maze maze1; //instantiate Maze object

    //begin program function
    maze1.printMaze(); //display Maze


        //set start position
        while (setFlag == false) {
            row = 0;
            col = 0;
            if (maze1.getCell(row, col) != '+' && maze1.getCell(row, col) != 'E') {
                maze1.setStart(row, col); //set starting position on maze
                setFlag = true;
            } else //position is either a block or an exit
            {
                cout << "That position isn't open. Please select again." << endl;
                cout << endl;
            } //end if to set start position
        } //end while

        cout << endl;
        maze1.printMaze(); //display maze

        if (maze1.backTrack(row, col) == true) {
            cout << "Finish" << endl;
        } else {
            cout << "Sorry, you didn't find the exit." << endl;
        }
        maze1.printMaze(); //display maze

    }*/


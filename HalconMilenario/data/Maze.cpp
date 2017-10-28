#include <iostream>
#include "Maze.h"
using namespace std;

Maze::Maze() //default constructor
{
    char def = 'O';
    for ( int i = 0; i < ROWS; i++ ) //loop through rows
    {
        for (int j = 0; j < COLUMNS; j++ ) //loop through columns of current row
        {
            maze[ i ][ j ] = def;
        }
    }
    writeBlock(); //write block positions into maze
    writeExit(); //write exit position into maze
}

void Maze::printMaze()
{
    for ( int i = 0; i < ROWS; i++ )
    {
        cout << "+---+---+---+---+---+\n";
        //loop through columns of current row
        for ( int j = 0; j < COLUMNS; j++ )
        {
            cout << "| " << maze[ i ][ j ] << " ";
        }
        cout << "|" << endl; //start new line of output
    }
    cout << "+---+---+---+---+---+" << endl;
}
void Maze::writeBlock()
{
    int x = 1;
    int y = 4;
    char block = '+';
    maze[ x ][ y ] = block; //set block at 1,4
    maze[ ++x ][ y ] = block; //set block at 2,4
    maze[ ++x ][ y ] = block; //set block at 3,4
    maze[ x ][ --y ] = block; //set block at 3,3
    --y; //y = 2
    maze[ x ][ --y ] = block; //set block at 3,1
    maze[ x ][ --y ] = block; //set block at 3,0
    --x; //x = 2
    maze[ --x ][ ++y ] = block; //set block at 1,1
    maze[ --x ][ ++y ] = block; //set block at 0,2
} //end function writeBlock

//function to set the exit location from the maze
void Maze::writeExit()
{
    maze[ 0 ][ 3 ] = 'E'; //set exit at 0,3
} //end function writeExit

//function to set the starting position in the maze
void Maze::setStart( int row, int col )
{
    setCell( row, col, 'S' );
} //end function setStart

char Maze::getCell( int row, int col )
{
    char cell = maze[ row ][ col ];
    return cell;
} //end function getCell

void Maze::setCell( int row, int col, char val )
{
    maze[ row ][ col ] = val;
} //end function setCell


bool Maze::backTrack( int row, int col )
{

    if ( row < 0 || col < 0 || row >= ROWS || col >= COLUMNS ) //search off the maze
    {
        return false;
    }
    else if ( getCell( row, col ) == '+' )
    {
        return false;
    }
    else if ( getCell( row, col ) == 'X' )
    {
        return false;
    }
    else if ( getCell( row, col ) == 'E' )
    {
        return true;
    }
    else
    {
        setCell( row, col, 'X' ); //indicate cell has already been visited
        // search each adjacent row and column position, but only if the exit has not been found.
        if ( backTrack( (row - 1), col ) == true )
        {
            return true;
        }
        else if ( backTrack( row, (col + 1) ) == true )
        {
            return true;
        }
        else if ( backTrack( row, (col - 1) ) == true )
        {
            return true;
        }
        else if ( backTrack( (row + 1), col ) == true )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}


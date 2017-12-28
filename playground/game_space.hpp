/*
 * =====================================================================================
 *
 *       Filename:  game_space.hpp
 *
 *    Description:  Header file for GameBoard.
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:20:16
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*header file for main.cpp*/
#include <iostream>
#include <iomanip>
using namespace std;

class Gameboard
{
  char gameSpace[4][4];
public:
  Gameboard(); //initialize the board with '-' in all 16 spaces
  void setGameSpace(int row,int column, char value); //x,y,or '-' in each game square
  char getGameSpace(int row,int column);
  int fourInRow(); //four 'x's in any row 'wins'
  void printInfo(); //print the game board in a 4x4 matrix
};

  //TODO: complete the class definition
Gameboard::Gameboard()
{
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 4; j++)
      {
      gameSpace[i][j] = '-';
      }
    }
}

void Gameboard::setGameSpace(int row,int column, char value)
{
  gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
  return gameSpace[row][column];
}

int Gameboard::fourInRow()
{
  int countX = 0;
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 4; j++)
      {
      if (gameSpace[i][j] == 'x')
        {
        countX++;
        }
      }
    if (countX == 4)
      {
      return 1;
      }
    }
  if (countX == 4)
    {
    return 1;
    }
  else
    {
    return 0;
    }
}

void Gameboard::printInfo()
{
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 4; j++)
      {
      cout << gameSpace[i][j] << " ";
      }
    cout << endl;
    }
}


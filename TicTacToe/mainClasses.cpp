/*
 * =====================================================================================
 *
 *       Filename:  mainClasses.cpp
 *
 *    Description:  Main Classes for Tic Tac Toe Game.
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:40:58
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "main.hpp"
using namespace std;

class User
{
  string name;
  char gameTag;
  
public:
  User();
  void setName(string nameIn);
  void setGameTag(char tagIn);
  string getName();
  char getGameTag();
};

User::User()
{
  name = "Unknown";
  gameTag = '-';
}

void User::setName(string nameIn)
{
  name = nameIn;
}

void User::setGameTag(char tagIn)
{
  gameTag = tagIn;
}

string User::getName()
{
  return name;
}

char User::getGameTag()
{
  return gameTag;
}


class Gameboard
{
  char gameSpace[4][4];
public:
  Gameboard();
  void setGameSpace(int row,int column, char value);
  char getGameSpace(int row,int column);
  int fourInRow(char value);
  int fourInColumn(char value);
  int fourInDiagonal(char value);
  int checkSpace(int x, int y);
  void printInfo();
};

Gameboard::Gameboard()
{
  for(int i=0;i<4; i++)
    for(int j=0;j<4; j++)
      {
        gameSpace[i][j] = '-';
      }
}
void Gameboard::setGameSpace(int row,int column,char value)
{
  gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row,int column)
{
  return gameSpace[row][column];
}

int Gameboard::fourInRow(char value)
{
  int count;
  for(int i = 0; i < 4; i++)
  {
    count = 0;
    for(int j = 0; j < 4; j++)
    {
      if(gameSpace[i][j] == value)
      {
        count++;
      }
    }
    if(count == 4)
    {
      return 1;
    }
  }
  if(count == 4)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int Gameboard::fourInColumn(char value)
{
  int countWin = 0;
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++) {
      if (gameSpace[j][i] == value)
        {
          countWin++;
        }
    }
    if (countWin == 4)
      {
        return 1;
      }
    else
      {
      countWin = 0;
      }
  }
  if (countWin == 4)
    {
    return 1;
    }
  else
    {
    return 0;
    }
}

int Gameboard::fourInDiagonal(char value)
{
  int countWin = 0;
    // check right diagonal
  for (int i = 0; i < 4; i++)
    {
    if (gameSpace[i][i] == value)
      {
      countWin++;
      }
    }
  if (countWin == 4)
  {
    return 1;
  }
  else
  {
    countWin = 0;
  }
  
    // check left diagonal
  for (int i = 0; i < 4; i++)
  {
  if (gameSpace[i][3 - i] == value)
    {
    countWin++;
    }
  }
  
  if (countWin == 4)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int Gameboard::checkSpace(int x, int y)
{// returns 1 if space it free, 0 if space has been taken
  if (gameSpace[x][y] == '-')
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
  cout << std::setw(2) << "*" << std::setw(2) << 0 << std::setw(2) << 1;
  cout << std::setw(2) << 2 << std::setw(2) << 3 << std::setw(2);
  for(int i=0;i<4; i++)
    {
    cout << std::setw(2) << endl;
    cout << i << std::setw(2);
    for(int j=0;j<4; j++)
      {
      cout << gameSpace[j][i] << std::setw(2);
      }
    cout << endl;
    }
}

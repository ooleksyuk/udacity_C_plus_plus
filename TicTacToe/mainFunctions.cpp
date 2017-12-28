/*
 * =====================================================================================
 *
 *       Filename:  mainFunctions.cpp
 *
 *    Description: Main functions for Tic Tac Toe Game. 
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:41:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "main.hpp"
#include "mainClasses.cpp"

void playGame();
string promptUsersName();
int promptUsersMove(char step);
void printUsersInformation(User user);
int checkGameResults(Gameboard &gameBoard, User &user);
void getXandY(int &x, int &y, User user, Gameboard gameBoard);

void playGame(){
  User user1, user2;
  
  user1.setName(promptUsersName());
  user1.setGameTag('x');
  
  cin.clear();
  
  user2.setName(promptUsersName());
  user2.setGameTag('o');
  
  cin.clear();
  
  printUsersInformation(user1);
  printUsersInformation(user2);
  
  cout << "============== START GAME ==============" << endl;
  
  Gameboard gameBoard;
  
  int x, y;
  int gameResult;
  while(1)
    {
    getXandY(x, y, user1, gameBoard);
    gameBoard.setGameSpace(x, y, 'x');
    gameResult = checkGameResults(gameBoard, user1);
    if (gameResult == 1)
      {
      gameBoard.printInfo();
      return;
      }

    getXandY(x, y, user2, gameBoard);
    gameBoard.setGameSpace(x, y, 'o');
    gameResult = checkGameResults(gameBoard, user2);
    if (gameResult == 1)
      {
      gameBoard.printInfo();
      return;
      }
    }
  cout << "============== GAME OVER ==============" << endl;
}

void getXandY(int &x, int &y, User user, Gameboard gameBoard)
{
  gameBoard.printInfo();
  cout << user.getName() << " Enter your position: " << endl;
  int result = 0;
  while(!result)
    {
    x = promptUsersMove('x');
    y = promptUsersMove('y');
    result = gameBoard.checkSpace(x, y);
    if (result == 0)
      {
      cout << "Space you selected is taken, please try again" << endl;
      }
    }
}

int checkGameResults(Gameboard &gameBoard, User &user)
{
  int gameResult;
  gameResult = gameBoard.fourInRow(user.getGameTag());
  if (gameResult == 1)
    {
    cout << "Congratulations " << user.getName() << " won the game " << endl;
    return gameResult;
    }
  
  gameResult = gameBoard.fourInColumn(user.getGameTag());
  if (gameResult == 1)
    {
    cout << "Congratulations " << user.getName() << " won the game " << endl;
    return gameResult;
    }
  
  gameResult = gameBoard.fourInDiagonal(user.getGameTag());
  if (gameResult == 1)
    {
    cout << "Congratulations " << user.getName() << " won the game " << endl;
    return gameResult;
    }
  return gameResult;
}

void printUsersInformation(User user)
{
  cout << "Game participants" << endl;
  cout << "User 1 \tName: " << user.getName();
  cout << "\tGame tag: " << user.getGameTag() << endl;
}

string promptUsersName()
{
  string userName;
  cout << "Enter your name" << endl;
  getline(cin, userName);
  return userName;
}

int promptUsersMove(char step)
{
  int value;
  cin.clear();
  cout << step << " = ";
  cin >> value;
  
  while(value > 3 or value < 0 or !cin)
    {
    cin.clear();
    std::cout<<"That is not a valid position" << endl;
    cout << step << " = ";
    cin >> value;
    }
  
  return value;
}

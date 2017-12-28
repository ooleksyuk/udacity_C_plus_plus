/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Create a game called TicTacToe.
 *                  For this programming quiz, I would like you to create a game called TicTacToe. In this version of the game you will need to:
 *
 *                  Create a 4x4 game board
 *                  Prompt the first user (the 'x' user) to enter their name 
 *                  Prompt the second user (the 'o' user) to enter their name
 *                  Prompt the 'x' user to select a grid position where they would like to place an 'x'. 
 *                  Prompt the 'o' user to select a grid position where they would like to place an 'o'.
 *                  After each user has a turn, check for any row, column, diagonal that has 4 'x's or 4 'o's.
 *                  If 4 'x's are found in the same col, row, diagonal, declare the 'x' user the winner. 
 *                  If 4 'o's are found in the same col, row, diagonal, declare the 'o' user the winner.
 *                  End the game and declare the winner.
 *                  If the grid is filled (each player gets 8 turns) and there is not a row, column, diagonal 
 *                  with 4 of the same symbol, the game is tied. Declare a tie game.
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:40:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "main.hpp"
#include "mainFunctions.cpp"
using namespace std;

int main()
{
  playGame();
  return 0;
}

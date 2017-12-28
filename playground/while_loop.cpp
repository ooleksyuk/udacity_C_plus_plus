/*
 * =====================================================================================
 *
 *       Filename:  while_loop.cpp
 *
 *    Description:  Goal: In the programming quiz, use a while loop to prompt
 *                  the user to guess a target number.
 *                  Tell the user if the guess is too high or too low.
 *                  The user enters -1  or guesses the target number to end
 *                  the program.
 *
 *        Version:  1.0
 *        Created:  08/31/2017 14:27:40
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include"main.hpp"
int main()
{
    //use 55 as the number to be guessed
  int target = 55;
  int guess = -1;
  std::cout<<"Guess a number between 0 and 100: ";
  do {
    std::cin>>guess;
    std::cout<<guess<<"\n";
    if (guess == -1)
    {
      std::cout << "Sorry to see you leave the game!" << std::endl;
      return guess;
    }
    else if (guess < target)
    {
      std::cout << "Yor number is lower than target" << std::endl;
    }
    else if (guess > target)
    {
      std::cout << "Yor number is higher than target" << std::endl;
    }
    else if (guess == target)
    {
      std::cout << "You guessed right, the number is " << target << std::endl;
      return guess;
    }
    
  } while(guess != -1 || guess != target);
  
  
  
  return 0;
}

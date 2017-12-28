/*
 * =====================================================================================
 *
 *       Filename:  pointers.cpp
 *
 *    Description:  For this program print for each variable
                    print the value of the variable,
                    then print the address where it is stored.
 *
 *        Version:  1.0
 *        Created:  08/31/2017 14:57:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include<iostream>
#include<string>

int main()
{
  int givenInt;
  float givenFloat;
  double givenDouble ;
  std::string givenString;
  char givenChar;
  
  std::cin >> givenInt;
  std::cin >> givenFloat;
  std::cin >> givenDouble;
  std::cin.ignore();
  std::cin >> givenChar;
  std::cin.ignore();
  std::getline (std::cin, givenString);
  
  std::cout << "Value " << givenInt << " Address " << &givenInt << std::endl;
  std::cout << "Value " << givenFloat << " Address " << &givenFloat << std::endl;
  std::cout << "Value " << givenDouble << " Address " << &givenDouble << std::endl;
  std::cout << "Value " << givenChar << " Address " << (void *)&givenChar << std::endl;
  std::cout << "Value " << givenString << " Address " << &givenString << std::endl;
  
  return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  if_else_statement.cpp
 *
 *    Description: Goal: learn if-else statements in C++ 
 *
 *        Version:  1.0
 *        Created:  08/30/2017 13:11:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*Goal: learn if-else statements in C++*/

#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where
    //0 = False, 1 = True
  std::string TorF[] = {"False", "True"};
  
  int a = 100;
  int b = 33;
  int c = 33;
  
    //Print out the string values of each relational operation
  std::cout<<"a < b is "<<TorF[a<b]<<std::endl;
  std::cout<<"a > b is "<<TorF[a>b]<<std::endl;
  std::cout<<"a != b is "<<TorF[a!=b]<<std::endl;
  std::cout<<"c >= b is "<<TorF[c>=b]<<std::endl;
  std::cout<<"c <= b is "<<TorF[c<=b]<<std::endl;
  return 0;
}

/*
 * =====================================================================================
 *
 *       Filename:  tryMe.cpp
 *
 *    Description:  Try me
 *
 *        Version:  1.0
 *        Created:  09/06/2017 12:13:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
#include <string>

int main()
{
  unsigned char half_limit = 150;

  for (unsigned char i = 0; i < 2 * half_limit; ++i)
  {
    std::cout << "hello " << i;
  }
  return 0;
}

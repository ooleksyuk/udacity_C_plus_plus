/*
 * =====================================================================================
 *
 *       Filename:  main.hpp
 *
 *    Description:  a Header file for animal shelter project
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:34:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*The header file for main.cpp*/

#include<iostream>
#include "Dog.cpp"

using namespace std;

void printRoster(Dog roster[], int size);

void printRoster(Dog roster[], int size)
{
  for(int i=0;i<size;i++)
    {
    roster[i].printInfo();
    }
}

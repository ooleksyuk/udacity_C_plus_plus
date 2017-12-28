/*
 * =====================================================================================
 *
 *       Filename:  variable_assignment_operators.cpp
 *
 *    Description:  Goal: understand variable assignment operators
 *
 *        Version:  1.0
 *        Created:  08/30/2017 12:48:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include "main.hpp"

int main()
{
  int a = 0;
  std::cout<<"Variable\t\tOperation\tResult\n";
  std::cout<<"a = "<<a;
  a += 2;
  std::cout<<"\t\t\ta += 2 \t\t a = "<<a<<"\n";
  
  std::cout<<"a = "<<a<<" : ";
  a -= 4;
  std::cout<<"\t\ta -= 4 \t\t a = "<<a<<"\n";
  
  int b = 3;
  std::cout<<"a = "<<a<<", b = "<<b<<" : ";
  a *= b;
  std::cout<<"\ta *= b \t\t a = "<<a<<"\n";
  
  std::cout<<"a = "<<a<<", b = "<<b<<" : ";
  a /= b;
  std::cout<<"\ta /= b \t\t a = "<<a<<"\n";
  
  return 0;
}

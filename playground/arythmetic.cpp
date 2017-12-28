/*
 * =====================================================================================
 *
 *       Filename:  arythmetic.cpp
 *
 *    Description:  Test arythmetis overloaded operators.
 *
 *        Version:  1.0
 *        Created:  08/30/2017 12:42:21
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
  int a, b = 0;
  int post, pre = 0;
  cout<<"Initial values: \t\ta = "<<a<<" b = "<<b<<endl;
  cout<<"Initial values: \t\tpost = "<<post<<" pre= "<<pre<<"\n";
  post = a++;
  pre = ++b;
  cout<<"After one postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
  post = a++;
  pre = ++b;
  cout<<"After two postfix and prefix: \tpost = "<<post<<" pre= "<<pre<<"\n";
  return 0;
}

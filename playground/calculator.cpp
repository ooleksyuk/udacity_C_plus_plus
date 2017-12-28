/*
 * =====================================================================================
 *
 *       Filename:  calculator.cpp
 *
 *    Description:  Now I would like you to do a switch statement with breaks
 *                  between the cases. Create a program that asks the user for
 *                  two float numbers. Then asks the user if they would like to:
 *                  add the numbers, subtract the numbers, multiply the numbers, 
 *                  divide the numbers.
 *                  The program should then print the numbers with the chosen
 *                  operation and the solution.
 *
 *        Version:  1.0
 *        Created:  08/31/2017 13:49:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include"main.hpp"

int sumAverage()
{
  float arr[5], sum, average;
  std::cout << "Enter five numbers" << std::endl;
  for (int i = 0; i < 5; i++)
  {
    std::cout << i + 1 << ". ";
    std::cin>>arr[i];
  }
  for (int i = 0; i < 5; i++)
  {
    sum = sum + arr[i];
  }
  average = sum / 5;
  std::cout << "Sum = " << sum << std::endl;
  std::cout << "Average = " << average << std::endl;
  
  
  return 0;
}

void printLine(float in1, float in2, char operation, float result)
{
  std::cout << in1 << operation << in2 << " = " << result << std::endl;
}

void calculator()
{
  float in1, in2, answer;
  std::cout<<"Enter two numbers:\n";
  std::cin>>in1;
  std::cin>>in2;
  char operation;
  std::cout<<"Enter the operation '+','-','*','/':\n";
  std::cin>>operation;
  switch(operation)
  {
    case ('+'):
    {
    answer = in1 + in2;
    break;
    }
    case ('-'):
    {
    answer = in1 - in2;
    break;
    }
    case ('*'):
    {
    answer = in1 * in2;
    break;
    }
    case ('/'):
    {
    answer = in1 / in2;
    break;
    }
    default:
    {
    std::cout<<"Illegal operation";
    }
  }
  printLine(in1, in2, operation, answer);
}

int main()
{
  
  calculator();
  sumAverage();
  return 0;
}

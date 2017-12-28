/*
 * =====================================================================================
 *
 *       Filename:  min_max.cpp
 *
 *    Description:  Find the min and max and average of 15 numbders that a user will input.
 *                  The numbers range from 0 to 100. 
 *                  We will do it now for practice and again later when we learn arrays and 
 *                  functions. So you do not have to keep all fifteen numbers stored in memory.
 *                  HINT: you will need to use scanf for input text.
 *
 *        Version:  1.0
 *        Created:  08/31/2017 15:17:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */


/*Find the min and max and average of 15 numbders that a user will input.
 **The numbers range from 0 to 100.
 **We will do it now for practice and again later when we learn arrays and
 **functions. So you do not have to keep all fifteen numbers stored in memory.
 **HINT: you will need to use scanf for input text.
 */
#include "main.hpp"

int main()
{
  float arr[15], sum, average;
  float min;
  float max;
  
  for (int i = 0; i < 15; i++) {
    std::cout << "Enter number " << i + 1 << ": ";
    std::cin >> arr[i];
  }
  
  for (int i = 0; i < 15; i++)
    {
    sum = sum + arr[i];
    }
  
  min = arr[0];
  max = arr[0];
  for (int i = 0; i < 16; i++)
    {
    if (min > arr[i+1])
      {
      min = arr[i];
      }
    if (max < arr[i+1])
      {
      max = arr[i];
      }
    }
  
  average = sum / 15;
  
  std::cout << "Sum = " << sum << std::endl;
  std::cout << "Average = " << average << std::endl;
  std::cout << "Min = " << min << std::endl;
  std::cout << "Max = " << max << std::endl;
  
  return 0;
}

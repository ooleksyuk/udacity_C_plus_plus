/*
 * =====================================================================================
 *
 *       Filename:  matrix_mult.cpp
 *
 *    Description:  Multiply matrix 4x4 on vector 4
 *
 *        Version:  1.0
 *        Created:  08/31/2017 15:50:32
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */


/*Goal: practice using multidimensional arrays.
 **Write a program that will accept values for a 4x4 array
 **and a vector of size 4.
 **Use the dot product to multiply the array by the vector.
 **Print the resulting vector.
 */

#include "main.hpp"

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
  int matrix[4][4];
  int vector[4];
  int product[4];
  int sum = 0;
  
  for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
      {
        //std::cout<<"matrix["<<i<<"]["<<j<<"] = \n";
      std::cin>>matrix[i][j];
        //std::cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";
      }
    }
  for(int i=0; i<4; i++)
    {
      //std::cout<<"vector["<<i<<"] = \n";
    std::cin>>vector[i];
      //std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
    }
  
  for (int i = 0; i < 4; i++)
    {
    for (int j = 0; j < 4; j++)
      {
      sum = (matrix[i][j] * vector[i]) + sum;
      }
    product[i] = sum;
    sum = 0;
    }
  
  for(int i=0;i<4;i++)
    {
    std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
  return 0;
}

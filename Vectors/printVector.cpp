/*
 * =====================================================================================
 *
 *       Filename:  printVector.cpp
 *
 *    Description:  Print vector
 *
 *        Version:  1.0
 *        Created:  09/06/2017 09:55:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it

//TODO: Add the necessary libraries
#include "printVector.hpp"
//#include "main.hpp"
int main ()
{
  //TODO: create a vector of floats
  vector<float> vFloat;

  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

  std::cout<<"\n\nAdding 10 elements to the vector\n";

  //TODO: assign the value 8.8 to 10 elements of the vector
  vFloat.assign(10, 8.8);

  std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";


  //TODO: Complete the Print function in main.hpp
  // Call the function here to print out each element of vFloat
  printVector(vFloat);

  vFloat.push_back(24);
  vFloat.push_back(25);
  vFloat.push_back(26);
  vFloat.push_back(27);

  printVector(vFloat);

  return 0;
}



/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Vectors
 *
 *        Version:  1.0
 *        Created:  09/06/2017 09:26:12
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

// constructing vectors
#include <iostream>
#include <vector>  //Need to include the vector library!
using namespace std;

int main ()
{
  //creating a vector of integers
  std::vector<float> vectorInts;
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  //Changing the size of vectorInts to 6
  vectorInts.resize(6);
  std::cout<<std::endl<<std::endl<<"vectorInts now has "<<vectorInts.size()<<" elements"<<std::endl;

  return 0;
}

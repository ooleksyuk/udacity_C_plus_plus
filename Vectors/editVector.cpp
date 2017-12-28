/*
 * =====================================================================================
 *
 *       Filename:  editVector.cpp
 *
 *    Description:  Operations with elements of the Vector
 *
 *        Version:  1.0
 *        Created:  09/06/2017 09:45:38
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


int main ()
{
  //creating a vector of integers
  std::vector<int> vectorInts;
  //creating an iterator for the vector
//  std::vector<int>::iterator it;
  std::vector<int>::iterator it;
  vectorInts.max_size();

  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";
  std::cout <<"vectorInts has max " << vectorInts.max_size() << " elements" << std::endl;

  std::cout<<"\n\nAdding four elements to the vector\n";
  //assigning the value 3 to 4 elements of the vector
  vectorInts.assign(4,3);
  std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

  vectorInts.assign(5, 4);
  //printing the contents of vectorInts
  std::cout<<"VectorInts has these elements:\n";
//  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
//    std::cout<<*it<<" ";
  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
  {
    std::cout << *it;
  }
  std::cout << std::endl << "Differencing iterator" << std::endl;

  for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
  {
    std::cout << &it;
  }
  std::cout << std::endl << "Pointer iterator" << std::endl;

  std::cout << std::endl;
  return 0;
}



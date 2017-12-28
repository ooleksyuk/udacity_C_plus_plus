/*
 * =====================================================================================
 *
 *       Filename:  printVector.hpp
 *
 *    Description:  Header File for Print Vector
 *
 *        Version:  1.0
 *        Created:  09/06/2017 09:55:37
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

using namespace std;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
{//printing the contents of vIns
  //TODO: Complete the function
  vector<float>::iterator it;
  for ( it = vIn.begin(); it != vIn.end(); ++it )
  {
    cout << *it << ", ";
  }
  cout << endl;
}


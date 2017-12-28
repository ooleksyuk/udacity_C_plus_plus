/*
 * =====================================================================================
 *
 *       Filename:  addEmenets.cpp
 *
 *    Description:  Add emelemts to the Vector.
 *
 *        Version:  1.0
 *        Created:  09/06/2017 11:40:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

// Goal: practice constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it


#include "addEmenets.hpp"

int main ()
{
  EditVector<int> iInts;
  EditVector<float> fInts;
  EditVector<string> sInts;

  cout << "======= assign =======" << endl;
  iInts.assignF(5, 3);
  fInts.assignF(4.0, 3);
  sInts.assignF("good bue", 3);
  iInts.print();
  fInts.print();
  sInts.print();

  cout << "======= push =======" << endl;
  for (int i; i < 10; i++)
  {
    iInts.push(i);
    fInts.push(i);
  }
  sInts.push("hello");
  iInts.print();
  fInts.print();
  sInts.print();

  cout << "======= emplace =======" << endl;
  iInts.emplaceF(0, 10);
  fInts.emplaceF(0, 11.0);
  sInts.emplaceF(0, "Hello");
  iInts.print();
  fInts.print();
  sInts.print();

  return 0;
}



/*
 * =====================================================================================
 *
 *       Filename:  addEmenets.hpp
 *
 *    Description:  Header file for Add Elements to a Vector.
 *
 *        Version:  1.0
 *        Created:  09/06/2017 11:41:07
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
template<class T>
class EditVector {
private:
  vector<T> elements;

public:

  void print() {//printing the contents of vIns
    typename vector<T>::iterator it;
    for (it = elements.begin(); it != elements.end(); ++it) {
      cout << *it << " ";
    }
    cout << endl << endl;
  }

  void push(T const& elem)
  {
    elements.push_back(elem);
  }

  void pop(T const& elem)
  {
    if (elements.empty()) {
      throw out_of_range("EditVector<>::pop(): empty stack");
    }
    elements.pop_back(elem);
  }

  template<typename N>
  void assignF(T const& elem, N const& count) {
    elements.assign(count, elem);
  }

  template<typename N>
  void emplaceF(N const& loc, T const& elem) {
    typename vector<T>::iterator it;
    elements.emplace(elements.begin() + loc, elem);
  }
};
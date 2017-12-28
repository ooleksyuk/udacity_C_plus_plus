/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main function for animal shelter project.
 *
 *        Version:  1.0
 *        Created:  09/02/2017 10:34:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*
 * For this program, practice using classes by :
 *
 * using the Dogs class to create an animal shelter roster.
 * add a constructor to the Dogs class. The initial name for a Dog is "Unknown"
 * declare and define the function:
 * printRoster(roster,SIZE);
 */

/*Goal: practice using a class.
 **Create an array called roster, populate it
 **with multiple instances of Dog, it has a size of SIZE.
 **The create a function called
 **printRoster(roster, SIZE) that will print
 **all the information about all the dogs on the roster.
 */

#include "main.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    //Then assign names to the Dog.
  
    //ToDo: declare and define this function
    //in the header file
  const int SIZE=5;
  Dog roster[SIZE];
  roster[0].setName("Doggy0");
  roster[0].setLicenseNumber(123);
  roster[1].setName("Doggy1");
  roster[1].setLicenseNumber(456);
  roster[2].setName("Doggy2");
  roster[2].setLicenseNumber(789);
  roster[3].setName("Doggy3");
  roster[3].setLicenseNumber(012);
  roster[4].setName("Doggy4");
  roster[4].setLicenseNumber(345);
  printRoster(roster, SIZE);
  
  return 0;
}

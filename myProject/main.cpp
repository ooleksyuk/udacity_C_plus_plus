/*This program accepts inputs from the input.txt file*/

#include <iostream>
#include <string>
#include <sstream>

int main()
{
  std::string stringLength;
  float inches = 0;
  float yardage = 0;
  std::cout<<"Enter a number of inches: "<<std::endl;
  std::getline(std::cin, stringLength);
  std::stringstream(stringLength)>>inches;
  std::cout<<"You entered "<<inches<<std::endl;
  
  yardage = inches / 36;
  
  std::cout<<"Yardage is "<<yardage<<std::endl;
  
  return 0;
}

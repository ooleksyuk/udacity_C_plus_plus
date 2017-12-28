/*
 * =====================================================================================
 *
 *       Filename:  volume.cpp
 *
 *    Description:  Practice mathematical operations with cmath lib.
 *
 *        Version:  1.0
 *        Created:  08/30/2017 11:12:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  OLGA OLEKSYUK (olgawow), mail@olga-v.com
 *   Organization:  
 *
 * =====================================================================================
 */

/** Goal: practice arithmetic operations in C++
 ** Write a program that calculates the volumes of: a cube, sphere, cone.
 ** Cube Volume = side^3
 ** Sphere Volume = (4/3) * pi * radius^3
 ** Cone Volume = pi * radius^2 * (height/3)
 ** Write the values to the console.
 */

#include "main.hpp"

int main()
{
  //Dimension of the cube
  float cubeSide = 5.4;
  //Dimension of sphere
  float sphereRadius = 2.33;
  //Dimensions of cone
  float coneRadius = 7.65;
  float coneHeight = 14;
  
  float volCube, volSphere, volCone = 0;
  
  volCube = std::pow(cubeSide, 3);
  volSphere = (4.0 / 3.0) * M_PI * std::pow(sphereRadius, 3);
  volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight / 3.0);
  
  std::cout << "Cube Volume " << volCube << std::endl;
  std::cout << "Sphere Volume " << volSphere << std::endl;
  std::cout << "Cone Volume " << volCone << std::endl;
  
  return 0;
}

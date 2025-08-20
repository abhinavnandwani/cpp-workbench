
double someOtherFunction(); //forward decleration

#include <iostream>
#include "Cube.h"

uiuc::Cube *CreateUnitCube() {
  uiuc::Cube cube;
  cube.setLength(15);
  return &cube;
}

int main() {
  uiuc::Cube *c = CreateUnitCube();
  someOtherFunction();
  double a = c->getSurfaceArea();
  std::cout << "Surface Area: " << a << std::endl;
  double v = c->getVolume();
  std::cout << "Volume: " << v << std::endl;
  return 0;
}

double someOtherFunction() {
  uiuc::Cube cubes[100];
  double totalVolume = 0;

  for (int i = 0; i < 100; i++){
    cubes[i].setLength(i);
    totalVolume += cubes[i].getVolume();
  }

  return totalVolume;
}

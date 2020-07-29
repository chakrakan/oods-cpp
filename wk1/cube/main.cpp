//
// Created by kanis on 2020-07-28.
//
#include <iostream>
#include "cube.h" // this is added so the compiler can know of the cube object we initialize

int main() {
    uiuc::Cube c;
    c.setLength(2.4);
    std::cout << "Volume: " << c.getVolume() << std::endl;

    double surfaceArea = c.getSurfaceArea();
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    return 0;
}

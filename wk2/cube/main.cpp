//
// Created by kanis on 2020-07-28.
//
#include <iostream>
#include "cube.h" // this is added so the compiler can know of the cube object we initialize
using uiuc::Cube;

double someOtherFunction(); // forward declaration

/**
 * Function returns a memory address to a cube object it creates and assigns length as 15
 * NOTE: Remember we said that a stack frame exists ONLY so long as the function is running
 * At line 19, we return this function thus ending it, and by that logic, removing all the work it did from the stack.
 * @return
 */
Cube *CreateUnitCube() {
    Cube cube;
    cube.setLength(15);
    return &cube; // warning C4172: returning address of local variable or temporary: cube
}

int main() {
    Cube *c = CreateUnitCube(); // here we run the above function, but since the function returns a memory address
        // and finishes, the stack memory is freed out or used for something else
    someOtherFunction(); // since we call this function next, most likely used for this
    double a = c->getSurfaceArea(); // expect 1350
    std::cout << "Surface Area: " << a << std::endl; // but get 5.14037e+124
    double v = c->getVolume(); // expect 3375
    std::cout << "Volume: " << v << std::endl; // but get -7.92985e+185
    return 0;
}

double someOtherFunction() {
    Cube cubes[10];
    double totalVolume = 0;

    for (int i = 0; i < 10; ++i) {
        cubes[i].setLength(i);
        totalVolume += cubes[i].getVolume();
    }
    return totalVolume;
}
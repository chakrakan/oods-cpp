//
// Created by kanis on 2020-07-28.
//
#include "cube.h" // this is added so the compiler can know of the cube object we initialize

int main() {
    Cube c;
    c.setLength(3.48);
    double volume = c.getVolume();
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}

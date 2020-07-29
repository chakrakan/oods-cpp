//
// Created by kanis on 2020-07-28.
//
#pragma once // ALWAYS present in .h files instructing compiler to compile it once
#include <iostream>

class Cube {
public:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

private:
    double length_;
};

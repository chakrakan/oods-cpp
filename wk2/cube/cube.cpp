#include "cube.h" // ref to our header file

// only contains the implementation of our 3 functions defined in .h file

namespace uiuc {
/**
 * Get's Volume
 * The Cube:: syntax is used to show we are defining the classes function implementation
 * @return
 */
    double Cube::getVolume() {
        return length_ * length_ * length_;
    }

    double Cube::getSurfaceArea() {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length) {
        length_ = length;
    }

}

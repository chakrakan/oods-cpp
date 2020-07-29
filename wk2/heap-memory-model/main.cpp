#include <iostream>

int main() {
    int *numPtr = new int; // use new keyword to allocate some space in heap enough to store an int
    std::cout << "*numPtr: " << *numPtr << std::endl; // print out random stuff since we haven't assigned int value
                        // so it prints out something random or whatever was in that memory
    std::cout << "numPtr: " << numPtr << std::endl; // numPtr is an address of int ptr in heap memory so the content will
                                // be, the address of the heap memory (low value)
    std::cout << "&numPtr: " << &numPtr << std::endl; // print mem address of numPtr var itself which is in stack memory

    *numPtr = 42; // assign dereferenced value to 42
    std::cout << "*numPtr assigned to 42" << std::endl;

    std::cout << "*numPtr: " << *numPtr << std::endl; // should give us 42
    std::cout << "numPtr: " << numPtr << std::endl; // should still print out heap mem addr from before
    std::cout << "&numPtr: " << &numPtr << std::endl; // should still print out stack mem addr from before
    return 0;
}
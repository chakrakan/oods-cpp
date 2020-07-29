#include <iostream>

void foo() {
    int x = 42;
    std::cout << "Value: " << x << std::endl;
    std::cout << "Address: " << &x << std::endl;
    // Output was Address: 00AFF80C which is 11532300 in base 10 decimal
}

int main() {
    int num = 7;
    std::cout << "Value: " << num << std::endl;
    std::cout << "Address: " << &num << std::endl; // this address will be in hexadecmial
    // Output was Address: 00AFF838 which is 11532344 in base 10 decimal
    // Therefore, first, the main function gets its allocation in the heap, stores num somewhere, during the runtime of
    // the function, foo() is called, allocated its own space in the heap, and then assigned 'x' a location in the stack
    // which is lower than that of 'num' proving that the stack goes downward in memory alloc until 0x00.

    // the little bit of skip in memory is due to overhead to calling the foo function and some cpp interal magnets
    foo();
    return 0;
}
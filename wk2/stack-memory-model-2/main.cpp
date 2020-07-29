#include <iostream>

int main() {
    int num = 7;
    std::cout << "num: " << num << std::endl; // print out num
    std::cout << "&num: " << &num << std::endl; // print mem address of num 0095F8E8

    int *p = &num; // assign mem addr of num to var p
    std::cout << "p: " << p << std::endl; // printing out p should give mem addr to num 0095F8E8
    std::cout << "&p: " << &p << std::endl; // this is mem addr of p, which should be below mem addr of num (stack lower)
    std::cout << "*p: " << *p << std::endl; // dereference p, so it outputs value of num

    *p = 42; // we change dereference value of p which was initially 7 because it points to mem addr of num, to 42
    std::cout << "*p changed to 42" << std::endl;
    std::cout << " num: " << num << std::endl; // therefore, value of num is now 42
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int *x = new int; // on the stack, we get a int* to memory address on the heap where the new int will be stored
    int &y = *x; // int &y is a reference variable, which aliases a piece of memory, which allows us to give a name
    // to a piece of memory
    // in this case, y is going alias the dereference value of x. This means that the heap memory address is called y.
    y = 4; // y = 4 allows us to alias the memory on the heap exactly

    cout << &x << endl; // mem addrs of x is the memory address on the stack
    cout << x << endl; // content of x is the pointer itself that points to the heap
    cout << *x << endl; // the dereference value of x is 4 because we set the dereference value of x, which is variable
    // y, and we set y = 4 earlier.

    // kinda akin to  *(&y)

    cout << &y << endl; // mem address of y is the mem address of the heap where the value of y is located
    cout << y << endl; // value of y is 4
//    cout << *y << endl; // we can't dereference a non-pointer variable.

    return 0;
}
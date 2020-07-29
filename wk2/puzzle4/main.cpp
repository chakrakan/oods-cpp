#include <iostream>
using namespace std;

int main() {
    int *x; // int *x set on stack without a ref to anything yet
    int size = 3; // size on stack with val 3
    x = new int[size]; // int*x points to the head of the new integer array of size 3 allocated on the heap

    for (int i = 0; i < size; i++) {
        x[i] = i + 3; // standard for loop setting values for x[0], x[1] and x[2] as 3, 4, 5 respectively
    }

    delete[] x; // delete the array off heap once usage is complete

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int *p, *q; // on stack we have int* pointer to p and q
    p = new int; // p value is memory address to heap holding int
    q = p; // q points to the same memory address as p
    *q = 8; // setting dereference val of q to 8 sets dereference val of p to 8 as well
    cout << *p << endl; // this should output 8

    q = new int; // we change ref of q to a new memory address on heap
    *q = 9; // set its value to 9
    cout << *p << endl; // *p still points to 8 from initial
    cout << *q << endl; // *q points to 9

    return 0;
}
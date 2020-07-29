#include <iostream>
using namespace std;

int main() {
    int i = 2, j = 4, k = 8;
    int *p = &i, *q = &j, *r = &k;

    k = i; // set k's value to 2
    cout << i << j << k << *p << *q << *r << endl;
    // 242242

    p = q; // set p to memory address of j
    cout << i << j << k << *p << *q << *r << endl;
    // 242442

    *q = *r; // set *q which is j's value to 2 (from k which became 2 in the first operation)
    cout << i << j << k << *p << *q << *r << endl;
    // 222222 (because *p means value of j which is 2 now )

    return 0;
}
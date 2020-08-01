#include <iostream>
using namespace std;

void demo() {
    int *x; // int *x set on stack without a ref to anything yet
    int size = 3; // size on stack with val 3
    x = new int[size]; // int*x points to the head of the new integer array of size 3 allocated on the heap

    for (int i = 0; i < size; i++) {
        x[i] = i + 3; // standard for loop setting values for x[0], x[1] and x[2] as 3, 4, 5 respectively
    }

    delete[] x; // delete the array off heap once usage is complete

    printf("%d", g(1,3));
}

int anotherFunction(int a, int b) {
    int answer = 2;
    int x = 0;
    printf("In anotherFunction(%d,%d)\n",a,b);
    while (b > a) {
        printf("a is %d, b is %d\n", a, b);
        answer = answer + (b - a);
        b -= x;
        a += x / 2;
        x++;
    }
    return answer;
}

int someFunction(int x, int y) {
    int a = x + y;
    if (x < y) {
        for (int i = 0; i < x; i++) {
            printf("In the loop with i = %d, a = %d\n", i, a);
            a = a + x;
        }
    }
    else {
        y = anotherFunction(y,a+1);
    }
    return a * (y-10);
}

int main() {
    int x = 2;
    int b = someFunction(3,x);
    printf("b = %d\n", b);
    printf("x = %d\n", x);
    return 0;
}
#include <iostream>
#include <vector>
#include "increment_and_sum.h"
using std::cout;
using std::vector;

int main()
{
    vector<int> v{2, 4, 6, 8, 10};
    int total = IncrementAndComputeVectorSum(v);
    cout << "The total is: " << total << "\n";
}
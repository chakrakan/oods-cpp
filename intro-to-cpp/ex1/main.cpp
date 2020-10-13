#include <iostream>
#include <vector>
using std::cout;
using std::vector;

void PrintBoard(const vector<vector<int>> &v)
{
    for (auto i : v)
    {
        for (int j : i)
        {
            cout << j;
        }
        cout << "\n";
    }
}

int main()
{
    vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 1, 0, 0, 0, 0},
                              {0, 0, 0, 0, 1, 0}};
    // TODO: Call PrintBoard function here.
    PrintBoard(board);
}
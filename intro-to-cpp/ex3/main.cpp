#include <fstream>
#include "test.cpp" // For testing.
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::cout;
using std::ifstream;
using std::istringstream;
using std::string;
using std::vector;

// TODO: Add the ParseLine function here.
vector<int> ParseLine(string line)
{
    vector<int> nums;
    char c;
    int i;
    istringstream myStream(line);
    while (myStream >> i >> c)
    {
        nums.push_back(i);
    }
    return nums;
}

void ReadBoardFile(string path)
{
    ifstream myfile(path);
    if (myfile)
    {
        string line;
        while (getline(myfile, line))
        {
            cout << line << "\n";
        }
    }
}

void PrintBoard(const vector<vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j];
        }
        cout << "\n";
    }
}

int main()
{
    ReadBoardFile("1.board");
    TestParseLine(); // For testing.
                     // Leave commented out.
                     // PrintBoard(board);
}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

// TODO: Add the ReadBoardFile function here.
void ReadBoardFile(string filePath)
{
    std::ifstream myFile;
    myFile.open(filePath);
    if (myFile)
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << "\n";
        }
    }
}

// PrintBoard not used in this exercise
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
    // TODO: Call the ReadBoardFile function here.
    ReadBoardFile("1.board");
    // Leave the following line commented out.
    //PrintBoard(board);
}
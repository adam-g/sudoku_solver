#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "SudokuBoard.cpp"
using namespace std;

int main () {
    vector<vector<unsigned>> sudokuBoard;
    sudokuBoard.resize(9);
    for(unsigned h = 0; h < 9; h++)
    {
        sudokuBoard[h].resize(9);
    }
    
    for(unsigned i = 0; i < 9; i++)
    {
        for(unsigned j = 0; j < 9; j++)
        {
            sudokuBoard[i][j] = 0;
        }   
    }

    SudokuBoard initialBoard(sudokuBoard);
    cout << "SudokuBoard initialized";
    //delete initialBoard;
    cout << "SudokuBoard destroyed";
    // String path = "board.txt"
    // ifstream file;
    // file.open(path);

    // for(i = 0; i < 9; i++)
    // {
    //     for(j = 0; j < 9; j++)
    //     {
            
    //     }   
    // }
    return 0;
}

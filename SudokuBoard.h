/*
 * SudokuBoard.h
 *
 *  Created on: 13 dec 2014
 *      Author: Adam
 */

#ifndef SUDOKUBOARD_H_
#define SUDOKUBOARD_H_
#include<vector>
//#include "SudokuBoard.cpp"
using namespace std;

class SudokuBoard 
{
private:
std::vector<vector<vector<unsigned> > > board; //3D board with possible values in the 3rd dimension
std::vector<vector<unsigned> > section; //The vector containing the nine 3x3 grids
public:
//SudokuBoard() = delete;
SudokuBoard(const SudokuBoard&);
//SudokuBoard(SudokuBoard &&) = delete;
SudokuBoard(vector<vector<unsigned> >);
//~SudokuBoard() = default;

std::vector<unsigned> checkPossibleValues(const unsigned,const unsigned); //returns possible values for a square
void setPossibleValues(const unsigned, const unsigned);
void setAllPossibleValues();
};

#endif /* SUDOKUBOARD_H_ */

/*
 * SudokuBoard.cpp
 *
 *  Created on: 13 dec 2014
 *      Author: Adam
 */

#include "SudokuBoard.h"
using namespace std;

/******** Constructors *********/

SudokuBoard::SudokuBoard(const SudokuBoard& sb) 
{
  
  *this.board.resize(9);
  for(unsigned i = 0; i < 9; i++)
    {
      *this.board[i].resize(9);
      for(unsigned j = 0; j < 9; j++)
	{
	  *this.board[i][j].resize(sb.board[i][j].size());
	}
    }
    
  for(unsigned i = 0; i < 9; i++)
    {
      for(unsigned j = 0; j < 9; j++)
	{
	  for(unsigned k = 0; k < sb.board[i][j].size(); k++)
	    {
	      *this.board[i][j][k] = sb.board[i][j][k];
	    }
	}
    }

  *this.section.resize(9);
  for(unsigned i = 0; i < 9; i++)
    {
      *this.section[i].resize(9);
   }
  
   for(unsigned i = 0; i < 9; i++)
    {
      for(unsigned j = 0; j < 9; j++)
	{
	  *this.section[i][j] = sb.section[i][j];
	}
    } 

}


SudokuBoard::SudokuBoard(vector<vector<unsigned>> initialBoard)
{
   *this.board.resize(9);
  for(unsigned i = 0; i < 9; i++)
    {
      *this.board[i].resize(9);
    }
  
  
  *this.section.resize(9);
  for(unsigned i = 0; i < 9; i++)
    {
      *this.section[i].resize(9);
   }
  
  for(unsigned i = 0; i < 9; i++)
    {
      for(unsigned j = 0; j < 9; j++)
	{
	  *this.board[i][j][0] = initialBoard[i][j]; 
	}
    }
  
}

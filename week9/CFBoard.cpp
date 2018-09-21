/**************************************************************************
 **Description: Implementation file of CFBoard
 *************************************************************************/

#include<iostream>
#include "CFBoard.hpp"

/**************************************************************************
 *                          makeMove Function
 *This function is to make piece move by passing column and user's piece.
 *If gameState is UNFINISHED or selected column is full, then return false.
 *Otherwise, record move, update game state and return true.
 *************************************************************************/

bool CFBoard::makeMove(int col, char player){
  col = col - 1;
  if(gameState != UNFINISHED || board[0][col] == 'x' || board[0][col] == 'o')
  {
    return false;
  }
  else
  {
    for(int row = 5; row >= 0; row--){
      if (board[row][col] == '.'){
        board[row][col] = player;
        updateGameState(row, col); 
        break;
       }
    }
    return true;
  }
}

/*******************************************************************************
 *                       updateGameState Function
 *This fuction is passing two variables row and column to check the piece's 
 *positon on board. If four pieces in row is horizontal or vertical or diagonal 
 *or anti-diagonal, checking player and update game status. If the first row is
 *ful and not place to put piece, update the game status to DRAW.
 ******************************************************************************/

void CFBoard::updateGameState(int row, int col){  //Check piece in horizontal
  int moveLeft = col;
  char player = board[row][col];
  while(board[row][moveLeft] == player && moveLeft >= 0)
    moveLeft --;
  
  int moveRight = col;
  while(board[row][moveRight] == player && moveRight <= 6)
    moveRight ++;
  
  int length = moveRight - moveLeft - 1;

  if(length == 4)   //update game status if four pieces in row
  {
    if (player == 'x')
    {
      gameState = X_WON;
      return;
    }
    else
    {
      gameState = O_WON;
      return;
    }
  }
 
  int moveUp = row;   ////Check piece in vertical
  while(board[moveUp][col] == player && moveUp >= 0)
    moveUp --;
  
  int moveDown = row;
  while(board[moveDown][col] == player && moveDown <= 5)
    moveDown ++;
  
  length = moveDown - moveUp - 1;
  
  if(length == 4)  //update game status if four pieces in row
  {
    if (player == 'x')
    {
      gameState = X_WON;
      return;
    }
    else
    {
      gameState = O_WON;
      return;
    }
  }

  moveUp = row;    //checking pieces in diagonal
  moveLeft = col;
  while(board[moveUp][moveLeft] == player && moveUp >= 0 && moveLeft >= 0)
  {
    moveUp --;
    moveLeft --;
  }

  moveDown = row;
  moveRight = col;
  while(board[moveDown][moveRight] == player && moveDown <= 5 && moveRight <= 6)
  {
    moveRight ++;
    moveDown ++;
  }

  length = moveRight - moveLeft - 1;

  if(length == 4)  //update game status if four pieces in row
  {
    if (player == 'x')
    {
      gameState = X_WON;
      return;
    }
    else
    {
      gameState = O_WON;
      return;
    }
  }

  moveDown = row;   //checking pieces in Anti-diagonal
  moveLeft = col;
  while(board[moveDown][moveLeft] == player && moveDown <= 5 && moveLeft >= 0)
  {
    moveDown ++;
    moveLeft --;
  }
  
  moveUp = row;
  moveRight = col;
  while(board[moveUp][moveRight] == player && moveUp >= 0 && moveRight <= 6)
  {
    moveUp --;
    moveRight ++;
  }

  length = moveDown - moveUp - 1;

  if(length == 4)  //update game status if four pieces in row
  {
    if (player == 'x')
    {
      gameState = X_WON;
      return;
    }
    else
    {
      gameState = O_WON;
      return;
    }
  }

  if(row == 0)  //Check gameState is DRAW or not
  {
    for (int i = 0; i <= 6; i++)
    {
      if(board[0][i] == '.')
        return;
    }
    gameState = DRAW;
  }
}

/*******************************
 *      getGameState Function
 *return the vaule of gameState.
 *******************************/

GameState CFBoard::getGameState()
{
  return gameState;
}

/***********************************
 *      printBoard Function
 *print out current board on screen.
 **********************************/

void CFBoard::printBoard()
{
  std::cout << "1234567" << std::endl;
  for(int row = 0; row < 6; row ++) 
    {
      for(int col = 0; col < 7; col++)
      {
        std::cout << board[row][col];
      }
      std::cout << std::endl;
    }
}



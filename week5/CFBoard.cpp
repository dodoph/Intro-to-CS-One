#include<iostream>
#include "CFBoard.hpp"

/**************************************************************************
makeMove Function
*This function is to make piece move by passing column and
 x coordinate after each left or right move, then 
record its total distance. If the argument is greater and equal to 0, total 
distance is added xCoordinate. If the argument is smaller that o which means 
left move, then distace is added -xCoordinate.


***************************************************************************/

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

void CFBoard::updateGameState(int row, int col){
  /******************
  Check horizontal
  ******************/
  int moveLeft = col;
  char player = board[row][col];
  while(board[row][moveLeft] == player && moveLeft >= 0)
    moveLeft --;
  
  int moveRight = col;
  while(board[row][moveRight] == player && moveRight <= 6)
    moveRight ++;
  
  int length = moveRight - moveLeft - 1;

  if(length == 4)
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
  /******************
  Check vertical
  ******************/
  int moveUp = row;
  while(board[moveUp][col] == player && moveUp >= 0)
    moveUp --;
  
  int moveDown = row;
  while(board[moveDown][col] == player && moveDown <= 5)
    moveDown ++;
  
  length = moveDown - moveUp - 1;
  
  if(length == 4)
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

  /******************
  Check Anti-diagonal
  ******************/
  moveDown = row;
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

  if(length == 4)
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

  /******************
  Check diagonal
  ******************/
  moveUp = row;
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

  if(length == 4)
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

  /*****************************
  check gamestate is drow or not 
  *****************************/
  // if(row = 0)
  // {
  //   count = 0;
  //   while(count <= 6){
  //     if (board[0][count] == 'x' || board[0][count] == 'o')
  //     {
  //       count ++;
  //     }
  //     else
  //       break;
  //   gameState = GameState.DRAW
  //   }
  // }

  if(row == 0){
    for (int i = 0; i <= 6; i++)
    {
      if(board[0][i] == '.')
        return;
    }
    gameState = DRAW;
  }
}

GameState CFBoard::getGameState()  //getGameState function
{
  return gameState;
}

void CFBoard::print()
{
  std::cout << "1234567" << std::endl;
  for(int row = 0; row < 6; row ++)  //Initializing array of board
    {
      for(int col = 0; col < 7; col++)
      {
        std::cout << board[row][col];
      }
      std::cout << std::endl;	
    }
}


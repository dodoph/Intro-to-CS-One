/**************************************
**Description: Header file of CFBoard
**************************************/

#ifndef CFBOARD_HPP
#define CFBOARD_HPP
#include <iostream>

enum GameState {X_WON, O_WON, DRAW, UNFINISHED}; //Declaring enum type

class CFBoard  //CFBoard class declaration
{  
  private:
    GameState gameState;
    char board[6][7]; //2-D array

  public:
    CFBoard(){   //default constructor
      std::cout << "1234567" << std::endl;
      for(int row = 0; row < 6; row++)  //Initializing array of board
      {
        for(int col = 0; col < 7; col++)
        {
          board[row][col] = '.';
        }
      }
      gameState = UNFINISHED;  //Initializing gameState
    }
    
    bool makeMove(int, char); //makeMove funtion prototype and return bool value

    void updateGameState(int, int); //updateGameState prototype

    GameState getGameState();  // getGameState function and return game status.

    void printBoard(); //pint out the board 
  
};
#endif

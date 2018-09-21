/****************************************
**Description: Header file of BBoard file
****************************************/

#ifndef BBOARD_HPP
#define BBOARD_HPP
#include "Ship.hpp"
#include<cstring>

class BBoard
{
  private:
    bool board[10][10];
    Ship *shipBoard[10][10];
    int unSunkShip;

  public:
    BBoard()                             
    {
      for(int row = 0; row < 10; row++)  
      {   
        for(int col = 0; col < 10; col++)
          board[row][col] = false;
      }
      for(int row =0; row < 10; row++)
      {
        for(int col = 0; col < 10; col++)
          shipBoard[col][row] = NULL;
      }
      unSunkShip = 0;
    }
   
    bool getAttacksArrayElement(int, int); 
    Ship* getShipsArrayElement(int, int);  
    int getNumShipsRemaining();           
    bool placeShip(Ship*, int, int, char); 
    bool attack(int, int);
    bool allShipsSunk();
};
#endif

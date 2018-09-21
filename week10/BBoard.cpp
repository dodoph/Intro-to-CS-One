/*************************************************
 **Description: Implementation file of BBoard
 ************************************************/

#include "BBoard.hpp"
#include<iostream>

//return bool value of square on board
bool BBoard::getAttacksArrayElement(int row, int col)
{
  return board[row][col];
}
//return Ship pointer on which row and col
Ship* BBoard::getShipsArrayElement(int row, int col)
{
  return shipBoard[row][col];
}
//return how many ships are on board
int BBoard::getNumShipsRemaining()
{
  return unSunkShip;
}

/******************************************************************************************
                                     placeShip Function
This function is to place ship on the board by passing Ship pointer, row, column and user's 
orientantion. If ship would not fit entirely on the board or overlap by perivous ship, 
return false. Otherwise return true.
******************************************************************************************/

bool BBoard::placeShip(Ship* ship, int row, int col, char orientation)
{ 
  //check the situation of out of boundary, invaild characters
  if(row >=10 || row < 0 || col >= 10 || col < 0 || (orientation != 'C' && orientation != 'R'))
  {
    return false; 
  }
  //check ship's length 
  else if ((*ship).getLength() >= 11)
  {
    return false;
  }
  else
  { 
  	//vertically place
    if (orientation == 'C')
    { 
      //check ship's boundary
      if(10 - row < (*ship).getLength())
      {
        return false;
      }
      //check the situation of overlap 
      for(int i = 0; i < (*ship).getLength(); i++)
      {
        if(shipBoard[row + i][col] != NULL)
        {
          return false;
        }
      }
      //place ship on board bases on its length
      for(int i =0; i < (*ship).getLength(); i++)
      {
        shipBoard[row + i][col] = ship;
      }
    }
    //horizontally place
    else if (orientation == 'R')
    {
      //check ship's boundary
      if(10 - col < (*ship).getLength())
      {
        return false;
      }
      //check the situation of overlap 
      for(int i = 0; i < (*ship).getLength(); i++)
      {
        if(shipBoard[row][col + i] != NULL)
        {
          return false;
        }
      }
      //place ship on board bases on its length
      for(int i = 0; i < (*ship).getLength(); i++)
      {
        shipBoard[row][col + i] = ship;
      }
    }
    unSunkShip++;  //increment unsunk ship by one
    return true;
  }
}

/******************************************************************************************
                                     attack Function
This function is to attack ship on the board by passing row and column by user. 
If attach hits a ship, record the attack in bool array. If square has not been hit before,
call takeHit() function. If all of Ship's squares have been hit, print out statement and 
return true. Otherwise record the attack in bool array and return false.
******************************************************************************************/

bool BBoard::attack(int row, int col)
{
  //attack hits a ship
  if(shipBoard[row][col] != NULL)  
  {
    //square has not been hit before
    if(board[row][col] == false) 
    {
      board[row][col] = true;
      //define ship pointer and point it to shipBoard
      Ship* ship = shipBoard[row][col];
      //call takeHit function on the variable ship pointer  
      (*ship).takeHit();            
      //check ship is damaged or not
      if((*ship).getLength() == (*ship).getDamage())  
      { 
        //print out statment
        std::cout << "They sank " << (*ship).getName() << "!" << std::endl; 
        //decrement unsunk ship by one
        unSunkShip--;          
      }
    }
    return true;
  }
  //attack is not hit
  else 
  {
    //assign true value to bool array 
    board[row][col] = true; 
    return false;
  }
}
//return true if all ships are sunk
bool BBoard::allShipsSunk()
{
  if(unSunkShip == 0)
  {
    return true;
  }
  else
  {
    return false;
  } 
}


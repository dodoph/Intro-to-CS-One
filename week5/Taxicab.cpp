/**********************************************
**Description: Implementation file of Taxicab
***********************************************/
#include "Taxicab.hpp"

Taxicab::Taxicab(int xCoordinate, int yCoordinate){  //constructor
  x = xCoordinate;
  y = yCoordinate;
  totalDistance = 0;
}


Taxicab::~Taxicab(){  //destructor
}



int Taxicab::getXCoord(){ //This function return the value of x-coordinate
  return x;
}

int Taxicab::getYCoord(){   //This function return the value of y-coordinate
  return y;
}

int Taxicab::getDistanceTraveled(){  //This function return the value of total distance
  return totalDistance;
}

/***************************************************************************
                            Taxicab::moveX
*This function is find x coordinate after each left or right move, then 
record its total distance. If the argument is greater and equal to 0, total 
distance is added xCoordinate. If the argument is smaller that o which means 
left move, then distace is added -xCoordinate.
***************************************************************************/
void Taxicab::moveX(int xCoordinate){
  x = x + xCoordinate;

  if (xCoordinate >= 0)
    totalDistance = totalDistance + xCoordinate;
  else
    totalDistance = totalDistance - xCoordinate;
}

/***************************************************************************
                            Taxicab::moveY
*This function is find y coordinate after each up or down move, then 
record its total distance. If the argument is greater and equal to 0, total 
distance is added yCoordinate. If the argument is smaller that o which means 
down move, then distace is added -yCoordinate.
***************************************************************************/
void Taxicab::moveY(int yCoordinate){
  y = y + yCoordinate;

  if (yCoordinate >= 0)
    totalDistance = totalDistance + yCoordinate;
  else
    totalDistance = totalDistance - yCoordinate;
}
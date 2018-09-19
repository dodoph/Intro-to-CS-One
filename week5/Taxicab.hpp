/**********************************************
**Author: Qiaojie Tang
**Date: 05-02-2018
**Description: header file of Taxicab
***********************************************/


#ifndef TAXICAB_HPP  // Taxicab.hpp is the Taxicab class specification file.
#define TAXICAB_HPP


class Taxicab{    //Taxicab class declaration.
  private:
  int x;
  int y;
  int totalDistance;

  public:
    
    Taxicab(){   //default constructor
      x = 0;
      y = 0;
      totalDistance = 0;
    }

    
    Taxicab(int , int );   //constructor with two paramenters.

    
    ~Taxicab();   //destructor
    
    int getXCoord();  //getters
    int getYCoord();
    int getDistanceTraveled();

    void moveX(int xCoordinate);
    void moveY(int yCoordinate);

};
#endif
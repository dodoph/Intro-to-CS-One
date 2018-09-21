/**************************************
**Description: Header file of Ship file
**************************************/

#ifndef SHIP_HPP
#define SHIP_HPP
#include<string>

class Ship
{
  private:
    std::string name;
    int length;
    int damage;

  public:
    Ship(std::string, int); //constructor with two parameters
    std::string getName();  //return name of ship
    int getLength();        //return length of ship
    int getDamage();        //return number of squares have been hit
    void takeHit();         //incremente ship damage by one
};
#endif


/***************************************************
 **Description: Implementation file of Ship
 ***************************************************/

#include "Ship.hpp"

//initialized the data members
Ship::Ship(std::string nameIn, int lengthIn) 
{
  name = nameIn;
  length = lengthIn;
  damage = 0;
}

//get name of ship
std::string Ship::getName()
{
  return name;
}
//get length of ship
int Ship::getLength()
{
  return length;
}
//get number of damage of ship
int Ship::getDamage()
{
  return damage;
}
//incremente ship damage by one
void Ship::takeHit()
{
  damage++;
}

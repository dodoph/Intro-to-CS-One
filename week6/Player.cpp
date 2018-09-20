/**********************************************
 **Description: Implementation file of Player
 *********************************************/

#include "Player.hpp"


Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn){  //constructor
  name = nameIn;
  points = pointsIn;
  rebounds = reboundsIn;
  assists = assistsIn;
}

std::string Player::getName(){  //This function return the string 
  return name;
}

int Player::getPoints(){  //This function return the value of points
  return points;
}

int Player::getRebounds(){ //This function return the value of rebounds
  return rebounds;
}

int Player::getAssists(){  ////This function return the value of assists
  return assists;
}

void Player::setPoints(int pointsIn){  //This function sets the value of member variable points.
  points = pointsIn;
}

void Player::setRebounds(int reboundsIn){  //This function sets the value of member variable  rebounds.
  rebounds = reboundsIn;
}

void Player::setAssists(int assistsIn){  ////This function sets the value of member variable assists.
  assists = assistsIn;
}

/**************************************************************************
 **                     Player::hasMorePointsThan
 **This function is bool type to compare 2 players' points. If one player's 
 **points is more than another one, return true. Otherwise, return false.
 *************************************************************************/

bool Player::hasMorePointsThan(Player otherPlayer){
  if (points > otherPlayer.getPoints())
    return true;
  else
    return false;
  
}

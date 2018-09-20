/**********************************************
 **Description: Implementation file of Team
 **********************************************/

#include "Team.hpp"

Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5){  //constructor
  pointGuard = p1;
  shootingGuard = p2;
  smallForward = p3;
  powerForward = p4;
  center = p5;
}

void Team::setPointGuard(Player p1){  //This function sets the value of member variable pointGuard
  pointGuard = p1;
}

void Team::setShootingGuard(Player p2){  //This function sets the value of member variable shootingGuard
  shootingGuard = p2;
}

void Team::setSmallForward(Player p3){  //This function sets the value of member variable smallforward
  smallForward = p3;
}

void Team::setPowerForward(Player p4){  //This function sets the value of member variable powerforward
  powerForward = p4;
}

void Team::setCenter(Player p5){  //This function sets the value of member variable center
  center = p5;
}

Player Team::getPointGuard(){  //This function return the value of pointsguard
  return pointGuard;
}

Player Team::getShootingGuard(){ //This function return the value of shootingguard
  return shootingGuard;
}

Player Team::getSmallForward(){  //This function return the value of smallforward
  return smallForward;
}

Player Team::getPowerForward(){  //This function return the value of powerforward
  return powerForward;
}

Player Team::getCenter(){  //This function return the value of center
  return center;
}

int Team::totalPoints(){  //This function return totalpoints of a team
  return pointGuard.getPoints() + shootingGuard.getPoints() + smallForward.getPoints() + powerForward.getPoints() + center.getPoints();
}




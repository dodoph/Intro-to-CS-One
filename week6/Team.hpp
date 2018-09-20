/**********************************
 **Description: Header file of Team
 ***********************************/

#ifndef TEAM_HPP  // TEAM.hpp is the Team class specification file.
#define TEAM_HPP

#include "Player.hpp"

class Team
{
  private:              //This is member variable
    Player pointGuard;
    Player shootingGuard;
    Player smallForward;
    Player powerForward;
    Player center;

  public:
    Team(Player, Player, Player, Player, Player);   //constructor with five paramentors
    
    
    void setPointGuard(Player);     //set functions
    void setShootingGuard(Player);
    void setSmallForward(Player);
    void setPowerForward(Player);
    void setCenter(Player);

    Player getPointGuard();   //get functions
    Player getShootingGuard();
    Player getSmallForward();
    Player getPowerForward();
    Player getCenter();
    
    int totalPoints();  
};
#endif

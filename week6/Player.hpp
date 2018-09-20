/**********************************************
 ** Description: Header file of Player
 *********************************************/

#ifndef PLAYER_HPP  // PLAYER.hpp is the Player class specification file.
#define PLAYER_HPP

#include<string>

class Player
{
  private:     //This is member variables.
    std::string name;
    int points;
    int rebounds;
    int assists;

  public:      //default constructor
    Player(){
    name = "";
    points = -100;
    rebounds = -100;
    assists = -100;
    }

    Player(std::string, int, int, int);  //constructor with paramenters

    std::string getName();  //getter function
    int getPoints();
    int getRebounds();
    int getAssists();
    
    void setPoints(int);     //setter function
    void setRebounds(int);
    void setAssists(int);
 
    bool hasMorePointsThan(Player);  //bool function

};
#endif


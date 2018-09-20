#include<iostream>
#include "Team.hpp"
#include<string>
using namespace std;

int main(){
  int totalPoints;

  Player p1("Charlotte", 24, 10, 7);
  Player p2("Emily", 21, 13, 9);
  Player p3("Anne", 20, 10, 8);
  Player p4("Jane", 19, 10, 10);
  Player p5("Mary", 18, 11, 8);
  
  p5.setRebounds(12);
  

  Team team1(p1, p2, p3, p4, p5);
  Team team2(p1, p2, p3, p4, p5);

  Player p = team1.getShootingGuard();

  cout << p.getName() << endl;
  
  if (p1.hasMorePointsThan(p2))
  	cout << "P1 is more than p2" << endl;
  else
  	cout << "P2 is more than p1" << endl;
  
  // if (team1.isBetterThan(team2))
  // 	 cout << "team1 is better than team2" << endl;
  // else
  // 	 cout << "team2" << endl;

  totalPoints = team1.totalPoints();

  cout << totalPoints << endl;
  
  return 0;
  }

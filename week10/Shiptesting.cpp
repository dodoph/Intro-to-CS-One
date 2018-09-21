#include<iostream>
#include "BBoard.hpp"
// #include "Ship.cpp"
#include<string>
using namespace std;

int main(){
  Ship shipA("je", 4);
  Ship shipB("Su", 2);
  Ship shipC("Ta", 3);
  
  BBoard boardA;
 

  cout << shipA.getName() << endl;
  //newBoard.getShipsArrayElement(2,4);
  cout << boardA.placeShip(&shipA, 2, 4, 'C') << "shipA" <<endl;
  cout << boardA.placeShip(&shipB, 1, 4, 'R') << "shipB" << endl;
  cout << boardA.placeShip(&shipC, 8, 6, 'R') << "shipC" << endl;;
  
  cout << boardA.attack(2, 4) << endl;
  cout << boardA.attack(3, 4) << endl;
  cout << boardA.attack(4, 4) << endl;
  cout << boardA.attack(4, 4) << "edd" << endl;
  cout << boardA.attack(5, 4) << endl;
  cout << boardA.attack(1, 4) << endl;
  cout << boardA.attack(3, 4) << endl;
  cout << boardA.attack(8, 4) << "DE" << endl;
  cout << boardA.attack(8, 6) << "SW" << endl;
  cout << boardA.getShipsArrayElement(2,6) << endl;
  cout << boardA.attack(3, 4) << endl;
  cout << boardA.attack(1, 5) << endl;
  cout << boardA.attack(8, 7) << endl;
  cout << boardA.attack(7, 8) << endl;
  cout << shipA.getDamage() << "a" << endl;
  cout << shipB.getDamage() << "b" << endl;
  cout << shipC.getDamage() << "c" << endl;
  cout << boardA.getNumShipsRemaining() << endl;
  cout << boardA.allShipsSunk() << endl;
  



  // for(int row = 0; row < 10; row++){   //2 D array
  //   for(int col = 0; col < 10; col++){
  //     cout << boardA.getShipsArrayElement(row,col);
  //   }
  //   cout << endl;
  // }
  
    // Ship ship = *(shipBoard[row][col]);
      // ship.takeHit();
      // if(ship.getLength() == ship.getDamage())
      // {
      //   std::cout << "They sank " << ship.getName() << "!" << std::endl;
      //   unSunkShip--;
  return 0;
}


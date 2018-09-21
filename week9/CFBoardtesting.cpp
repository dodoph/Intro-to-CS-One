#include <iostream>
#include "CFBoard.hpp"

using namespace std;

int main()
{
  CFBoard playing;
  playing.printBoard();



  playing.makeMove(2, 'x');
  playing.printBoard();
  
  playing.makeMove(2, 'x');
  playing.printBoard();

  playing.makeMove(2, 'o');
  playing.printBoard();

  playing.makeMove(2, 'x');
  playing.printBoard();

  playing.makeMove(2, 'o');
  playing.printBoard();

  playing.makeMove(2, 'x');
  playing.printBoard();

  playing.makeMove(2, 'o');
  playing.printBoard();

  playing.makeMove(2, 'o');
  playing.printBoard();

  playing.makeMove(2, 'x');
  playing.printBoard();
  
  playing.makeMove(1, 'x');
  playing.printBoard();

  playing.makeMove(1, 'o');
  playing.printBoard();

  playing.makeMove(1, 'x');
  playing.printBoard();

  playing.makeMove(1, 'o');
  playing.printBoard();

  playing.makeMove(1, 'x');
  playing.printBoard();

  playing.makeMove(1, 'o');
  playing.printBoard();

  playing.makeMove(1, 'o');
  playing.printBoard();

  playing.makeMove(3, 'x');
  playing.printBoard();

  playing.makeMove(3, 'x');
  playing.printBoard();

  playing.makeMove(3, 'x');
  playing.printBoard();

  playing.makeMove(3, 'o');
  playing.printBoard();

  playing.makeMove(3, 'x');
  playing.printBoard();

  playing.makeMove(3, 'o');
  playing.printBoard();

  playing.makeMove(3, 'o');
  playing.printBoard();

  playing.makeMove(4, 'o');
  playing.printBoard();

  playing.makeMove(4, 'o');
  playing.printBoard();

  playing.makeMove(4, 'o');
  playing.printBoard();

  playing.makeMove(4, 'x');
  playing.printBoard();

  playing.makeMove(4, 'o');
  playing.printBoard();

  playing.makeMove(4, 'o');
  playing.printBoard();

  cout << playing.getGameState() << endl;
  return 0;

}
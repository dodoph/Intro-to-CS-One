#include <iostream>
#include "CFBoard.hpp"

using namespace std;

int main()
{
  CFBoard playing;
  playing.print();



  playing.makeMove(2, 'x');
  playing.print();
  
  playing.makeMove(2, 'o');
  playing.print();

  playing.makeMove(1, 'x');
  playing.print();

  playing.makeMove(2, 'o');
  playing.print();

  playing.makeMove(2, 'o');
  playing.print();

  playing.makeMove(2, 'o');
  playing.print();

  cout << playing.getGameState() << endl;
  return 0;

}
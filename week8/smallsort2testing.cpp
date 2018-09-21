#include<iostream>
#include "smallSort2.cpp"
using namespace std;


int main(){
  int first = 14;
  int second = -90;
  int third = 2;

  smallSort2(&first, &second, &third);

  cout << first << ", " << second << ", " << third << endl;

  return 0;
}


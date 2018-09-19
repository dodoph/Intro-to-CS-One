/************************************************************************
**Description: Prompt the user how many integers they would like to enter 
**and input these integers to find out min and max
************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int num,
      quantity,
      count,
      max,
      min;
    
  cout << "How many integers would you like to enter?\n";
  cin >> quantity;

  cout << "Please enter " << quantity << " integers." << endl; 
  cin >> num;
  max = num; //use the first input as max
  min = num; //use the first input as min

  count = 1; //increment count by i

  while (count < quantity){ //Use a loop to find min and max and save them
    cin >> num;
    if (num > max) //compare with max
      max = num;
    else if (num < min) //compare with min
      min = num;
    count++;
  }

  cout << "min: " << min << endl; //output min
  cout << "max: " << max << endl; //output max
    
  return 0;
}

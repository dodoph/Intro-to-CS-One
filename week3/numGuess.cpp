/***************************************************************************
**Description: Prompt user to input a number for other user to guess. 
**And give user an advice whether the number is too high or to low. At last,
**summarize the total guess times.
***************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  int guess,
      yourNum,
      count;
  
  cout << "Enter the number for the player to guess.\n";
  cin >> guess;
  
  cout << "Enter your guess.\n";
  cin >> yourNum;
  
  count = 1; // used to count the total times
  
  while (yourNum != guess){
    if (yourNum > guess) //too high
      cout << "Too high - try again.\n";
    else if (yourNum < guess) // too low
      cout << "Too low - try again.\n";
    cin >> yourNum;
    count ++; //increment count by 1
  }
  
  cout << "You guessed it in " << count << " tries." << endl; //output total number of guesses
   
  return 0;
}


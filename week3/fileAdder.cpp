/*********************************************************************************************
 **Description: Ask user to open a file with list of integers, and write the sum of integers 
 **to the file sum.txt. If file doesn't exist, then print out friendly message.
 ********************************************************************************************/

#include<iostream>
#include<fstream> //Needed to use files
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
  ifstream inputFile;
  ofstream outputFile;
  string filename;
  int value;
  int total = 0;

  cout << "Please enter your filename.\n"; //prompt the user to enter the data file name
  cin >> filename;
  
  inputFile.open(filename); //open the input file

  if (inputFile) //when file exists
  {
    while (inputFile >> value) // loop once for each piece of data to read
    {
      total = total + value; // read a value from the file and add it to total
    }
    inputFile.close();

    outputFile.open("sum.txt"); 
    outputFile << total << endl; //write total value to sum.txt file

    outputFile.close();

    cout << "result written to sum.txt" << endl;
  }
  else //when file doesn't exist
  {
  cout << "could not access file" << endl; //ouput message
  }
  
  return 0;

}



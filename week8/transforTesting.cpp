#include<iostream>
#include "transformArray.cpp"
using namespace std;

//void transformArray (int *array, int);

// void transformArray (int *myAarray, int size){
//   int newSize = size * 2;
//   int *newArray; 
//   newArray = new int[newSize];

//   for (int count = 0; count < size; count++){
//     *(newArray + count) = myAarray[count];
//   }

//   for (int count = 0; count < size; count++){
//     *(newArray + size) = myAarray[count] + 1;
//   }

//   delete [] myAarray;

//   myAarray = newArray;

//   //newArray = NULL;
// }

int main()
{
  int* myArray = new int[3];

  myArray[0] = 4;
  myArray[1] = 2;
  myArray[2] = 6;
  
  transformArray(myArray, 3);

  for (int i=0; i<6; i++){
    cout << myArray[i] << endl;
  }

  delete []myArray;

}


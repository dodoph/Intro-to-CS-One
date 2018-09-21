/**********************************************************************
** Description: This function uses a pointer to accept the address
of an array of int and the umber of elements in the array is passed 
as a seoarate integer parameter. The function asks the user dynamically 
allocate an array that is twice as long. Freeing the memory.
**********************************************************************/

void transformArray (int* &myAarray, int size){
  int newSize = size * 2; 
  int *newArray;   
  newArray = new int[newSize]; ///allocate memmory
  
  for (int count = 0; count < size; count++){ //assign value from old array to the new array  
    *(newArray + count) = myAarray[count];
  }

  for (int count = 0; count < size; count++){  //assign new value to the new array 
    *(newArray + size + count) = myAarray[count] + 1;
  }

  delete [] myAarray; //freeing the memory

  myAarray = newArray; //assgin new array to the pointer

  newArray = NULL; // set to null that the newArray doesn't point to any memory
}
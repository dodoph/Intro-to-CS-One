/***********************************************************************************************
** Discription: The function to takes the addresses of three int variables as paramenters and
sort the ints into ascending order.
**************************************************************************************************/

void sortSmall(int *firstIn, int *secondIn){ //This function compares two numbers by using two pointers to accept the address of an array of int
  if (*firstIn > *secondIn){  //compare the content of the poionter point to.
    int temp = *firstIn;  //store the first number as temp
    *firstIn = *secondIn; // takes contents at location of adrress of secondIn put into the content at location of address of firstIn
    *secondIn = temp; //Put back temp into the address location of secondIn
  }
}

void smallSort2(int *firstIn, int *secondIn, int *thirdIn){ //This funtion compares three numbers by passing the address of an array of int
  sortSmall(firstIn, secondIn);  //call function smallsort2 
  sortSmall(firstIn, thirdIn);   //call function smallsort2 
  sortSmall(secondIn, thirdIn);  //call function smallsort2 
}


/********************************************************************************************
 **Discription: This function displays median number of array by passing two parameters, 
 **array's address and its size Then, use sort function to sort it. After that, to find median
 **number for each odd and even group.If the size mod two is not equal to 0, the array is odd size, 
 **Otherwise, it is even size. 
 *********************************************************************************************/
#include<algorithm>

double findMedian(int array[], int size)
{
  std::sort(array, array + size);  //buit-in function
  if (size % 2 != 0)    // odd group
     return array[size / 2]; 
  else                 // even group
     return (array[(size / 2) - 1] + array[size / 2]) / 2.0;
}

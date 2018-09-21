/********************************************************************************************
 ** Discription: This function displays standard deviation of array by passing two parameters, 
 ** Person array[] and its size Then, using math funtion to find the mean and variance. At the
 ** find the standard deviation.
 *********************************************************************************************/
#include "Person.hpp"
#include<cmath>

double stdDev(Person array[], int size)
{
  double total = 0;
  double mean;
  double sum = 0;
  double variance;

  for (int i = 0; i < size; i++)
  {
    total = total + array[i].getAge();
  }
  mean = total / size; //find the mean

  for (int i = 0; i < size; i++)
  {
    sum = sum + pow((array[i].getAge() - mean), 2); //calculate the Variance, take each difference, square it
  }
  variance = sum / size;  //find the variance 
  
  return sqrt(variance);
}

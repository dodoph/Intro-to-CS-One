/**************************************************************************************************
 * *Discription: This function use one parameter double time to calculte the fall distance by formula.
 * **************************************************************************************************/

#include <cmath>

double fallDistance(double time)
{
  const double G = 9.8;
  return 1.0/2 * G * pow(time, 2);
}

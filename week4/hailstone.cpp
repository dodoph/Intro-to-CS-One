/********************************************************************************************
 * *Discription: This function use one parameter, integer start to find out the next value.
 * *If the value is even, then divide it by two. If the value is odd, then mutiply it by three
 * *and add one. Until the value is equal to one, stop the function and calculate how many value
 * * in total.
 * ********************************************************************************************/

int hailstone(int start){
  int next;
  int count = 0;

  next = start;

  while(next != 1){
    if(start % 2 == 0)
      next = start / 2;
    else
      next = start * 3 + 1;
    count = count + 1;
    start = next;
  }
  return count;
}

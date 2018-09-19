/********************************************************************************************
 * *Discription: This function use three parameters, integer first, int second, int third and 
 * *sorted them into ascending order.
 * ********************************************************************************************/

void smallSort(int &first, int &second){
  if(first > second){
    int temp = first;
    first = second;
    second = temp;
  }
}

void smallSort(int &first, int &second, int &third){
  
  smallSort(first, second);

  smallSort(first, third);

  smallSort(second, third);
}




/************************************************************************
 **Description:Calculate the average number of user's five input numbers.
 ***********************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double numOne,
           numTwo,
           numThree,
           numFour,
           numFive,
           avgNum;

    cout << "Please enter five numbers.\n";
    cin >> numOne; 
    cin >> numTwo; 
    cin >> numThree; 
    cin >> numFour;
    cin >> numFive; 

    //Calculate the average of five input number
    avgNum = (numOne + numTwo + numThree + numFour + numFive) / 5;

    cout << "The average of those numbers is:\n" << avgNum << endl;

    return 0;
}     


           

/**************************************************************************************************
 * **Description: Ask user to provide amount less than a dollar and get result in each type of coin
 * ***********************************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int QUARTER = 25,
              DIME= 10,
              NICKEL = 5,
              PENNY= 1;
    
    int numOfQuarter,
        numOfDime,
        numOfNickel,
        numOfPenny,
        money;

    cout << "Please enter an amount in cents less than a dollar." << endl;
    cin >> money;

    cout << "Your change will be:" << endl;
    
    //calculate the number of quarter 
    numOfQuarter = money / QUARTER;
    cout << "Q: " << numOfQuarter << endl;

    //calculate the remaining of money
    money = money % QUARTER;
    //calculate the number of dime
    numOfDime = money / DIME;
    cout << "D: " << numOfDime << endl;

    //calculate the remaining money 
    money = money % DIME;
    //calculate the number of nickel 
    numOfNickel = money / NICKEL;
    cout << "N: " << numOfNickel << endl;

    //calculate the remaining money
    money = money % NICKEL;
    //calculate the number of penny
    numOfPenny = money / PENNY;
    cout << "P: " << numOfPenny << endl;

    return 0;
}

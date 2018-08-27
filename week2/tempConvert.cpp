/******************************************************************************
 **Description: Convert user input celsius temperature to fehrenhei temperature.
*******************************************************************************/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double celsiusTemp,
           fahrenheitTemp;
    
    cout << "Please enter a Celsius temperature." << endl;
    cin >> celsiusTemp;

    // Temperature degrees conversions of celsius to fahrenheit.
    fahrenheitTemp = (static_cast<double>(9) / 5) * celsiusTemp + 32;

    cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheitTemp << endl;

    return 0;
}

/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare Variables
    
    float rate, hours, total, gross, dpay;
    
    //Initialize or input i.e. set variable values
    
    cout << "This program calculates the gross paycheck.\n" << "Input the pay rate in $'s/hr and the number of hours.\n";
    
    cin >> rate >> hours;
    
    //Map inputs -> outputs
    
    if (hours > 40) {
        
        gross = (hours - 40) * (rate * 2) + (rate * 40);
    } else {
        
        gross = (hours * rate);
    }
    
    //Display the outputs
    
    cout << "Paycheck = $" << gross;

    //Exit stage right or left!
    return 0;
}
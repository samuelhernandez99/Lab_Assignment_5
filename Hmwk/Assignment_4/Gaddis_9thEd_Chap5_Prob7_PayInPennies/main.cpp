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
    
    //Declare Variables
    float days;
    float pay = 0;
    
    //Initialize or input i.e. set variable values
    cin >> days;
    
    //Map inputs -> outputs
    
    for (float x = 0; x <= days; x++ ) {
    
        pay = pay + ((x) * .01);
    };
    
    //Display the outputs
    
    if (days <= 0) {
        cout << "0 Days are not allowed.";
    } else if (days == 1) {
        cout << "Pay = $0.01";
    }
    else {
        cout << "Pay = $" << pay; 
    }

    //Exit stage right or left!
    return 0;
}
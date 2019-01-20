/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
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
    cout.precision(4);
    
    //Declare Variables
    
    int angle;
    
    //Initialize or input i.e. set variable values
    
    cout << "Calculate trig functions\n" << "Input the angle in degrees.\n";
    cin >> angle;
    
    //Map inputs -> outputs
     
    float rads = angle * (3.141592 / 180);
    
    //Display the outputs
    
    cout << "sin(" << angle << ") = " << sin(rads) << endl;
    cout << "cos(" << angle << ") = " << cos(rads) << endl;
    cout << "tan(" << angle << ") = " << tan(rads);

    //Exit stage right or left!
    return 0;
}
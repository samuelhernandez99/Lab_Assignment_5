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
    cout.precision(1);
    
    //Declare Variables
    
    float FTemp, CTemp;
    
    //Initialize or input i.e. set variable values
    
    cout << "Temperature Converter\n" << "Input Degrees Fahrenheit\n";
    cin >> FTemp;
    
    //Map inputs -> outputs
    
    CTemp = ((FTemp - 32) * (.5555));
    
    //Display the outputs
    
    cout << FTemp << " Degrees Fahrenheit = " << CTemp << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}
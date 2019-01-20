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
    
    float worth, total;
    
    //Initialize or input i.e. set variable values
    
    cout << "Insurance Calculator\n" << "How much is your house worth?\n";
    cin >> worth;
    
    //Map inputs -> outputs
    
    total = worth * .8;
    
    //Display the outputs
    
    cout << "You need $" << total << " of insurance.";

    //Exit stage right or left!
    return 0;
}
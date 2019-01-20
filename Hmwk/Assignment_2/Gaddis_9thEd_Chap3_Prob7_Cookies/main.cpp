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

21//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int numcooks, total;
    
    //Initialize or input i.e. set variable values
    
    cout << "Calorie Counter\n" << "How many cookies did you eat?\n";
    cin >> numcooks;
    
    //Map inputs -> outputs
    
    total = 75 * numcooks;
    
    //Display the outputs
    
    cout << "You consumed " << total << " calories.";

    //Exit stage right or left!
    return 0;
}
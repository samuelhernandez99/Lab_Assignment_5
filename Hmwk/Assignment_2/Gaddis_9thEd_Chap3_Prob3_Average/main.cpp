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
    
    float scores[5];
    float total = 0;
    float average;
    
    //Initialize or input i.e. set variable values
    
    cout << "Input 5 numbers to average.\n";
    
    for (int x=0; x<5; x++){
        
        cin >> scores[x];
    }
    
    //Map inputs -> outputs
    
    for (int y=0; y<5; y++){
        
        total = total + scores[y];
    }
    
    average = total/5;
    
    //Display the outputs
    
    cout << "The average = " << average;

    //Exit stage right or left!
    return 0;
}
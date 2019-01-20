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
    
    int roomc, npeople, left, need;
    
    //Initialize or input i.e. set variable values
    
    cout << "Input the maximum room capacity and the number of people\n";
    
    cin >> roomc >> npeople;
    
    //Map inputs -> outputs
    
    
    if (roomc > npeople) {
        
        left = roomc - npeople;
        
        cout << "Meeting can be held.\n" << "Increase number of people by " << left << " will be allowed without violation.";
    }else {
        
        need = npeople - roomc;
        
        cout << "Meeting cannot be held.\n" << "Reduce number of people by " << need << " to avoid fire violation.";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
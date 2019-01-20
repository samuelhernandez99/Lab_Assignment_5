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
    int numb,sum;
    sum = 0;
    
    //Initialize or input i.e. set variable values
    cin >> numb;
    
    //Map inputs -> outputs
    
    
    if (numb > 0) {
    for (int x = 1; x <= numb; x++) {
        sum = sum + x;
    }
    } else if (sum <= 0) {
        cout << "Sum = 0";
    }
    
    //Display the outputs
    
    cout << "Sum = " << sum;
    

    //Exit stage right or left!
    return 0;
}
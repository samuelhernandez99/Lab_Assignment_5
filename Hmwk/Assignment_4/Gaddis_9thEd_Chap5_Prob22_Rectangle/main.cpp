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
    int num;
    char z;
    
    //Initialize or input i.e. set variable values
    cin >> num >> z;
    
    //Map inputs -> outputs
    
    for(int x = 0; x < num; x++) {
        for (int y = 0; y < num; y++) {
            cout << z;
        }
        if (x + 1 < num) {
        cout << endl;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
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
    
    //Initialize or input i.e. set variable values
    cin >> num;
    
    int twice = num * 2;
    
    //Map inputs -> outputs
    
    for (int x = 0; x <= num; x++){
        
        if (x <= num) {
            for (int y = 0; y < x; y++){
                cout << "+";
            }
            
            if (x > 0) {
            cout << endl << endl;
            }
        }
    }
    
    for (int z = num; z > 0; z--) {
        int w = num;
        for (int w = z; w > 0; w--){
            cout << "+";
        }
        
        if (z > 1) {
        cout << endl << endl;
        }
    }
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
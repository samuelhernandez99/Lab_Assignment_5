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
    
    float pos = 0;
    
    float neg = 0;
    
    float total = 0;
    
    int nums[10];
    
    //Initialize or input i.e. set variable values
    
    cout << "Input 10 numbers, any order, positive or negative\n";
    for (int x =0; x <10; x++){
        
        cin >> nums[x];
    }
    
    //Map inputs -> outputs
    
    for (int y =0; y < 10; y++){
        
        total = total + nums[y];
    }
    
    for (int z = 0; z < 10; z++) {
        if (nums[z] > 0) {
            
            pos = nums[z] + pos;
        }
        else {
            
            neg = nums[z] + neg;
        }
    }
    
    
    //Display the outputs
    
    cout << "Negative sum =  " << neg << endl;
    
    cout << "Positive sum =   " << pos << endl;
    
    cout << "Total sum    =   " << total;

    //Exit stage right or left!
    return 0;
}
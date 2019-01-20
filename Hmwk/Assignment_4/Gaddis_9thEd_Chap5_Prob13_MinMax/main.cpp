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
    
    int counter = 0;
    int number = 0;
    int largest = 0;
    int smallest;
    
    //Initialize or input i.e. set variable values
    
    while ((counter <= 100)){
        cin >> number;
        counter ++;
        
        if (number == -99) {
            break;
        }
        
        if (number > largest) {
            largest = number;
        } else if ((number < largest) && (number < smallest)) {
            smallest = number;
        }
    }
    
    cout << "Smallest number in the series is " << smallest << endl << "Largest  number in the series is " << largest;
    
    //Map inputs -> outputs
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
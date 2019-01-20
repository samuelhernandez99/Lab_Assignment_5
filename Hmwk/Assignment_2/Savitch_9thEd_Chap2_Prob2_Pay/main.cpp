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
    
    float salary, retroactive, newmonsal, newansal;
    
    //Initialize or input i.e. set variable values
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Input previous annual salary.\n";
    cin >> salary;
    
    //Map inputs -> outputs
    
    retroactive = (salary * .076)/2;
    newansal = salary + (salary*.076);
    newmonsal = newansal / 12;
    
    
    //Display the outputs

    cout << "Retroactive pay    = $  " << retroactive << endl;
    cout << "New annual salary  = $" << newansal << endl;
    cout << "New monthly salary = $  " << newmonsal;

    //Exit stage right or left!
    return 0;
}
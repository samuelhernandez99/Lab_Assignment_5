/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    float bill, hours;
    char package;
    
    //Initialize or input i.e. set variable values
    
    cout << "ISP Bill\n" << "Input Package and Hours\n";
    cin >> package >> hours;
    
    //Map inputs -> outputs
    
    if(package == 'A' || package == 'a'){
        if (hours > 10){
            bill = ((hours - 10) * 2) + 9.95; 
        } else {
            bill = 9.95;
        }
    } else if (package == 'B' || package == 'b'){
        if (hours > 20){
            bill = (hours - 20) + 14.95; 
        } else {
            bill = 14.95;
        }
    } else if (package == 'C' || package == 'c'){
        bill = 19.95;
    }
    
    
    //Display the outputs
    
    cout << "Bill = $ " << bill;

    //Exit stage right or left!
    return 0;
}
/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 2, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    
    //Declare Variables
    
    float weight, wmouse, smouse, lethal, cans, total;
    
    const float sweetner = 0.001f;
    wmouse = 35;
    smouse = 5;
    
    //Initialize or input i.e. set variable values
    
    cout << "Program to calculate the limit of Soda Pop Consumption.\n" << "Input the desired dieters weight in lbs.\n";
    cin >> weight;
    
    //Map inputs -> outputs
    
    int gweight = weight * 453.592;
    
    lethal = (smouse/wmouse) * gweight;
    
    total = lethal/sweetner;
    
    cans = total/350;
    
    float cant = floor(cans);
    //Display the outputs
    
    cout << "The maximum number of soda pop cans\n" << "which can be consumed is " << cant << " cans";

    //Exit stage right or left!
    return 0;
}
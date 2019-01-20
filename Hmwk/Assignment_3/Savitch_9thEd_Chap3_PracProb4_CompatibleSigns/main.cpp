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
#include <algorithm>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    
    const char *earth[] = { "Taurus", "Virgo", "Capricorn" };
    const char *fire[] = { "Aries", "Leo", "Sagittarius" };
    const char *air[] = { "Gemini", "Libra", "Aquarius" };
    const char *water[] = { "Cancer", "Scorpio", "Pisces" };
    
    //Initialize or input i.e. set variable values
    string sign1, sign2;
    
    cout << "Horoscope Program which examines compatible signs.\n" << "Input 2 signs.\n";
    cin >> sign1 >> sign2;
    
    //Map inputs -> outputs
    
    if ((std::find(std::begin(earth), std::end(earth), sign1) != std::end(earth)) && (std::find(std::begin(earth), std::end(earth), sign2) != std::end(earth)))
        cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        
    else if ((std::find(std::begin(fire), std::end(fire), sign1) != std::end(fire)) && (std::find(std::begin(fire), std::end(fire), sign2) != std::end(fire)))
        cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
    
    else if ((std::find(std::begin(air), std::end(air), sign1) != std::end(air)) && (std::find(std::begin(air), std::end(air), sign2) != std::end(air)))
        cout << sign1 << " and " << sign2 << " are compatible Earth signs.";
        
    else if ((std::find(std::begin(water), std::end(water), sign1) != std::end(water)) && (std::find(std::begin(water), std::end(water), sign2) != std::end(water)))
        cout << sign1 << " and " << sign2 << " are compatible  signs.";
        
    else
        cout << sign1 << " and " << sign2 << " are not compatible signs.";
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
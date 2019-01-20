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
    
    int x;
    string thous, tenthous, hund, ten, one;
    
    //Initialize or input i.e. set variable values
    
    cout << "Arabic to Roman numeral conversion.\n" << "Input the integer to convert.\n";
    cin >> x;
    
    //Map inputs -> outputs
    
    if ((x < 1000) || (x > 3000)) {
        cout << x << " is Out of Range!";
        
    } else {
        
        //Thousands
        if ((x/1000)%10 == 1) {
            thous = 'M';
        } else if ((x/1000)%10 == 2) {
            thous = "MM";
        };
        
        //Hundreds
        if ((x/100)%10 == 1) {
            
            hund = 'C';
        } else if ((x/100)%10 == 2) {
            
            hund = "CC";
        } else if ((x/100)%10 == 3) {
            
            hund = "CCC";
        } else if ((x/100)%10 == 4) {
            
            hund = "CD";
        } else if ((x/100)%10 == 5) {
            
            hund = 'D';
        } else if ((x/100)%10 == 6) {
            
            hund = "DC";
        } else if ((x/100)%10 == 7) {
            
            hund = "DCC";
        } else if ((x/100)%10 == 8) {
            
            hund = "DCCC";
        } else if ((x/100)%10 == 9) {
            
            hund = "CM";
        };
        
        //Tens
        if ((x/10)%10 == 1) {
            
            ten = 'X';
        } else if ((x/10)%10 == 2) {
            
            ten = "XX";
        } else if ((x/10)%10 == 3) {
            
            ten = "XXX";
        } else if ((x/10)%10 == 4) {
            
            ten = "XL";
        } else if ((x/10)%10 == 5) {
            
            ten = "L";
        } else if ((x/10)%10 == 6) {
            
            ten = "LX";
        } else if ((x/10)%10 == 7) {
            
            ten = "LXX";
        } else if ((x/10)%10 == 8) {
            
            ten = "LXXX";
        } else if ((x/10)%10 == 9) {
            
            ten = "XC";
        };
        
        //Ones
        if ((x)%10 == 1) {
            
            one = 'I';
        } else if ((x)%10 == 2) {
            
            one = "II";
        } else if ((x)%10 == 3) {
            
            one = "III";
        } else if ((x)%10 == 4) {
            
            one = "IV";
        } else if ((x)%10 == 5) {
            
            one = "V";
        } else if ((x)%10 == 6) {
            
            one = "VI";
        } else if ((x)%10 == 7) {
            
            one = "VII";
        } else if ((x)%10 == 8) {
            
            one = "VIII";
        } else if ((x)%10 == 9) {
            
            one = "IX";
        };
        
        cout << x << " is equal to " << thous << hund << ten << one;
        
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
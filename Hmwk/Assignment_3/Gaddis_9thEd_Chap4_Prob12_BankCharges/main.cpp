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
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Declare Variables
    
    float total, checks, balance, fee, low;
    float monthly = 10;
    //Initialize or input i.e. set variable values
    
    cout << "Monthly Bank Fees\n" << "Input Current Bank Balance and Number of Checks\n";
    cin >> balance >> checks;
    
    //Map inputs -> outputs
    
    //Check Fee
    if (checks < 20) {
        fee = checks * .1;
    } else if (checks >= 20 && checks < 40) {
        fee = checks * .08;
    } else if (checks > 39 && checks < 60) {
        fee = checks * .06;
    } else {
        fee = checks * .04;
    }
    
    //Low Balance
    if (balance < 400) {
        low = 15;
    } else {
        low = 0;
    }
    
    //New Balance
    total = balance - fee - monthly - low;
    
    //Display the outputs
    if (balance < 0) {
        cout << "This account is overdrawn.";
    } else {
    
    cout << "Balance     $   " << balance << endl;
    cout << "Check Fee   $     " << fee << endl;
    cout << "Monthly Fee $    " << monthly << endl;
    cout << "Low Balance $     " << low << endl;
    cout << "New Balance $   " << total;
    };
    //Exit stage right or left!
    return 0;
}
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
    
    int t1, t2, t3;
    string n1, n2, n3;
    
    //Initialize or input i.e. set variable values
    
    cout << "Race Ranking Program\n" << "Input 3 Runners\n" << "Their names, then their times\n";
    cin >> n1 >> t1 >> n2 >> t2 >> n3 >> t3;
    
    //Map inputs -> outputs
    
    if (t3 < t1 && t1 < t2 ) {
        cout << n3 << "\t" << t3 << endl << n1 << "\t" << t1 << endl << n2 << "\t" << t2;
    } else if (t1 < t2 && t2 < t3 ) {
        cout << n1 << "\t" << t1 << endl << n2 << "\t" << t2 << endl << n3 << "\t" << t3;
    } else if (t1 < t3 && t3 < t2 ) {
        cout << n1 << "\t " << t1 << endl << n3 << "\t " << t3 << endl << n2 << "\t" << t2;
    } else if (t3 < t2 && t2 < t1 ) {
        cout << n3 << "\t" << t3 << endl << n2 << "\t" << t2 << endl << n1 << "\t" << t1;
    } else if (t2 < t1 && t1 < t3 ) {
        cout << n2 << "\t" << t2 << endl << n1 << "\t" << t1 << endl << n3 << "\t" << t3;
    } else if (t2 < t3 && t3 < t1 ) {
        cout << n2 << "\t" << t2 << endl << n3 << "\t" << t3 << endl << n1 << "\t" << t1;
    };
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
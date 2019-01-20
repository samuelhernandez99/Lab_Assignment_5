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
    
    string a, b, c;
    
    //Initialize or input i.e. set variable values
    
    cout << "Sorting Names\n" << "Input 3 names\n";
    cin >> a >> b >> c;
    
    //Map inputs -> outputs
    
    if (a[0] < b[0] && b[0] < c[0]) {
        cout << a << endl << b << endl << c;
   } else if (b[0] < c[0] && c[0] < a[0]) {
        
        cout << b << endl << c << endl << a;
    } else if (c[0] < a[0] && a[0] < b[0]){
        
        cout << c << endl << a << endl << b;
    } else if (a[0] < c[0] && c[0] << b[0]) {
        cout << a << endl << c << endl << b;
    } else if (b[0] < a[0] && a[0] < b[0]) {
        cout << b << endl << a << endl << c;
    } else if (c[0] < b[0] && b[0] < a[0]) {
        cout << c << endl << b << endl << a;
    }
     
    /*
    if ((a[0] < b[0]) && (b[0] < c[0])) ){
        cout << a << b << c;
    } else if ((b[0] < c[0] && (c[0] < a[0])) {
        
        cout << b << c << a;
    } else if ((c[0] < a[0] && (a[0] < b[0])) {
        
        cout << c << a << b;
    } else if ((c[0] < b[0] && (b[0] < a[0])) {
        
        cout << c << b << a;
    } else if ((a[0] < c[0] && (c[0] < b[0])) {
        
        cout << a << c << b;
    };
    */
   
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
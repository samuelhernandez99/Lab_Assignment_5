/* 
 * Author: 
 * Date:
 * Purpose:
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    
    float a,b,c,d,e, sum, average;
    
    //Input or initialize values Here
    
    cout << "Input 5 numbers." << endl;
    cin >> a >> b >> c >> d >> e;
    
    //Process/Calculations Here
    
    sum = a + b + c + d + e;
    average = sum/5;
    
    //Output Located Here
    
    cout << "The average is " << average;

    //Exit
    return 0;
}
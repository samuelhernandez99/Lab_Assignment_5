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
    
    float gallons, miles, mpg;
    
    //Input or initialize values Here
    
    cout << "Input number of gallons and distance traveled.\n";
    cin >> gallons >> miles;
    
    //Process/Calculations Here
    
    mpg = miles/gallons;
    
    //Output Located Here
    
    cout << "Your MPG is " << mpg;

    //Exit
    return 0;
}
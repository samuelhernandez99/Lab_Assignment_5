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
    int x, y, prod, quot;
    
    //Input or initialize values Here
    
    cout << "Input 2 integer numbers.\n" << endl;
    cin >> x >> y;
    
    //Process/Calculations Here
    
    prod = x * y;
    quot = y / x;
    
    //Output Located Here
    
    cout << "The product of " << x << "*" << y << " = " << prod << endl << endl;
    cout << "The quotient of " << y << "/" << x << " = " << quot;
    
    //Exit
    return 0;
}
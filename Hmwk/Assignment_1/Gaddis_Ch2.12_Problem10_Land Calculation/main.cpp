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
    
    float land, total;
    
    //Input or initialize values Here
    
    cout << "Input the number of square feet.\n";
    cin >> land;
    
    //Process/Calculations Here
    
    total = land/43560;
    
    //Output Located Here
    
    cout << "The number of acres is " << total;

    //Exit
    return 0;
}
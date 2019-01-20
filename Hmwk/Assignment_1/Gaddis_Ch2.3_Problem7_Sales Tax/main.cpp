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
    
    float purchase, total;
    
    //Input or initialize values Here
    
    cout << "Input price of purchase\n";
    cin >> purchase;
    
    //Process/Calculations Here
    
    total = (purchase * .04) + (purchase * .02);
    
    //Output Located Here

    cout << "The total sales tax is " << total;

    //Exit
    return 0;
}
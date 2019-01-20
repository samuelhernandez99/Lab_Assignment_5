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
    
    int q,d,n, total;
    
    //Input or initialize values Here
    
    cout << "Enter the number of Quarters, Dimes and Nickels\n" << endl;
    cin >> q >> d >> n;
    
    //Process/Calculations Here
    
    total = q*25 + d*10 + n*5;
  
    
    //Output Located Here
    
    cout << q << " Quarters + " << d << " Dimes + " << n << " Nickels = " << total << " cents!";

    //Exit
    return 0;
}
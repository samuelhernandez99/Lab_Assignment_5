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
    char R, P, S, one, two;
    
    //Initialize or input i.e. set variable values
    cout << "Rock Paper Scissors Game\n" << "Input Player 1 and Player 2 Choices\n";
    cin >> one >> two;
    
    //Map inputs -> outputs
    if ((one == 'R' || one == 'r') && (two == 'P' || two == 'p')) {
        
        cout << "Paper covers rock.";
        
    } else if ((one == 'P' || one == 'p') && (two == 'R' || two == 'r')) {
        
        cout << "Paper covers rock.";
        
    } else if ((one == 'P' || one == 'p') && (two == 'S' || two == 's')) {
        
        cout << "Scissors cuts paper.";
    } else if ((one == 'S' || one == 's') && (two == 'P' || two == 'p')) {
        
        cout << "Scissors cuts paper.";
    } else if ((one == 'R' || one == 'r') && (two == 'S' || two == 's')) {
        
        cout << "Rock breaks scissors.";
    } else if ((one == 'S' || one == 's') && (two == 'R' || two == 'r')) {
        
        cout << "Rock breaks scissors.";
    };
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}
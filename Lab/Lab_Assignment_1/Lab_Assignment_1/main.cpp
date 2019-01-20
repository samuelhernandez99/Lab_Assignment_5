/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sam
 *
 * Created on January 6, 2019, 12:46 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    float milBdgt,fedBdgt,mlPrcnt;

    milBdgt=7.0e11f;    //Military Budget = 700 Billion   

    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    
    mlPrcnt = milBdgt/fedBdgt;
    
    cout << "The U.S. Military's budget is " << mlPrcnt << "% of the total Federal budget.\n";
    
    return 0;
}


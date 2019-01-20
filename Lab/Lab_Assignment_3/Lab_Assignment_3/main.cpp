/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sam
 *
 * Created on January 15, 2019, 4:07 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float cost, profit, taxtot, tax;

    cout << "Enter the amount it cost you per gallon the last time you put gas in your car : ";
    cin >> cost;
    
    profit = cost * .065;
    
    tax = (cost * .39) + (cost * .1) + (cost * .184);
    
    taxtot = tax + (tax * .08);
    
    cout << "At this price the gas company makes a profit of 6.5%, or $" << profit << ".\n" << "The government receives $" << taxtot << " in taxes.";
    
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 23, 2015, 1:56 PM
 * Purpose:  Calculate the percent of the federal budget 
 * allocated to the military 
 */

//System Libraries 
#include <iostream> //I/O Library
using namespace std; //Namespace for iostream

//User Libraries 

//Global Constants 
const unsigned char CNVPCT=100;//Conversion to Percentage

//Function Prototype 

//Execution begins here!

int main(int argc, char** argv) {
    
    //Declare Variables 
    float fedBudg;    //Federal Budget in $'s
    float milBudg;    //Military Budget in $'s
    float milPctg;    //Percentage of federal spending on military 
   
    //Initialize values from reference website
    //https://www.whitehouse.gov/sites/default/files
    // /omb/budget/fy2015/assets/tables.pdf
    fedBudg = 3.80e12f;//3.800 trillion dollars
    milBudg = 6.06e11f;//0.606 trillion dollars or 606 billion dollars
  
    //Calculate the Percentage of the Federal Budget
    milPctg = (milBudg/fedBudg)*CNVPCT;
  
    //Output the results 
    cout << "Percentage of the Federal Budget spent on the Military = " 
         << milPctg << " %" << endl;
    
    //Exit Stage Right!
    return 0;
}
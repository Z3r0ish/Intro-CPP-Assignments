/*
File Name   :   sumdigits.cpp
Author      :   Victor Gualberto
Date        :   9/11/2023
Purpose     :   Sum the digits in an integer
Project Link:   https://github.com/Z3r0ish/Intro-CPP-Assignments
*/
#include <iostream>
#include <cmath>
using namespace std;

// Vars
int i, iMax, out, temp;

//Promtp and math
int prompt() {
    iMax = 1000; //Max vaule
    cout << "Input an Interger between 0-1000 \n";
    cin >> i; // Input number
    if (i < iMax) { // Check if num is larger than than max
        for (int x = 1; x < std::to_string(i).length()+1; x++) { //Set up for loop
            int module = pow(10, x); //Sets up mod arg
            temp = i % module / pow(10, x-1); //Math to get current digit
            out = out + temp; //Adds cuurent round number to tally
        }
        cout << "Sum the digits in an integer is: " << out << endl;
        return 0;
    } else {
        return 1; //return non-zero for an error
    }
}

int main() {
    while (prompt() != 0){ //Keep the prompt untill a valid number is summitted
        prompt();
    }    
    return 0;
}
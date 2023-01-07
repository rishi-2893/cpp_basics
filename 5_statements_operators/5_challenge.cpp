/*
Write a program that asks the user to enter the following : 

An integer representing the number of cents

You may assume that the number of cents entered is greater than or equal to zero 

The program should then display how to provide that change to the user. 

In the US : 
1 dollar is 100 cents 
1 quarter is 25 cents 
1 dime is 10 cents 
1 nickel is 5 cents
1 penny is 1 cent
*/



#include <iostream>
using namespace std;

int main() {

    cout << "Please enter number of cents: \n";

    int user_input {};
    cin >> user_input;

    int dollar{}, quarter{}, dime{}, nickel{}, penny{}, cents_left{};

    dollar = user_input / 100;
    cents_left = user_input - (100*dollar);

    quarter = cents_left / 25 ;
    cents_left = cents_left - (25*quarter);

    dime = cents_left / 10 ;
    cents_left = cents_left - (10*dime);

    nickel = cents_left / 5 ;
    cents_left = cents_left - (5*nickel);    

    penny = cents_left ;
    cents_left = cents_left - (penny);

    cout
        << "dollar: "    << dollar
        << "\nquarter: " << quarter
        << "\ndime: "    << dime
        << "\nnickel: "   << nickel
        << "\npenny: "   << penny;

}
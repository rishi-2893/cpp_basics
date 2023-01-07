/*
Shipping cost calculator 

Ask the user for package dimension in inches 
length, width, height - these should be integers 

All dimension must be 10 inches or less or we cannot ship it

Base cost $2.50 
If package volume is greater than 100 cubic inches there is a 10% surcharge 
If package volume is greater than 500 cubic inches there is a 25% surcharge
*/



#include <iostream>
using namespace std;

int main() {

    cout
        << "Enter package dimensions: Length | Width | Height\n";


    int length{}, width{}, height{};
    cin
        >>length
        >> width
        >> height;

    int volume{};
    volume = length * width * height;

    if (length >10 || width > 10 || length > 10)
        cout
            << "Sorry we cannot ship your package";


    else if (volume <100)
        cout
            << "You have to pay $2.5";

    else if (volume >= 100 && volume < 500)
        cout
            << "You have to pay $"
            << 1.1*2.5;

    else
        cout
            << "You have to pay $"
            << 1.25*2.5;

}
/*
Frank's Carpet Cleaning Service Charges 
        $35 per large room
        $25 per small room 
Sales tax rate is 6% 
Estimates are valid for 30 days 


Prompt the user for the number of rooms they would like cleaned
provide an estimate such as : 
=======================================
Estimate for carpet cleaning service : 
Number of large rooms : 2 
Number of small rooms : 1
Price per small room : $25 
Price per large room : $35
Cost : $60 
Tax : $3.6 
Total estimate : $63.6 
This estimate is valid for 30 days
=======================================
*/

#include <iostream>
using namespace std;

int main() {

    const int price_per_small_room {25};
    const int price_per_large_room {35};
    const float tax {0.06};

    cout << "Number of small rooms:\n";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;

    cout << "Number of large rooms:\n";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;


    double cost_to_clean { (number_of_large_rooms * price_per_large_room) + 
                          (number_of_small_rooms * price_per_small_room) };
    double tax_to_pay {cost_to_clean * tax};
    double total_estimate {cost_to_clean + tax_to_pay};

    cout<< "Estimate for carpet cleaning service : "
        << endl;

    cout<< "Number of small rooms : " 
        << number_of_small_rooms 
        << "\n";

    cout<< "Number of large rooms : " 
        << number_of_large_rooms 
        << "\n";

    cout<< "Price per small room : $" 
        << price_per_small_room 
        << "\n";

    cout<< "Price per large room : $" 
        << price_per_large_room 
        << "\n";

    cout<< "Cost : $" 
        << cost_to_clean 
        << endl;
        
    cout<< "Tax : $" 
        << tax_to_pay 
        << endl;

    cout<< "Total estimate : $" 
        << total_estimate 
        << "\n";

    cout<< "This estimate is valid for 30 days" ;

}

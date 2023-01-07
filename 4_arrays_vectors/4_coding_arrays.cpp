#include <iostream>

using namespace std;

int main() {

    // UN-INITIALIZED ARRAY GIVES GARBAGE OUTPUT
    int un_init_array[3];
    
    cout << "UN-INITIALIZED ARRAY GIVES GARBAGE OUTPUT\n"
        << un_init_array[0] << "\n"
        << un_init_array[1] << "\n"
        << un_init_array[2]
        << "\n===========================\n\n";


    // INITIALIZING THROUGH USER

    int user_init_array[3] {};

    cout << "Enter Three Numbers, Leave Space between Each!";
    cin >> user_init_array[0];
    cin >> user_init_array[1];
    cin >> user_init_array[2];


    cout << "INITIALIZED ARRAY\n"
        << user_init_array[0] << "\n"
        << user_init_array[1] << "\n"
        << user_init_array[2]
        << "\n\n===========================";

    return 0;
}
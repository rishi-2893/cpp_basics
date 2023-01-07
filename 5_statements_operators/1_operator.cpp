//      ________________________________________________________________________________
///     ASSIGNMENT OPERATOR ( = )
//]         1. Value on RIGHT is assigned to LEFT
//>                     Left  <-------assigned to-------  Right Value

//]         2. Value of RIGHT must be TYPE compatible with LEFT
//>                     int integer;
//>                     integer1 = "string"
//                      .>> ERROR

//>                     integer1 = 14
//                      .>> SUCCESS

//]         3. Can be CHAINED
//>                     num1 = num2 = 100
//                      .>> num2 assigned to 100
//                      .>> num1 assigned to num2


        ////////////////////////////////////////////////////////////////////////////////


///     ARITHMETIC OPERATORS
//]         1. +
//]         2. -
//]         3. *
//]         4. /
//]         5. %    (works only with INTEGERS)

//>                     cout << 5 / 10;
//                      .>> 0

//>                     cout << 5.0 / 10.0;
//                      .>> 0.5
//      ________________________________________________________________________________


// Convert INR ------> USD

#include <iostream>
using namespace std;

const double conversion_rate {0.012};

int main() {
    cout
        << "Input INR: \n";

    double inr;
    cin
        >> inr;
    
    double result;
    result = inr * conversion_rate;

    cout
        << result;
}
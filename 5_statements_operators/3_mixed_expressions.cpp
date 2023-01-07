//      ________________________________________________________________________________
///     MIXED TYPE EXPRESSIONS
//]         1. In C++ operations occur on SAME type operands
//]         2. If operands are of different type, C++ will convert one

//]         3. Compiler gives error if FAILS to convert types AUTOMATICALLY


        ////////////////////////////////////////////////////////////////////////////////


///     MECHANISM OF CONVERSION
//]         1. HIGHER types are converted to LOWER types
//]         2. Higher / Lower based on SIZE of values the TYPE can hold
//>                     LOWER TYPES  -->  hold smaller values
//>                     HIGHER TYPES -->  hold larger values

//]         3. Compiler converts LOWER type to HIGHER type

                        // Bytes of storage required to store:
                        // short: 2 bytes
                        // int: 4 bytes
                        // char: 1 bytes
                        // double: 8 bytes

//>                     short ----> int
//>                     char  ----> int
//>                     int   ----> double


        ////////////////////////////////////////////////////////////////////////////////


///     CONVERSION TYPES
//]         NOTE: Type conversion is also known as COERCION

//?          1. PROMOTION
//]                 1. Lower Type to Higher Type
//>                            int ---> double
//>                            10  ---> 10.0

//]                 2. Example
//>                            int x {10};
//>                            double y {2.0};

//>                            x * y
//                             .>> 20.0     // int PROMOTED to double




//?          2. DEMOTION
//]                 1. Higher Type to Lower Type
//>                            double ---> int
//>                            12.5   ---> 12

//]                 2. Example
//>                            int num {5};
//>                            num = 10.5;
//                             .>> num = 10     // double DEMOTED to int


        ////////////////////////////////////////////////////////////////////////////////


///     HOW TO CONVERT TYPES EXPLICITLY
//]         1. Syntax
//>                     static_cast<OutputType>(VariableName)

//]         2. Example
//>                     double x {15.24};
//                      .>> 15.24

//>                     static_cast<int>(x)
//                      .>> 15
//      ________________________________________________________________________________



// ASK USER FOR 3 INTEGERS
// CALCULATE THE AVERAGE OF 3 INTEGERS

#include <iostream>
using namespace std;

int main() {

    //asking 3 ints
    cout << "Common, give me three integers! Fast!!\n";

    int one {}, two{}, three{};
    cin >> one >> two >> three;

    // average
    int sum {0};
    sum = one + two + three;

    double avg {0.0};
    avg = static_cast<double>(sum) / 3;

    cout << "\nAverage is: " << avg;

}
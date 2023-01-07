//      ________________________________________________________________________________
///     sizeof OPERATOR
//]         1. Used to determine size of
//]                 a. Variable in bytes
//]                 b. Type in bytes

//]         2.Example:
//>                     sizeof(int);
//>                     sizeof(double);

//>                     sizeof(variable_name);
//>                     sizeof  variable_name;   // Parenthesis optional for variables
//      ________________________________________________________________________________




#include <iostream>
#include <climits>  // FOR int TYPE
#include <cfloat>  // FOR float TYPE
using namespace std;

int main () {

    cout << "\nBytes of storage required to store:" << endl;
    
        cout << "short int: " << sizeof(short int) << " bytes" <<  endl;
        cout << "int: " << sizeof(int) << " bytes" <<  endl;
        cout << "bool: " << sizeof(bool) << " bytes" <<  endl;
        cout << "float: " << sizeof(float) << " bytes" <<  endl;
        cout << "char: " << sizeof(char) << " bytes" <<  endl;
    
    cout << "\n" << "========================" <<endl;


    cout << "\nMaximum values we can store in:" <<endl;

        cout << "short int: " << SHRT_MAX << 1.1  << endl;
        cout << "long int: " << LLONG_MAX << endl;
        cout << "int: " << INT_MAX << endl;
        cout << "char: " << CHAR_MAX << endl;
        cout << "float: " << FLT_MAX << endl;

}


//**********OUTPUT OF ABOVE**********\\
//> Bytes of storage required to store:
//> short int: 2 bytes
//> int: 4 bytes
//> bool: 1 bytes
//> float: 4 bytes
//> char: 1 bytes

//>========================

//> Maximum values we can store in:
//> short int: 32767
//> long int: 9223372036854775807
//> int: 2147483647
//> char: 127
//> float: 3.40282e+38
//**********OUTPUT OF ABOVE**********\\
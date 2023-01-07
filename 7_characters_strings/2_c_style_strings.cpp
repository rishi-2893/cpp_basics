//      ________________________________________________________________________________
///     HOW ARE STRINGS HANDLED
//]         1. Contiguous in memory
//]         2. Implemented as ARRAY of characters

//]         3. Terminated by a NULL character
//>                     "Hi C++"
//>                    ____________________________
//>                    |  |   |   |   |   |   |    |
//>                    |H | i |   | C | + | + | \0 |
//>                    |__|___|___|___|___|___|___ |

//]         4. Null character tells computer WHERE STRING ENDS


        ////////////////////////////////////////////////////////////////////////////////


///     DECLARING VARIABLES
//]         1. Syntax
//>                     char VariableName[] {"String"};

//]         2. Example
//>                     char my_name[] {"Rishi"};
//                      .>> my_name[5] is '\0' Null character

//]         3. Example
//>                     char my_name[5] {"Rishi"}   // COMPILER ERROR
//                      .>> Space required is 6
//                      .>> 5 letter character + 1 Null character = 6

//]         4. Example
//>                     char my_name[8] {"Rishi"}
//                      .>> C++ makes 3 NULL character in total
//                      .>> 5 letter character + 3 Null character = 8
//      ________________________________________________________________________________


#include <iostream>
#include <cctype>       // For CHARACTER based functions
#include <cstring>      // For C-STYLE string functions
using namespace std;

int main() {

    char first_name[20] {};
    char last_name[20] {};
    char full_name[50] {};
    char temp_name[50] {};

    cout<< "\n\nHey user! Please enter your FIRST name.\n";
    cin>> first_name;

    cout<< "Hey user! Please enter your LAST name.\n";
    cin>> last_name;


    // USING strlen() FUNCTION TO GET LENGTH OF STRING
    cout<< "\nHi "
        << first_name
        << " your first name has "
        << strlen(first_name)
        << " characters."
        << " And your last name has "
        << strlen(last_name)
        << " characters.\n\n";

    // USING strcpy()
    strcpy(full_name, first_name);   // COPIES first_name TO full_name

    // USING strcat()
    strcat(full_name, " ");         // ADDS SPACE AFTER full_name
    strcat(full_name, last_name);    // ADDS last_name after full_name and " "

    cout<< "Your full name is: "
        << full_name
        << endl;

    // USING cin.getline() TO GET FULL NAME
    cout<< "Hey can you enter your full name?\n";

    cin.getline(full_name, 50);

    cout<< "Thank you "
        << full_name;
}
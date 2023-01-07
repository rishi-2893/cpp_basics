/*
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.

Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:

It's much easier to understand the Letter Pyramid given examples.

If the user enters the string "ABC", then your program should display:
  A                                                                                                                    
 ABA                                                                                                                   
ABCBA 


If the user enters the string, "12345", then your program should display:
    1                                                                                                                  
   121                                                                                                                 
  12321                                                                                                                
 1234321                                                                                                               
123454321

 

If the user enters 'ABCDEFG', then your program should display:
      A                                                                                                                
     ABA                                                                                                               
    ABCBA                                                                                                              
   ABCDCBA                                                                                                             
  ABCDEDCBA                                                                                                            
 ABCDEFEDCBA                                                                                                           
ABCDEFGFEDCBA


If the user enters "C++isFun!", then your program should display:
        C                                                                                                              
       C+C                                                                                                             
      C+++C                                                                                                            
     C++i++C                                                                                                           
    C++isi++C                                                                                                          
   C++isFsi++C                                                                                                         
  C++isFuFsi++C                                                                                                        
 C++isFunuFsi++C                                                                                                       
C++isFun!nuFsi++C

*/


// TODO how much white space?   
//  length of string - 1
//  reduce by one in every iteration

// TODO what to print at every line
//  print `n` characters when `n` is nth iteration
// followed by printing `n-1` characters in REVERSED ORDER


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    // USER INPUT
    cout<< "Welcome to the pyramid maker\n"
        << "Please enter the string you want to convert into a pyramid:";

    string user_input{};
    cin>> user_input;

    size_t string_length {user_input.length()};

    // FOR LOOP
    for (int i {1}; i<=string_length; ++i) {

        // EXAMPLE CASE --> ABC

        // WHITE SPACE LOGIC
        size_t white_space_calculator {string_length - i};
        string white_space (white_space_calculator, ' ');

        // STARTING CHARACTERS
        string starting_characters {};
        starting_characters = user_input.substr(0, i);

        // ENDING REVERSED CHARACTERS
        string ending_characters {};
// ABC BA

        size_t starting_characters_length {starting_characters.length()};
        for (int x {starting_characters_length-2} ; x >= 0; --x) {
            ending_characters += starting_characters[x];

        }

        cout<< white_space
            << starting_characters
            << ending_characters
            <<endl;

    } 
}
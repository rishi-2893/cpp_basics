//      ________________________________________________________________________________
///     C++ STRINGS
//]         1. From C++ STL
//>                     #include <string> 
//]         2. Dynamic size |  Contiguous in memory

//]         3. Examples
//>                     string s1;
//                      .>> Empty

//>                     string s2 {"Rishi"};
//                      .>> Rishi

//>                     string s3 {s2};
//                      .>> Rishi                   // COPY OF s2

//>                     string s4 {"Rishi", 3};
//                      .>> Ris                     // FIRST 3 CHARACTERS

//>                     string s5 {"Rishi", 1, 2};
//                      .>> is                      // 2 CHARACTERS STARTS FROM INDEX 1

//>                     string s6 (3, 'X');
//                      .>> XXX                     // NOTE: USE ( ) AND NOT { }


        ////////////////////////////////////////////////////////////////////////////////


///     ASSIGNMENT
//]         1. Example
//>                     string s1;
//>                     s1 = "This is C++"
//                      .>> s1 is "This is c++"

//]         2. Example
//>                     string s2 {"abcXYZ"};
//>                     s2 = s1
//                      .>> s2 changes to "This is c++" from "abcXYZ"


        ////////////////////////////////////////////////////////////////////////////////


///     CONCATENATION
//]         1. Cannot concatenate string literals
//>                     string sentence;

//>                     sentence = "This " + "is it"
//                      .>> Gives an error

//]         2. Can concatenate strings
//>                     string s1 {"hi"};
//>                     string s2 {"c++"};
//>                     string sentence;

//>                     sentence = s1 + s2;
//                      .>> hi C++

//]         3. Can concatenate strings & string literals together
//>                     string s1 {"hi"};
//>                     string sentence;

//>                     sentence = s1 + " C++";
//                      .>> hi C++


        ////////////////////////////////////////////////////////////////////////////////


///     ACCESSING STRING ELEMENTS
//]         1. You can access it just like an VECTOR!
//>                     a. You can use SUBSCRIPT OPERATOR ( [] )
//>                     b. You can use .at() method
//>                     c. You can  use LOOPS


        ////////////////////////////////////////////////////////////////////////////////


///     EXTRACTING USING getline()
//?          Variant 1
//]                 1. Syntax
//>                            getline(cin, Object)

//]                 2. Example
//>                            string s1;

//>                            getline(cin, s1)         // input "Hi there"
//                             .>> Hi there

//?          Variant 2
//]                 1. Syntax
//>                            getline(cin, Object, CharDeliminator)

//]                 2. Example
//>                            string s1;

//>                            getline(cin, s1, 't')         // input "Hi there"
//                             .>> Hi
//      ________________________________________________________________________________
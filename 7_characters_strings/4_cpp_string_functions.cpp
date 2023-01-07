//      ________________________________________________________________________________
///     COMPARING
//]         1. You can use (==, !=, >, >=, <=, <)

//]                     string1 == string2
//>                     "hi" == "hi"
//                      .>> true

//]                     string1 > string2
//>                     "python" > "zebra"
//                      .>> false
//                      .>> ZEBRA comes after python (Sorted LEXICALLY)

//]                     string1 < string2
//>                     "abc" < "z"
//                      .>> true
//                      .>> Result according to lexicographic order


        ////////////////////////////////////////////////////////////////////////////////


///     SUBSTRING FUNCTION
//]         1. Syntax
//>                     object.substr(StartIndex, Length)
//]         2. Example
//>                     string s1 {"C++ is wonderful"};

//>                     cout<< s1.substr(4, 2)
//                      .>> is


        ////////////////////////////////////////////////////////////////////////////////


///     SEARCHING USING find()
//]         1. Syntax
//>                     object.find(SubString)

//]         2. Returns INDEX of FIRST character of the first occurrence of the substring
//>                     string s1 {"This is wonderful"};

//>                     s1.find("is")
//                      .>> 2           // *is* first occurred in T-h-i-s
//>                     s1.find("won")
//                      .>> 8


        ////////////////////////////////////////////////////////////////////////////////


///     ERASE AND CLEAR METHOD
//]         1. Erase used to REMOVE some characters from STRING
//>                     object.erase(StartIndex, EndIndex)

//]         2. Empties the string
//>                     object.clear()


        ////////////////////////////////////////////////////////////////////////////////


///     LENGTH
//]         1. Returns length of string
//>                     object.length()
//      ________________________________________________________________________________
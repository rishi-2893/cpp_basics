//      ________________________________________________________________________________
///     VECTOR
//]         1. Vectors as like DYNAMIC arrays 
//]         2. They can GROW or SHRINK in size as needed

//]         3. They are CONTAINER in C++ STL
//]         4. Can provide BOUNDS checking

//]         5. Using `[]` for accessing elements does not provide BOUNDS checking


        ////////////////////////////////////////////////////////////////////////////////


///     DECLARING VECTORS
//]         1. You need HEADER FILE
//>                     #include <vector>

//]         2. Syntax
//>                     using namespace std;
//>                     vector <ElementType> VectorName;


        ////////////////////////////////////////////////////////////////////////////////


///     INITIALIZING VECTOR
//?          AUTO INITIALIZE TO ZERO
//]                 1. Syntax
//>                            vector <ElementType> VectorName (NumberOfElements);

//]                 2. Example
//>                            vector <char> vowels (5);
//                             .>> all 5 elements as initialized to ZERO

//?          INITIALIZE TO LIST
//]                 1. Syntax
//>                            vector <ElementType> VectorName {ElementList};

//]                 2. Example
//>                            vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

//?          INITIALIZE ALL
//]                 1. Syntax
//>                            vector <ElementType> VectorName (NumberOfElements,
//>                                                             ElementToInitialize);

//]                 2. Example
//>                            vector <int> my_integers (100, 5);
//                             .>> Vector of 100 elements
//                             .>> All elements are 5 
//      ________________________________________________________________________________

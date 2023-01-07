//      ________________________________________________________________________________
///     HOW ARRAYS WORK?
//]         1. Name of array represent location of first element (index = 0)
//]         2. The [index] represents the offset from the beginning of the array

//]         3. C++ simply performs a calculation to find the correct element
//]         4. Remember - No Bounds Checking!


        ////////////////////////////////////////////////////////////////////////////////


///     ACCESSING ELEMENTS
//]         1. Syntax
//>                     ArrayName[ElementIndex]

//]         2. Example
//>                     int my_array[3] {1,2,3};   //creating array

//>                     cout << my_array[1];
//                      .>> 2


        ////////////////////////////////////////////////////////////////////////////////


///     CHANGING ELEMENTS
//]         1. Example 1:
//>                     my_array[1] = 90
//                      .>> array of [1,90,3]

//]         2. Example 2:
//>                     cin >> my_array[1]
//                      .>>Changing elements based on USER INPUT


        ////////////////////////////////////////////////////////////////////////////////


///     DECLARING MULTIDIMENSIONAL ARRAY
//]         1. Syntax of an 2D Array (or MATRIX)
//>                     ElementType ArrayName[Dim1Size][Dim2Size]
//                      .>> Matrix with all elements being ZERO

//]         2, Example:
//>                     int my_array[3][4]
//                      .>> Matrix of 12 elements
//                      .>> All elements are ZERO


        ////////////////////////////////////////////////////////////////////////////////


///     INITIALIZING MULTIDIMENSIONAL ARRAY
//]         1. Syntax:
//>                     ElementType ArrayName[Dim1Size][Dim2Size] {{},{}...}
//                      .>> {{},{}...} depends on DIMENSIONS

//]         2. Example:
//>                     int my_array[3][4] 
//>                     {
//>                       {1, 2, 3, 1},
//>                       {3, 5, 8, 0},
//>                       {8, 5, 1, 2}
//>                     }

//                      .>>     1   2   3   1
//                      .>>     1   2   3   1
//                      .>>     3   5   8   0
//                      .>>     8   5   1   2
//      ________________________________________________________________________________
 
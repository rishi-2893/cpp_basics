//      ________________________________________________________________________________
///     ARRAY
//]         1. COLLECTION of elements 
//]         2. All elements must be of SAME data type

//]         3. Elements can be ACCESSED (by index pos.)
//]         4. Always INITIALIZE arrays

//]         5. Compiler does not check if you are OUT of BOUNDS


        ////////////////////////////////////////////////////////////////////////////////


///     DECLARING ARRAYS
//]         1. Syntax:
//>                     ElementType ArrayName [ConstantNumberOfElements]

//]         2. Example 1: Array of 5 ages 
//>                     int student_ages [5];

//]         3. Example 2: Array created by DECLARING constant
//>                     const int student_count {8};
//>                     int students [student_count];


        ////////////////////////////////////////////////////////////////////////////////


///     INITIALIZING ARRAYS
//]         1. Syntax:
//>                     ElementType ArrayName [ConstantNumberOfElements] {init list}

//]         2. Example 1:
//>                     int student_ages [5] {14,13,18,29,20}

//]         3. Example 2: 
//>                     int student_ages [10] {3,5} 
//                      .>> index zero = 3
//                      .>> index one = 5
//                      .>> All other are initialized to ZERO

//]         4. Example 3:
//>                     int student_ages [] {3, 5, 4, 8, 1, 2}
//                      .>> Compiler decides SIZE of array AUTOMATICALLY
//      ________________________________________________________________________________
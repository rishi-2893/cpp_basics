//      ________________________________________________________________________________
///     POINTER ARITHMETIC
//?          ++ And --
//]                 1. Increments or decrements pointer to point to next element in array
//>                            ++array_ptr 
//>                            --array_ptr


//?          + AND -
//]                 1. Increments or decrements pointer to point to + / - n element
//>                            char array[] {'a','b','c','d','e','d'};
//>                            array_ptr + 2
//                             .>> points to c 


//?          SUBTRACTING TWO POINTERS
//]                 1. Both pointers must be of same data type
//]                 2. Gives number of elements BETWEEN the pointers
//>                            int n = int_ptr2 - int_ptr1


//?          COMPARING TWO POINTERS  (== and !=)
//]                 1. Results true if both pointers point to SAME LOCATION


        ////////////////////////////////////////////////////////////////////////////////


///     RETURNING POINTER
//]         1. Syntax: You need to delcare function with `*`
//>                     FunctionType *Function();

//]         2. NOTE:
//]                 a. You should return pointers to memory dynamically
//]                    allocated in function
//]                 b. Never return a pointer to LOCAL VARIABLE

//]         3. Example
//>                     int *ptr_function(int *int_ptr1, int *intr_ptr2) {
//>                         if (*int_ptr1  > *int_ptr2)
//>                             return int_ptr1;
//>                         else
//>                             return int_ptr2;
//>                     }
//      ________________________________________________________________________________
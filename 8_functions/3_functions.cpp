//      ________________________________________________________________________________
///     OVER LOADING FUNCTIONS
//]         1. Overloading functions means to create functions with SAME NAME 
//]            but different PARAMETER list

//]         2. Example
//>                     int add_num(int a, int b);
//>                     double add_num(double a, double b);

//>                     add_num(1,4);
//                      .>> 5
//>                     add_num(1.5,5.3);
//                      .>> 6.8
//>                     add_num(1, 4.4);
//                      .>> ERROR


        ////////////////////////////////////////////////////////////////////////////////


///     PASSING ARRAYS IN FUNCTION
//]         1. Array elements as not copied, instead the ADDRESS is COPIED
//]            of FIRST element

//]         2. Function only knows ADDRESS of first element of array, and has no
//]             clue about the size of array

//]         3. Example
//>                     void print(int array[], size_t size_of_array) {
//>                         for (size_t i {0} ; i < size; ++i)
//>                             cout<< array[i] << endl;
//>                     }

//>                     int main()
//>                     {
//>                         int arrays[] {1,5,6,4};
//>                         print(arrays, 4);
//>                     }

//?          WE CAN CHANGE ARRAY ELEMENTS
//]                 1. As we are accessing original array in the function, we can
//]                    make changes in array while we are in function

//]                 2. Example : converting all elements of array to zero
//>                     void zero_array(int array[], size_t size_of_array) {
//>                         for (size_t i {0}; i < size_of_array ; ++i) {
//>                             array[i] = 0;
//>                         }
//>                     }

//>                     int main()
//>                     {
//>                         int arrays[] {1,5,6,4};
//                      .>> 1 5 4 4
//>                         zero_array(arrays, 4);
//>                         cout<< "See the transformed array";
//>                         for (auto i : arrays)
//>                             cout<< i;
//>                     }
//                      .>> 0 0 0 0

//?          NOTE!
//]                 1. Avoid changing ELEMENTS of array mistakenly using `const`
//>                         const int arrays[] {1,5,6,4};
//>                         zero_array(arrays, 4);
//                          .>> COMPILER ERROR


        ////////////////////////////////////////////////////////////////////////////////


///     PASS-BY-REFERENCE
//]         1. Used to change ACTUAL parameter from within FUNCTION body

//]         2. To achieve this we need ADDRESS of ACTUAL parameter

//]         3. We can use ampersand (&) to do this
//>                     void ampersand(int &number) {
//>                         (number > 5) ? (number = 10) : (number = number) ; 
//>                     }

//>                     int main()
//>                     {
//>                         int num{7};
//>                         ampersand(num);
//>                         cout<<num;
//>                     }
//                      .>> 10
//                      .>> Instead of passing copy of num, compiler passes
//                      .>> location of `num`


//?          pass-by-value FOR VECTORS
//]                 1. When vectors are passed in function the compiler makes a
//]                    copy of FORMAL PARAMETER (vector passed) and then works on it

//]                 2. If the vector is very large, then this may lead to storage ISSUE

//?          pass-by-reference FOR VECTORS
//]                 1. To avoid creating copy you can use AMPERSAND (&)
//>                          void vector_function(vector<int> &v);   // prototype

//]                 2. To avoid changing vector by MISTAKE add const
//>                          void vector_function(const vector<int> &v);  // prototype
//      ________________________________________________________________________________
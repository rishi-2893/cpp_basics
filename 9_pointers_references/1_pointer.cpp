//      ________________________________________________________________________________
///     POINTER
//]         1. A pointer is an variable whose value is an ADDRESS
//]         2. ADDRESS be of
//]                 a. function
//]                 b. another variable

//]         3. Pointers point to a variable or function

//]         4. Example
//>                     if `x` is an integer, then we can declare a variable
//>                     that POINTS to variable `x`

//]         5. To use the data that the pointer is pointing, you MUST know its
//]            DATA TYPE


        ////////////////////////////////////////////////////////////////////////////////


///     WHY USE POINTERS?
//]         1. You can access LOCAL VARIABLES (defined inside functions) using pointer
//]         2. Used to operate on arrays EFFICIENTLY

//]         3. Can access specific address in memory

//?          DECLARING POINTERS
//]                 1. Syntax
//>                            a. VariableType *PointerName;
//>                            b. VariableType* PointerName;
//]                 3. Example
//>                            char* char_ptr;
//>                            int *int_ptr

//?          INITIALIZING POINTERS
//]                 1. Always initialize pointers
//]                 2. Uninitialized pointers contain GARBAGE data and can point
//]                    ANYWHERE

//]                 3. Initializing to ZERO or nullptr represents address ZERO
//]                    which means pointer is pointing NOWHERE

//]                 4. Syntax
//>                          a. VariableType *PointerName{};  
//>                          b. VariableType *PointerName{nullptr};


        ////////////////////////////////////////////////////////////////////////////////


///     ADDRESS OPERATOR
//]         1. Use to know the address of a variable or function or pointer
//]         2. Example
//>                     void function() {
//>                         cout<< "Hu";
//>                     }

//>                     int main() {
//>                         int num{15};
//>                         cout<< &num;
//>                     }
//                      .>> 0x61fe1c
//      ________________________________________________________________________________
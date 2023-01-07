//      ________________________________________________________________________________
///     OVERFLOW
//]         1. Occurs when result of an operation is TOO LARGE to be represented
//>                     int x = 2147483647; // MAXIMUM value for a signed int
//>                     int y = 100;
//>                     int z = x + y;     // z would be UNDEFINED

//]         2. Avoid getting unexpected by using different int types
//]            when DECLARING variable
//>                     long long int z = 2147483647;


        ////////////////////////////////////////////////////////////////////////////////


///     UNDERFLOW
//]         1. Occurs when result of an operation is TOO SMALL to be represented
//>                     int x = -2147483648; // Minimum value for a signed int
//>                     int y = 100;
//>                     int z = x - y

//]         2. Avoid getting unexpected by using different int types
//]            when DECLARING variable
//>                     short short int z = -2147483648;


        ////////////////////////////////////////////////////////////////////////////////


///     WHY YOU SHOULD USE { }?
//]         1. Gives errors in OVERFLOW or UNDERFLOW condition
//>                     int number (12302303404);            // Outputs RANDOM number
//>                     int number {12302303404};            // Gives OVERFLOW error

//>                     long long int number {12302303404};  // No Error

//]         2. Gives error when INCORRECT input
//>                     int number {12.3};          // ERROR!
//>                     int number (12.3);          // 12
//      ________________________________________________________________________________
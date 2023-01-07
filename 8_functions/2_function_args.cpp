//      ________________________________________________________________________________
///     FUNCTION PARAMETERS
//]         1. When call function, we pass data in that function, these are called
//]            ARGUMENTS
//]         2. In function definition they are called PARAMETERS

//]         3. They much match in: 
//>                     number
//>                     order
//>                     type

//?          Example 1: Passing C-Style string literal in C++ string parameter
//>                     void say_hello(std::string name);
//>                         cout << "Hello";

//>                     say_hello("Rishi")      // C-Style string literal
//                      .>> Compiler expects string OBJECT
//                      .>> But NO ERROR thrown. Why?
//                      .>> Compiler converts to C++ string object

//                      .>> Similar behaviour when passed int to double,
//                          compiler converts int -> double and runs


        ////////////////////////////////////////////////////////////////////////////////


///     PASS-BY-VALUE
//?          OVER VIEW
//]                 1. When you pass argument in function, it creates a COPY of that
//]                 2. COPY of data is sent to the function

//]                 3. So whatever changes function make to parameter, it does not
//]                    affect the ARGUMENT you passed in

//?          FORMAL PARAMETERS
//]                 1. Parameters defined in function HEADER
//?          ACTUAL PARAMETERS (arguments)
//]                 1. Parameters used in calling the function, the arguments


        ////////////////////////////////////////////////////////////////////////////////


///     RETURN STATEMENT
//]         1. Function can have multiple RETURN statements
//]         2. But once RETURN statement is encountered, function is terminated


        ////////////////////////////////////////////////////////////////////////////////


///     DEFAULT ARGUMENT VALUES
//]         1. How can you set DEFAULT values for certain arguments

//]         2. Default values can be in function DEFINITION or PROTOTYPE, but not both
//]                 TIP: Provide DEFAULT values in PROTOTYPE

//]         3. Default values must appear at tail end of PARAMETER list

//]         4. Example
//>                     double total_cost(double cost, double tax = 0.1);  // PROTOTYPE
//                      .>> Default value of TAX set to 0.1

//>                     total_cost(200.0)
//                      .>> tax = 0.1   by default

//>                     total_cost(200.0, 0.2)
//                      .>> tax = 0.2   default value can be changed on calling

//]         5. Example: ERROR WHEN DEFAULTS NOT PROVIDED AT TAIL END
//>                     int my_function(int num1, int num2 = 13, int num3)
//                      .>> This gives error
//                      .>> Shift num2 to the last
//                      .>> All defaults must come at TAIL END
//      ________________________________________________________________________________
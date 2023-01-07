//      ________________________________________________________________________________
///     FUNCTIONS
//]         1. OVERVIEW
//?          a. Name
//]                 Name should be meaningful
//?          b. Parameter
//]                 Variables passed into function
//?          c. Return type
//]                 Type of data that is returned
//?          d. Body
//]                 Statements executed when function is called

//]        2. SYNTAX
//>                     int FunctionName(Parameter) {
//>                         Statement(s);
//>                         return 0;
//>                     }

//]         3. Functions should be defined BEFORE they are called. 
//]            We use function PROTOTYPES to deal with this problem

//]         4. EXAMPLES

//>                     int function(int a, std::string b) {
//>                         Statement(s);
//>                         return 0;
//>                     }
//                      .>> parameters required, integer and a string
//                      .>> Arguments should be passed in SAME SEQUENCE

//>                     void function() {
//>                         Statement(s);
//>                         return ;        //OPTIONAL
//>                     }
//                      .>> No need to input RETURN statement


        ////////////////////////////////////////////////////////////////////////////////


///     FUNCTION PROTOTYPES
//?          Why are these used?
//]                 1. Tells compiler what it needs to do without 
//]                    knowing FULL function definition
//]                 2. Also called FORWARD DECLARATION

//]                 3. Placed at beginning of programme

//]                 4. You can mention NAME before defining

//]                 5. Syntax
//>                            int Function();          // PROTOTYPE

//>                            int Function() {
//>                                 Statement(s);
//>                                 return 0;
//>                            }

//]                 6. Example
//>                            int say_hello()               // PROTOTYPE

//>                            int say_hello() {
//>                                 cout << "Hello World!";
//>                                 return 0;
//>                            }

//      ________________________________________________________________________________
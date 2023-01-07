//      ________________________________________________________________________________
///     DECLARING VARIABLES
//]         1. Variables must be DECLARED before they can be used
//]         2. Syntax for declaring:
//>                     VariableType  VariableName;

        ////////////////////////////////////////////////////////////////////////////////

///     RULES
//]         1. Name of variable MUST start with letter or underscore (_)
//]         2. CANNOT use reserved C++ words
//]         3. Cannot REDECLARE a name in same scope

        ////////////////////////////////////////////////////////////////////////////////

///     STYLES AND BEST PRACTICES
//]         1. Become CONSISTANT
//>                     CamelCase      vs.  Underscores
//>                     MyVariableName vs.  my_variable_name

//]         2. No ABBREVIATION, use meaning full names
//>                     ut   vs.   up_trend

//]         3. Never use variables before INITIALIZING them!

//]         4. Declare variables close to when you use in code
//]            avoid DECLARING all at top

        ////////////////////////////////////////////////////////////////////////////////


///     INITIALIZING VARIABLES
//]         1. Uninitialized
//>                     int age;

//]         2. C-like initialization
//>                     int age = 20;

//]         3. Constructor initialization
//>                     int age (20);

//]         4. C++11 list initialization syntax
//>                     int age {20};       //preferred
//      ________________________________________________________________________________
//      ________________________________________________________________________________
///     TYPES OF LOOPS

//?          for LOOP
//]                 1. Iterates specific number of times

//?          Range-based for LOOP
//]                 1. One iteration for each element in range or collection

//?          while LOOP
//]                 1. Iterate while condition remains true
//]                 2. checks condition at the BEGINNING of every iteration 

//?          do-while LOOP
//]                 1. Iterate while condition remains true
//]                 2. checks condition at the END of every iteration 


        ////////////////////////////////////////////////////////////////////////////////


///     for LOOPS
//]         1. Single Statement Syntax
//>                     for (initialization; condition; increment)
//>                         Statement;

//]         2. Block Statement Syntax
//>                     for (initialization; condition; increment) {
//>                         Statement1;
//>                         Statement2;
//>                             ...
//>                     }

//]         3. for loops expressions as optional, but ; are MANDATORY
//>                     for (;;)
//>                         cout<< "Endless for loop";
//                      .>> No initialization
//                      .>> No condition
//                      .>> No increment

//]         4. Example: Method 1
//>                     int i {0};

//>                     for (i = 1, i <= 5, ++i)
//>                         cout<< i;
//                      .>> 1   2   3   4   5

//]         5. Example: Method 2
//>                     for (int i {0}; i<= 5; ++i)
//>                         cout<< i;
//                      .>> NOTE i now has LOCAL scope
//                      .>> 0   1    2    3    4    5

//?         6. COMMA OPERATOR
//>                     for (int i {1},j {0}; i <= 5; ++i, ++j) {
//>                         cout<< i;
//>                         cout<< j;
//>                     }
//                      .>> 10    21    32    43    54


        ////////////////////////////////////////////////////////////////////////////////


///     RANGE BASED for LOOP
//]         1. Syntax
//>                     for (VarType VarName : sequence)
//>                          Statement;

//]         2. Syntax for Block Statements
//>                     for (VarType VarName : sequence) {
//>                          Statement1;
//>                          Statement2;
//>                             ...
//>                     }

//]         3. Example
//>                     int scores[] {100, 97, 85};

//>                     for (int score : scores)
//>                          cout<< score;
//                      .>> 100    97    85

//]         4. Instead of mentioning VarType, you can set to AUTO
//>                     for (auto score: scores)
//>                          cout<< score;

//]         5. Initializing list in loop
//>                     for (auto score: {100, 97, 85})
//>                          cout<< score;

//]         6. Iterate over strings
//>                     for (auto name: "RISHI")
//>                          cout<< name;
//      ________________________________________________________________________________
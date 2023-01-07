//      ________________________________________________________________________________
///     BLOCK STATEMENTS
//]         1. Syntax:  {    Code between brackets   }
//>                     {
//>                         // Variable Declarations
//>                         Statement1;
//>                         statement2;
//>                         ..........;
//>                     }

//]         2. Blocks also contain Variable Declarations

//?         NOTE
//]         3. Variables are visible only within this block - LOCAL SCOPE


        ////////////////////////////////////////////////////////////////////////////////


///     IF STATEMENT
//]         1. Syntax
//>                     if (BooleanExpression)
//>                         Statement;
//]         2. Example
//>                     if (math_on == true)
//>                         cout << "Start TV, game on!";


//?         3. USING BLOCK STATEMENT
//>                     if (BooleanExpression) 
//>                     {
//>                         Statement1;
//>                         statement2;
//>                         ..........;
//>                     }

//]         4. Example
//>                     if (math_on == true)
//>                     {
//>                         cout << "Start TV, game on!";
//>                         cout << "Enjoy!";
//>                     }       


        ////////////////////////////////////////////////////////////////////////////////


///     IF-ELSE STATEMENT
//]         1. Syntax
//>                     if (BooleanExpression)
//>                         Statement1;
//>                     else
//>                         Statement2;


        ////////////////////////////////////////////////////////////////////////////////


///     IF-ELSE-IF STATEMENT
//]         1. Example
//>                     if (Bool1)
//>                         Statement1;

//>                     else if (Bool2)
//>                         Statement2;

//>                     else if (Bool3)
//>                         Statement3;

//>                     else
//>                         Statement4;


        ////////////////////////////////////////////////////////////////////////////////


///     NESTED IF-ELSE STATEMENT
//]         1. Example
//>                     if (Bool1)
//>                         if (Bool2)
//>                             Statement1;
//>                         else
//>                             Statement2;
//>                     else
//>                         Statement3;

//]         2. Including { }, for controlling program flow
//>                     if (Bool1) 
//>                     {
//>                         if (Bool2)
//>                         {
//>                             Statement1;
//>                         }
//>                         else
//>                             Statement2;
//>                     }
//>                     else
//>                         Statement3;


        ////////////////////////////////////////////////////////////////////////////////


///     CONDITIONAL OPERATOR
//]         1. Syntax
//>                     (ConditionalExpression) ? Expression1 : Expression2

//                      .>> If ConditionalExpression is true 
//                      .>> Value of Expression1 is returned
//                      .>> Else Value of Expression2 is returned
//      ________________________________________________________________________________
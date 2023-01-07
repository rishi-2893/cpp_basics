//      ________________________________________________________________________________
///     INCREMENT DECREMENT OPERATOR
//]         1. Increment operator 
//>                     ++
//]         2. Decrement operator
//>                     --

//]         3. Increments or Decrements OPERAND by 1
//]         4. Can be used with
//>                     Integers
//>                     Floating Point
//>                     Pointers

//]         5. Syntax
//]                 a. Prefix
//>                            ++operand
//]                 b. Postfix
//>                            operand++

//]         6. ALERT: Never use it twice for SAME variable in SAME statement,
//]                   as behaviour is UNDEFINED


        ////////////////////////////////////////////////////////////////////////////////


///     WAYS TO INCREMENT
//]         STARTING CODE FOR ALL TYPES
//>                     int counter {10};
//>                     int result {0};

//?          1. SIMPLE INCREMENT
//>                            counter = counter + 1;
//                             .>> 11

//>                            counter++;
//                             .>> 11

//>                            ++counter;
//                             .>> 11

//?          2. PRE INCREMENT
//>                            result = ++counter          
//                             .>> counter = counter + 1    // ++counter
//                             .>> counter = 11 
//                             .>> result  = 11             // result = counter

//]                 1. First counter is INCREMENTED by 1
//]                 2. Then ASSIGNED to result

//?          2. POST INCREMENT
//>                            result = counter++           
//                             .>> result = counter
//                             .>> result = 10 
//                             .>> counter = counter + 1     // counter++

//]                 1. First counter is ASSIGNED to result
//]                 2. Then counter INCREMENTED by 1
//      ________________________________________________________________________________
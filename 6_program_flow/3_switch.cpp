//      ________________________________________________________________________________
///     SWITCH STATEMENT
//]         1. Syntax
//>                switch (Expression) {
//>                 case Expression1: Statement1; break;
//>                 case Expression2: Statement2; break;
//>                 case Expression3: Statement3; break;

//>                 default: DefaultStatement;
//>                 }
//]         2. You can execute MULTIPLE statements in a case, but create a block
//]            if you want to declare variables

//]         3. Once BREAK is triggered, no further CHECKING is done
//]         4. Example
//>                     int user_int {};
//>                     cin>> user_int;

//>                     switch (user_int) {
//>                         case 1: cout<< "Selected 1";
//>                                 break;
//>                         case 2: cout<< "Selected 2";
//>                                 break;
//>                         case 3:
//>                         case 4: cout<< "3 or 4 Selected";
//>                                 break;
//>                         default: cout<< "None selected"
//>                     }


//                      .>> Code after colon (:) is executed

//                      .>> If a case is matched then all following cases
//                      .>> gets executed UNTIL we reach a BREAK statement
//      ________________________________________________________________________________
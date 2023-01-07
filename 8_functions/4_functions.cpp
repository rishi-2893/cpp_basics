//      ________________________________________________________________________________
///     STATIC LOCAL VARIABLES
//]         1. Variables initialized only ONCE
//]         2. Value of variable does not change even on calling the function again

//]         3. Example: Use `static` keyword
//>                     void foo() {
//>                     static int x = 0;
//>                     x++;
//>                     cout << x << endl;
//>                     }

//>                     int main() {
//>                         foo(); // prints 1
//>                         foo(); // prints 2
//>                         foo(); // prints 3
//>                         return 0;
//>                     }


        ////////////////////////////////////////////////////////////////////////////////


///     HOW DO FUNCTIONS WORK?
//?          What is OVERHEAD?
//]                 1. Overhead refers to resources (CPU time, memory) used in a process
//]                 of execution of a function

//?          What is call STACK?
//]                 1. It is reserved region in memory
//]                 2. Used to store local variables, function parameters and more

//]                 3. When a function is called, the local variables and parameters are
//]                    stored in call stack

//?          What is STACK OVERFLOW?
//]                 1. It occurs when a program makes too many NESTED FUNCTION calls,
//]                    and memory required to store function parameters and local 
//]                    variables is more than CALL STACK  

//?          Steps of overhead in EXECUTING a function
//]                 1. The function call is pushed onto the call stack.
//]                 2. The function's code is executed.
//]                 3. The return value of function is stored in memory.
//]                 4. The function call is popped off the call stack.
//      ________________________________________________________________________________
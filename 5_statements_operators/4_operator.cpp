//      ________________________________________________________________________________
///     TESTING FOR EQUALITY
//]         1. Evaluates to BOOLEAN
//>                     True / False
//>                     1   /  0

//]         2. == & !=
//>                     100 == 200
//                      .>> False / 0

//>                     a == a
//                      .>> True / 1

//]         3. Control BOOL output
//>                     cout << boolalpha;
//>                     cout << (num1 == num2);
//                      .>> True  or  False

//>                     cout << noboolalpha;
//>                     cout << (100 == 100);
//                      .>> 1  or  0


        ////////////////////////////////////////////////////////////////////////////////


///     RELATIONAL OPERATORS
//>                     <
//>                     >
//>                     >=
//>                     <=


        ////////////////////////////////////////////////////////////////////////////////


///     LOGICAL OPERATORS
//?          NEGATION
//]                 It is UNARY operator
//>                            not          // keyword syntax
//>                            !            // operator syntax

//?          LOGICAL AND
//]                 It is BINARY operator
//>                            and
//>                            &&

//?          LOGICAL OR
//]                 It is BINARY operator
//>                            or
//>                            ||

//?          NOTE!
//]                 1. Just as P.E.M.D.A.S
//>                            not      // higher priority
//>                            and      // then comes and
//>                            or       // last is or


        ////////////////////////////////////////////////////////////////////////////////


///     COMPOUND ASSIGNMENT OPERATOR
//>                     lhs += rhs      // lhs = lhs + rhs
//>                     lhs -= rhs
//>                     lhs *= rhs
//>                     lhs /= rhs
//>                     lhs %= rhs

//]         1. Example
//>                     result += 5
//                      .>> result = result + 5
//      ________________________________________________________________________________


// CHECKOUT THIS LINK FOR PRECEDENCE OF OPERATORS
// https://en.cppreference.com/w/cpp/language/operator_precedence

//>+------------+--------------------------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------------------------------------------------------+
///| Precedence | Operator                                                                               | Description                                                                                                                                                                                                                   | Associativity  |
//>+------------+--------------------------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------------------------------------------------------+
// | 1          | ::                                                                                     | Scope Resolution                                                                                                                                                                                                              | Left to Right  |
// | 2          | a++, a--, type(), type{}, a(), a[], ., ->                                              | Suffix/postfix increment, Suffix/postfix decrement, Function cast, Function cast, Function call, Subscript, Member access from an object, Member access from object ptr                                                       | Left to Right  |
// | 3          | ++a, --a, +a, -a, !, ~, (type), *a, &a, sizeof, co_await, new, new[], delete, delete[] | Prefix increment, Prefix decrement, Unary plus, Unary minus, Logical NOT, Bitwise NOT, C style cast, Indirection (dereference), Address-of, Size-of, await-expression, Dynamic memory allocation, Dynamic memory deallocation | Right to Left  |
// | 4          | .*, ->*                                                                                | Member object selector, Member pointer selector                                                                                                                                                                               | Left to Right  |
// | 5          | a * b, a / b, a % b                                                                    | Multiplication, Division, Modulus                                                                                                                                                                                             | Left to Right  |
// | 6          | a + b, a - b                                                                           | Addition, Subtraction                                                                                                                                                                                                         | Left to Right  |
// | 7          | <<, >>                                                                                 | Bitwise left shift, Bitwise right shift                                                                                                                                                                                       | Left to Right  |
// | 8          | <=>                                                                                    | Three-way comparison operator                                                                                                                                                                                                 | Left to Right  |
// | 9          | <, <=, >, >=                                                                           | Less than, Less than or equal to, Greater than, Greater than or equal to                                                                                                                                                      | Left to Right  |
// | 10         | ==, !=                                                                                 | Equal to, Not equal to                                                                                                                                                                                                        | Left to Right  |
//>+------------+--------------------------------------------+-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------+------------------------------------------------------------------------------------------------+

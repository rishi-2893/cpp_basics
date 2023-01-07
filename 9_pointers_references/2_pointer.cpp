//      ________________________________________________________________________________
///     ACCESSING POINTER VARIABLES

//]         1. Code example

                    #include <iostream>
                    using namespace std;
                    int main() {
                    int *p;
                    // Value of pointer p --> Garbage, pointing to anything randomly
                    cout<< "Value of pointer p: " << p <<endl;          // 0x10
                    // Address of pointer p
                    cout<< "Address of pointer p: " << &p << endl;      // 0x61fe18
                    p = nullptr;
                    cout<< "Value of pointer p: " << p <<endl;          // 0
                }


        ////////////////////////////////////////////////////////////////////////////////


///     STORING ADDRESSES IN POINTER
//]         1. Type of a pointer and the type of the variable it is pointing to 
//]            should be the same

//>                     int count {10};
//>                     int *score_ptr {nullptr};
//>                     double length {10.5};

//>                     score_ptr = &count;      // OK
//                      .>> score_ptr stored address of count variable
//>                     score_ptr = &length      // ERROR!
//                      .>> Pointer type is int, variable type is double


        ////////////////////////////////////////////////////////////////////////////////


///     DEREFERENCING A POINTER
//]         1. Dereferencing means accessing the data to which the pointer is pointing
//]         2. Dereferencing operator (*) is used to access data

//>                     int score {100};
//>                     int *score_ptr{&score};

//>                     cout<< score_ptr;
//                      .>> 0x61fe18
//>                     cout << *score_ptr;             // dereferencing operator
//                      .>> 100

//>                     *score_ptr = 200;
//>                     cout << *score_ptr;
//                      .>> 200
//>                     cout << score;
//                      .>> 200
//      ________________________________________________________________________________
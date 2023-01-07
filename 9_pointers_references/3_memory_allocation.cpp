//      ________________________________________________________________________________
///     MEMORY ALLOCATION

//?          RUN TIME
//]                 1. It refers to period of time during which program is executing
//?          HEAP
//]                 1. Heap is a region where dynamically alloted memory can be stored
//?          DYNAMIC MEMORY ALLOCATION
//]                 1. Process of requesting memory from the heap at run-time


        ////////////////////////////////////////////////////////////////////////////////


///     ALLOCATING MEMORY DYNAMICALLY
//]         1. You use `new` to allocate storage
//>                     int *score_ptr {nullptr};

//>                     score_ptr = new int     // allocating storage
//                      .>> 0x61fe39
//>                     *score_ptr          // contains GARBAGE
//                      .>> 2398723

//>                     *score_ptr =  95
//                      .>> 95
//?          DEALLOCATING STORAGE
//]                 1. Use `delete`
//>                     delete score_ptr;       //frees allocated storage

//?          ALLOCATING ARRAYS
//]                 1. You have to use `new[]`
//>                     array_ptr = new int[ArraySize]; // allocating array to heap
//?          DEALLOCATING ARRAYS
//]                 1. You have to use `delete[]`
//>                     delete[] array_ptr;
//      ________________________________________________________________________________
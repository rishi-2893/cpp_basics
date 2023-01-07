//      ________________________________________________________________________________
///     ACCESSING VECTORS

//?          METHOD 1
//]                 1. Syntax
//>                            VectorName[ElementIndex]
//                             .>> Not Bounds Checked

//?          METHOD 2
//]                 1. Syntax
//>                            VectorName.at(ElementIndex)
//                             .>> Bounds Checked


        ////////////////////////////////////////////////////////////////////////////////


///     ADDING ELEMENTS
//]         1. Syntax
//>                     VectorName.push_back(Element);

//]         2. Example: Consider my_vector
//>                     my_vector
//                      .>> 4, 8, 7

//>                     my_vector.push_back(9)
//                      .>> 4, 8, 7, 9


        ////////////////////////////////////////////////////////////////////////////////


///     SIZE OF VECTOR
//]         1. Use .size() method
//>                     VectorName.size()


        ////////////////////////////////////////////////////////////////////////////////


///     DECLARING MULTIDIMENSIONAL ARRAY
//]         1. Syntax for 2D Vector
//>                     vector <vector <int>> VectorName


        ////////////////////////////////////////////////////////////////////////////////


///     INITIALIZING MULTIDIMENSIONAL ARRAY
//]         1. Initializing 2D vector
//>                     vector <vector <int>> my_vector
//>                             {
//>                               {1, 2, 3, 1},
//>                               {3, 5, 8, 0},
//>                               {8, 5, 1, 2}
//>                             }

//                      .>>     1   2   3   1
//                      .>>     1   2   3   1
//                      .>>     3   5   8   0
//                      .>>     8   5   1   2
//      ________________________________________________________________________________
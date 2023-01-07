//      ________________________________________________________________________________
///     NAMESPACES
//]         1. CONTAINER that holds set of identifiers (names)
//]         2. Used to avoid NAMING CONFLICT
//>                     Library_a has function `sum()`
//>                     Library_b also has function `sum()`
//>                     We imported both

        ////////////////////////////////////////////////////////////////////////////////

///     SCOPE RESOLUTION OPERATOR ( :: )
//]         1. Used to SPECIFY the namespace
//]         2. When we want `cout` of STANDARD namespace
//>                     std::cout

        ////////////////////////////////////////////////////////////////////////////////

///     IMPORTANT EXAMPLES OF ABOVE
//]         No Namespace
//>                 #include <iostream>
//>                 int main(){
//>                     cout << "ERROR";
//>                 }


//]         Use ENTIRE std namespace
//>                 int main(){
//>                     using namespace std;   
//>                     cout<< "NO ERROR";
//>                 }


//]         Using what YOU NEED
//>                 int main() {
//>                     using std::cout;   
//>                     using std::endl;
//>                     cout<< "" <<endl;
//>                 }
//      ________________________________________________________________________________

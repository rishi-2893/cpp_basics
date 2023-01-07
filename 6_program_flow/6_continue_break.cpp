//      ________________________________________________________________________________
///     CONTINUE
//]         1. No further statements in body are executed
//]         2. Control IMMEDIATELY goes to beginning of loop for NEXT iteration


        ////////////////////////////////////////////////////////////////////////////////


///     BREAK
//]         1. No further statements in body are executed
//]         2. Loop is TERMINATED
//      ________________________________________________________________________________

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector <int> counts {1,2,-1,45,-1,5,-99,1,-1};


//          ********************************
//          ********************************
//>         -1   in data is CONSIDERED NOISE
//>         -99  in date is used to END LOOP
//          ********************************
//          ********************************



    for (auto count : counts) {
        if (count == -99)
            break;

        else if (count == -1)
            continue;

        else
            cout<< count
                << endl;
    }

}

//>     *-------------------- OUTPUT--------------------*
//>     |                                               |
//      |        .>>     1      2       45      5       |
//>     |                                               |
//>     *-------------------- OUTPUT--------------------*
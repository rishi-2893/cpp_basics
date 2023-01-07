/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should
be displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/


#include <iostream>
#include <vector>
using namespace std;

int main() {

    // MAKING VECTOR
    vector <int> int_vector {};
    while (true) {
        // DISPLAYING OPTIONS
        cout<< "\n\nSelect one of following options:\n"
            << "=================================\n"
            << "P - Print numbers\n"
            << "A - Add a number\n"
            << "M - Display mean of the numbers\n"
            << "S - Display the smallest number\n"
            << "L - Display the largest number\n"
            << "Q - Quit\n"
            << "=================================\n\n";

        // USER INPUT
        char user_input {};
        cin>> user_input;


        // CHECKING FOR INPUT
        
        // CASE P
        if ((user_input == 'P') || (user_input == 'p')) {

            if (int_vector.size() == 0)
                cout<< "List is empty";

            else
                cout<< "[ ";
                for (auto i : int_vector)
                    cout<< i
                        << " ";
                cout<< "]";
                
        }
        // CASE A
        else if ((user_input == 'A') || (user_input == 'a')) {
            cout<<"Which INTEGER number would you like to add?\n";
            int number_to_add{};
            cin>>number_to_add;

            int_vector.push_back(number_to_add);
            cout<< "Hurray! " <<  number_to_add << " is added!";

        }
        // CASE M
        else if ((user_input == 'M') || (user_input == 'm')) {
            if (int_vector.size() == 0)
                cout<< "Unable to calculate the mean - no data";
            else {
                double running_sum {0.0};
                double average {0.0};
                for (int i{0}; i < int_vector.size(); ++i)
                    running_sum += int_vector[i];
                
                average = running_sum / int_vector.size();
                cout<< "Mean of this list is: " << average;
            }

        }

        // CASE S
        else if ((user_input == 'S') || (user_input == 's')) {
            if (int_vector.size() == 0)
                cout<< "Unable to find smallest value - no data";
            else {
                int min {999999};
                for (auto  i : int_vector)
                    if (i < min)
                        min = i;
                cout<< "Smallest value in the list is: "
                    << min;
            }
        }
        // CASE L
        else if ((user_input == 'L') || (user_input == 'l')) {
            if (int_vector.size() == 0)
                cout<< "Unable to find largest value - no data";
            else {
                int max {-999999};
                for (auto  i : int_vector)
                    if (i > max)
                        max = i;
                cout<< "Largest value in the list is: "
                    << max;
            }
        }
        // CASE Q
        else if ((user_input == 'Q') || (user_input == 'q')) {
            cout<< "Goodbye";
            break;
        }
        // CASE OTHER
        else
            cout<< "Unknown selection, please try again\n";
    }
}
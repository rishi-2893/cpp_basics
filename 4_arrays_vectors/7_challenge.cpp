/*
Write a C++ program as follows: 

Declare 2 empty vectors of integers named 
vector1 and vector 2, respectively. 

Add 10 and 20 to vector1 dynamically using push_back 
Display the elements in vector1 using the at() method as well as its size using the size() method 

Add 100 and 200 to vector2 dynamically using push_back 
Display the elements in vector2 using the at() method as well as its size using the size() method I 

Declare an empty 2D vector called vector_2d 
Remember, that a 2D vector is a vector of vector<int> 

Add vector1 to vector_2d dynamically using push_back 
Add vector2 to vector_2d dynamically using push_back 

Display the elements in vector_2d using the at() method 

Change vector1.at(0) to 1000 

Display the elements in vector_2d again using the at() method 
Display the elements in vector1 

What did you expect? Did you get what you expected? What do you think happened!
*/



#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // Declaring empty vectors
    vector <int> vector1;
    vector <int> vector2;


    // Using PUSH_BACK vector1
    vector1.push_back(10);
    vector1.push_back(20);

    // Displaying elements in vector1
    cout<< "1st Element of vector1: " << vector1.at(0) 
        << endl
        << "2nd Element of vector1: " << vector1.at(1)
        << endl
        << "Size of vector1: " << vector1.size()
        << endl << endl << endl;



    // Using PUSH_BACK vector2
    vector2.push_back(100);
    vector2.push_back(200);

    // Displaying elements in vector2
    cout<< "1st Element of vector2: " << vector2.at(0) 
        << endl
        << "2nd Element of vector2: " << vector2.at(1)
        << endl
        << "Size of vector2: " << vector2.size()
        << endl << endl << endl;



    // Declaring 2d Empty vector
    vector <vector <int>> vector_2d;
    
    
    // Using pushback
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Displaying elements of vector_2d
    cout
        << vector_2d.at(0).at(0)
        << "   "
        << vector_2d.at(0).at(1)
        << endl
        << vector_2d.at(1).at(0)
        << "   "
        << vector_2d.at(1).at(1)
        << endl << endl << endl;

    // Changing element
    vector1.at(0) = 1000;

    // Displaying elements in vector1
    cout<< "NEW Element of vector1: " << vector1.at(0) 
        << endl
        << "2nd Element of vector1: " << vector1.at(1)
        << endl
        << "Size of vector1: " << vector1.size()
        << endl << endl << endl;

         
    // Displaying elements of vector_2d
    cout
        << vector_2d.at(0).at(0)
        << "   "
        << vector_2d.at(0).at(1)
        << endl
        << vector_2d.at(1).at(0)
        << "   "
        << vector_2d.at(1).at(1)
        << endl;    
    
    return 0;
}
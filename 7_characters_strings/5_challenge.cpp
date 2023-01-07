/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decrypted the encrypted message back to the original message.

You may use the 2 strings below for  your substitution.
For example, to encrypt you can replace the character at position n in alphabet 
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, punctuation, whitespace and so
forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    // CORE
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr$"};
    
    // INPUT OUTPUT 
    string user_message;

    cout<< "Please enter the message you want to encrypt:\n";
    getline(cin, user_message);

    // ENCRYPTING

    // GRABBING index_positions and storing in vector
    vector <int> alphabet_index{};
    int index_position{};
    for (auto letter : user_message) {
        index_position = alphabet.find(letter);
        alphabet_index.push_back(index_position);
    }

    // Using loop on vector for getting decrypted letters
    cout<< "Your encrypted message is...\n";
    for (auto letter_index : alphabet_index)
            cout<< key[letter_index];

    // DECRYPTING MESSAGE
    cout<< "\nDo you want to decrypt a message? (Y/N)";
    char decrypt_question {};

    cin>> decrypt_question;
    cin.ignore();

    if (decrypt_question == 'Y') {

        string encrypted_message;
        cout<< "Please input the encrypted message";
        getline(cin, encrypted_message);

        vector <int> key_index{};
        int key_index_position{};
        for (auto letter : encrypted_message) {
            key_index_position = key.find(letter);
            key_index.push_back(key_index_position);
        }

        cout<< "Your decrypted message is...\n";
        for (auto letter_index : key_index)
                cout<< alphabet[letter_index];
    }
    return 0;
}


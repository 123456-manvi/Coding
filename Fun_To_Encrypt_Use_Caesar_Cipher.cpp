#include<iostream>
using namespace std;

string encryptedText="";

for(char ch : plaintext){
if(isupper(ch)) {
// Shift uppercase letters
            encryptedText += char('A' + (ch - 'A' + key) % 26);
        } 
        else if (islower(ch)) {
            // Shift lowercase letters
            encryptedText += char('a' + (ch - 'a' + key) % 26);
        } 
        else if (isdigit(ch)) {
            // Shift digits (0-9)
            encryptedText += char('0' + (ch - '0' + key) % 10);
        } 
        else {
            // Keep special characters unchanged
            encryptedText += ch;
        }
    }

    return encryptedText;
}

int main() {
    string plaintext;
    int key;

    cout << "Enter your Plaintext: ";
    getline(cin, plaintext); // Read full line including spaces

    cout << "Enter the Key: ";
    cin >> key;

    cout << "The encrypted Text is: " << caesarCipher(plaintext, key) << endl;

    return 0;
}

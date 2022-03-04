#include <iostream>
#include <conio.h>
using namespace std;

void input(){
    // Holds the password string.
    string numAsString = "";
    // Obtains a single character from the user.
    char ch = getch();
    // Keep requesting characters until the user presses
    // Enter.
    while (ch != '\r') { // \r is the enter key
        // Display an asterisk instead of the input character.
        cout << '*';
        // Add the character to the password string.
        numAsString += ch;
        // Get the next character from the user.
        ch = getch();
    }
    cout << endl;
    cout << numAsString << endl;
}

int main() {
    input();
}
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char message[200];

    int upper = 0, lower = 0, spaces = 0;

    cout << "Enter a sentence in the message inspector : ";
    cin.getline(message, 200);

    char *p = message;

    while (*p != '\0') {
        if (isupper(*p))
            upper++;
        else if (islower(*p))
            lower++;
        else if (*p == ' ')
            spaces++;

        p++;
    }

    cout << "Uppercase letters in the nessage inspector: " << upper << endl;
    cout << "Lowercase letters in the message inspector: " << lower << endl;
    cout << "Spaces required in the message inspector : " << spaces << endl;

    return 0;
}
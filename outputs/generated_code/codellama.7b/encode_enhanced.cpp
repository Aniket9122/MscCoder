#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string encodedMessage = "";
    for (int i = 0; i < message.length(); i++) {
        char currentChar = message[i];
        if (isalpha(currentChar)) {
            if (isupper(currentChar)) {
                encodedMessage += tolower(currentChar);
            } else {
                encodedMessage += toupper(currentChar);
            }
        } else {
            encodedMessage += currentChar;
        }
    }

    for (int i = 0; i < encodedMessage.length(); i++) {
        char currentChar = encodedMessage[i];
        if (isalpha(currentChar)) {
            if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
                int indexToReplace = i + 2;
                if (indexToReplace < encodedMessage.length()) {
                    char replaceChar = encodedMessage[indexToReplace];
                    if (isalpha(replaceChar)) {
                        encodedMessage[i] = replaceChar;
                    }
                }
            }
        }
    }

    return encodedMessage;
}


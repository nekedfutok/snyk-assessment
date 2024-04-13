#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// returns the length of the string not including spaces
int actualLength(string str) {
    int l = 0;
    for(int i = 0; i < str.length(); i++) {
        l += (str[i] != ' ');
    }
    return l;
}

// returns the encrypted string
string getEncryptedString(string str) {
    string encryptedString;
    int cols = ceil(sqrt(actualLength(str)));
    int currentCol = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == ' ') continue;
        encryptedString += str[i];
        if(++currentCol == cols) {
            encryptedString += '\n';
            currentCol = 0;
        }
    }
    return encryptedString;
}

int main() {
    cout << "s = ";
    string str;
    getline(cin, str);
    cout << getEncryptedString(str);
    return 0;
}
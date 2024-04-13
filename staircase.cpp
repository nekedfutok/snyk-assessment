#include <iostream>

using namespace std;

// prints the character n times
void printChar(char c, int n = 1) {
    for(int i = 0; i < n; i++) {
        cout << c;
    }
}

// prints a staircase of size n
void printStaircase(int n) {
    for(int i = 1; i <= n; i++) {
        printChar(' ', n - i);
        printChar('#', i);
        cout << '\n';
    }
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    printStaircase(n);
    return 0;
}
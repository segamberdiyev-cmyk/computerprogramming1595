#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    cout << char(c + 7);   // H
    cout << char(c + 4);   // E
    cout << char(c + 11);  // L
    cout << char(c + 11);  // L
    cout << char(c + 14);  // O
    cout << char(c - 32);  // !
    cout << endl;
    return 0;
}

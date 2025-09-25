#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum = a + b;
    int product = a * b;

    cout << ((sum > 30 && product > 30) ? 1 : 0) << " ";
    cout << (((a + (b - 10)) > 30 || (a * (b - 10)) > 30) ? 1 : 0) << " ";
    cout << ((a > 30 || b > 30) ? 1 : 0) << endl;

    return 0;
}

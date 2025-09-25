#include <iostream>
using namespace std;

int main() {
    float x = 17, y = 1;
    float z = (x + (++x)) / (3 * 2 * y);
    cout << z << endl;
    return 0;
}

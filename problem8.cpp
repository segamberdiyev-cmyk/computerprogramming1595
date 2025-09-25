#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d;
    cin >> d;
    double r = d / 2.0;
    double area = 4 * 3.14159 * r * r;
    cout << fixed << setprecision(3);
    cout << "Area: " << area << endl;
    return 0;
}

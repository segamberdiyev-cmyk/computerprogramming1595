#include <iostream>
using namespace std;

int main() {
    int students = 353, groups = 11;
    int first = students / groups;
    int last = students % groups;
    cout << "In first group: " << first << " In last group: " << last << endl;
    return 0;
}

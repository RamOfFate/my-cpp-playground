#include <iostream>
using namespace std;

int main() {
    int age = 21;
    int minAge = 18;
    bool isAllowed = age >= minAge;
    cout << boolalpha;
    cout << isAllowed << endl;
    return 0;
}
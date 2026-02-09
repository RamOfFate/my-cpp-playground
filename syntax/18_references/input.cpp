#include <iostream>
using namespace std;

int main(){
    string food = "Pizza";
    string &meal = food;

    meal = "Burger";

    cout << food << endl;
    cout << &food << endl;
    cout << &meal << endl;
    return 0;
}
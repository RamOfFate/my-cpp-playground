#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars.at(1) << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cars.push_front("Tesla");
    cars.push_back("VW");
    cout << "___" << endl;

    for (string car: cars){
        cout << car << endl;
    }
    
    return 0;
}
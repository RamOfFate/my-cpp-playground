#include <iostream>
using namespace std;

class Dog{
    public:
        void bark();
};

void Dog::bark(){
    cout << "Woof!" << endl;
}

int main(){
    Dog spike;
    spike.bark();
    return 0;
}
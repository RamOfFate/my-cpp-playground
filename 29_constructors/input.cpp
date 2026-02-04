#include <iostream>
using namespace std;

class MenuItem{
    string name;
    double price;

    public:
        MenuItem(){
            name = "Undefined";
            price = 0;
        }
        MenuItem(string n){
            name = n;
            price = 0;
        }
        MenuItem(string n, double p){
            name = n;
            price = p;
        }

        void print(){
            cout << "Name: " << name << ", Price: " << price << endl;
        }
};

int main(){
    MenuItem pizza;
    pizza.print();
    MenuItem burger("Burger");
    burger.print();
    MenuItem salad("Salad", 9.2);
    salad.print();
    return 0;
}
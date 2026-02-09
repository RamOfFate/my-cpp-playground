#include <iostream>
using namespace std;

int sum(int num1, int num2){
    return num1 + num2;
}

double sum(double num1, double num2){
    return num1 + num2;
}

int main(){
    int a = 1, b = 1;
    double c = 3, d = 2;

    cout << sum(a, b) << endl;
    cout << sum(c, d) << endl;
    return 0;
}
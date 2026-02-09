#include <iostream>
#include <iomanip>
using namespace std;

void swapNumbers(int &num1, int &num2){
    num1 += num2;
    num2 = num1 - num2;
    num1 -= num2;
    cout << "wololo" << endl;
}


int main(){
    int a = 5;
    int b = 1;
    cout << a << setw(15) << b << endl;
    swapNumbers(a, b);
    cout << a << setw(15) << b << endl;
    return 0;
}
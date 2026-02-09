#include<iostream>
using namespace std;

int factorial(int k){
    if (k <= 1){
        return 1;
    }
    else {
        return factorial(k - 1) * k;
    }
}

int main(){
    cout << factorial(5) << endl;
    return 0;
}
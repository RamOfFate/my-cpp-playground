#include <iostream>
using namespace std;

template <typename T>

T add(T a, T b){
    return a + b;
}

int main(){
    cout << add<int>(3, 5) << endl;
    cout << add<double>(4.0, 2.2) << endl;

    return 0;
}
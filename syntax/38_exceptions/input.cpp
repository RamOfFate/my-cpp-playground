#include <iostream>
using namespace std;

int main(){
    try {
        int age = 15;
        if (age >= 18){
            cout << "go on" << endl;
        }
        else{throw age;}
    }
    catch(int num) {
        cout << "access denied kiddo" << "\nage is :" << num << endl;
    }
    return 0;
}
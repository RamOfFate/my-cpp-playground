#include <iostream>
#include <functional>
using namespace std;


// Use a regular function when:

//     You plan to reuse the function in multiple places
//     You want to give the function a clear, meaningful name
//     The logic is long or complex

// Use a lambda function when:

//     You only need the function once
//     The code is short and simple
//     You want to pass a quick function into another function


void countula(function<void()> msg){
    for(int i = 1; i < 5; i++){
        cout << i << " ";
        msg();
    }
}

int main(){
    auto message = [](){
        cout << "ah ah ah" << endl;
    };

    countula(message);
    return 0;
}
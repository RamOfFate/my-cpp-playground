#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> lifo;

    for(int i= 0; i <= 5; i++){
        lifo.push("item " + to_string(i));
    }

    while(!lifo.empty()){
        cout << lifo.top() << endl;
        lifo.pop();
    }

    return 0;
}
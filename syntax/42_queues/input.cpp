#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> food;
    food.push("pizza");
    food.push("burger");
    cout << food.front() << endl;
    return 0;
}
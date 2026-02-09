#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> pairs = {2, 4, 6};

    pairs.push_front(0);
    pairs.push_back(8);

    for (int pair: pairs){
        cout << pair << endl;
    }

    return 0;
}
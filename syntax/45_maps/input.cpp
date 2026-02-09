#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int, greater<string>> people = {{"Jhon", 45 },{"James", 14}};
    people["James"] = 24;
    people.insert({"James", 5});

    for (pair<string, int> person: people){
        cout << person.first << " is " << person.second << endl;
    }
    return 0;
}
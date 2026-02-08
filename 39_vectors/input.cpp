#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> youtubers = {"Markiplier", "Pewdiepie", "Kubz Scouts"};

    youtubers.push_back("Neebs Gaming");

    while(!youtubers.empty()){
        cout << youtubers.size() << "- " << youtubers.back() << endl;
        youtubers.pop_back();
    }

}
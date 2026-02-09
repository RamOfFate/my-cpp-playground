#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> blocks;
    blocks.insert("stone");
    blocks.insert("quartz");
    blocks.insert("dirt");
    blocks.insert("diorite");

    blocks.erase("diorite");

    for (string block: blocks){
        cout << block << endl;
    }

    
    blocks.clear();
    cout << blocks.size() << endl;
    return 0;
}
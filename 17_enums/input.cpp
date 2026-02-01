#include <iostream>
using namespace std;

enum status {
    SUCCESS = 0,
    WARNING,
    DANGER
};

int main(){
    enum status response = WARNING;

    cout << response << endl;

    return 0;
}
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t time_stamp;
    time(&time_stamp);

    cout << ctime(&time_stamp);
    return 0;
}
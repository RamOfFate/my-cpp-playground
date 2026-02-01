#include <iostream>
using namespace std;

int main(){
    int choice = 0;

    switch (choice){
        case 1:
            cout << "You ordered coffee" << endl;
            break;
        case 2:
            cout << "You ordered tea" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
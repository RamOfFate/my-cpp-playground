#include <iostream>
using namespace std;

int main(){
    int num_guests;

    cout << "How many guests will we be having tonight? ";
    cin >> num_guests;

    cout << (num_guests <= 0 ? "I'm afraid that won't do" : "Alright since we're having " + to_string(num_guests) + " can you give me their names") << endl;

    if (num_guests <= 0) return 1;

    string* guests = new string[num_guests];

    cin.ignore();

    for(int i = 0; i < num_guests; i++){
        cout << i + 1 << "> ";
        getline(cin, guests[i]);
    }

    cout << "\nThese are the guests you just mentioned:" << endl;

    for(int i = 0; i < num_guests; i++){
        cout << i + 1 << "- " << guests[i] << endl;
    }   

    delete[] guests;
    return 0;
}
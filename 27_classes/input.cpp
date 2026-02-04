#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int year;
};

int main(){
    Book communist_manefesto;
    Book mein_kamf;

    communist_manefesto.title = "The communist manefesto";
    communist_manefesto.author = "Stalin";
    communist_manefesto.year = 1847;

    mein_kamf.title = "Mein Kampf";
    mein_kamf.author = "Adolf";
    mein_kamf.year = 1890;

    cout << communist_manefesto.title << ", " << communist_manefesto.author << ", " << communist_manefesto.year << endl;
    cout << mein_kamf.title << ", " << mein_kamf.author << ", " << mein_kamf.year << endl;

    return 0;
}
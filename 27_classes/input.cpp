#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int year;
};

int main(){
    Book book1;
    Book book2;

    book1.title = "Harry Potter and the Philosopher's Stone";
    book1.author = "J.K. Rowling";
    book1.year = 1997;

    book2.title = "The Great Gatsby";
    book2.author = "F. Scott Fitzgerald";
    book2.year = 1925;

    cout << book1.title << ", " << book1.author << ", " << book1.year << endl;
    cout << book2.title << ", " << book2.author << ", " << book2.year << endl;

    return 0;
}
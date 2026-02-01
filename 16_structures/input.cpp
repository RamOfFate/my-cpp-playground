#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    char grade;
};

student sheep, ram;

int main(){
    sheep.name = "Faith";
    sheep.age = 26;
    sheep.grade = 'C';

    ram.name = "Fate";
    ram.age = 26;
    ram.grade = 'A';

    cout << "student 1:\nname: " << sheep.name << "\nage: " << sheep.age << "\ngrade: " << sheep.grade << endl;
    cout << "\nstudent 2:\nname: " << ram.name << "\nage: " << ram.age << "\ngrade: " << ram.grade << endl;

    return 0;
}
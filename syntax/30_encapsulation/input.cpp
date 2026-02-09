#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        string name;
    public:
        void setId(int i) {
            id = i;
        }
        int getId() {
            return id;
        }
        void setName(string n) {
            name = n;
        }
        string getName() {
            return name;
        }
};

int main() {
    Employee emp;

    emp.setId(rand());
    emp.setName("Jeff");

    cout << emp.getId() << endl;
    cout << emp.getName() << endl;

}
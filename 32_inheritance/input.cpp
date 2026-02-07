#include <iostream>
using namespace std;

class Employee{
    protected:
        int salary;
};

class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s){
            salary = s;
        }
        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer Jared;
    Jared.setSalary(4000);
    Jared.bonus = 150;
    cout << Jared.getSalary() << endl;
    cout << Jared.bonus << endl;
    return 0;
}
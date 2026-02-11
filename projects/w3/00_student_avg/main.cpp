#include <iostream>
#include <map>
#include <limits>
using namespace std;

class Student {
    string name;
    map<string, double> grades;

    public:
        Student(){
            grades = {{"Math", 5}, {"Physics", 10}, {"Science", 14}};
        };

        void setName(string n){
            name = n;
        }

        string getName(){
            return name;
        }

        double calculateAvg(){
            if(grades.empty()) return 0;
            double avg = 0;
            for(const auto& grade: grades){
                avg += grade.second;
            }
            avg /= grades.size();
            return avg;
        }

        void addGrade(pair<string, double> g){
            grades[g.first] = g.second;
        }

        void showGrades(){
            for(pair<string, double> grade: grades){
                cout << grade.first << ": " << grade.second << endl;
            }
        }
};

int main(){
    Student james;
    string name;
    pair<string,double> grade;

    cout <<"Name: ";
    getline(cin, name);

    james.setName(name);

    cout << "Subject: ";
    getline(cin, grade.first);
    
    cout << "Grade: ";
    cin >> grade.second;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n -- Results for" << james.getName() <<  " -- \n";

    james.addGrade(grade);

    james.showGrades();

    cout << "\nAverage : " << james.calculateAvg() << endl;

    return 0;
}
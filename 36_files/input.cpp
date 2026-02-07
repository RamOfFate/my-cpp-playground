#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string code;

    ifstream input_file("input.cpp");
    
    ofstream output_file("code.txt");

    cout << "The code that's outputting this:\n\n" << endl;

    while(getline (input_file, code)){
        output_file << code << endl;
        cout << code << endl;
    }

    

    output_file.close();
    return 0;
}
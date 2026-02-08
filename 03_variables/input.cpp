#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int v_int;             // Whole numbers (e.g., -5, 42). Usually 4 bytes.
    double v_double;       // High-precision decimals (e.g., 3.14159). The "go-to" for math.
    char v_char;           // A single ASCII character or symbol (e.g., 'A', '#', '@').
    string v_string;       // A sequence of text (e.g., "Hello world").
    bool v_bool;           // Logical state: either 'true' (1) or 'false' (0).

    short v_short;         // Small whole numbers. 
    long v_long;           // Larger whole numbers.
    long long v_long_long; // Massive whole numbers.
    unsigned v_unsigned;   // Positive whole numbers only (zero and up). Doubles the positive range.

    auto v_auto = 5;       // Type Inference: The compiler sees '5' and decides this is an int.

    int x = 5, y = 2, z = 1;
    char a, b, c = 'L';

    const int minutes_per_hour = 60;


    cout << "____Sizes in bytes____" << endl;
    cout << left << setw(15) << "int:"  << sizeof(int) << " bytes" << endl;
    cout << left << setw(15) << "double:"  << sizeof(double) << " bytes" << endl;
    cout << left << setw(15) << "char:"  << sizeof(char) << " bytes" << endl;
    cout << left << setw(15) << "string:"  << sizeof(string) << " bytes" << endl;
    cout << left << setw(15) << "bool:"  << sizeof(bool) << " bytes" << endl;
    cout << left << setw(15) << "short:"  << sizeof(short) << " bytes" << endl;
    cout << left << setw(15) << "long:"  << sizeof(long) << " bytes" << endl;
    cout << left << setw(15) << "long long:"  << sizeof(long long) << " bytes" << endl;
    cout << left << setw(15) << "unsigned:"  << sizeof(unsigned) << " bytes" << endl;
}
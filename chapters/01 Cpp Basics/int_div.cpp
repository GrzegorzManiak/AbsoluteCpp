#include <iostream>
using namespace std;

int main() {
    int a(5),
        b(1);

    cout << a / b << " - 1 \n";
    cout << b / a << "\n";

    cout << a % b << " - 2 \n";
    cout << b % a << "\n";

    double c = b / a;
    cout << c << " - 3 \n";
    
    c = (double)b / a; // -- this type of cast is not reccomened
    // static_cast<e>(v); is the new syntax
    cout << c << " - 4 \n";

    c = b / (double)a;
    cout << c << " - 5 \n";

    // -- Aslong as one side of the division is a double,
    //    it will divide correctly.

    return 0;
}
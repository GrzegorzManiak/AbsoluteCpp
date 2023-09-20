#include <iostream>
using namespace std;

int main() {
    // -- This is a declared constant
    // Constant - Prevents the variable being changed
    // Declared - As its assigned memory, initialized
    const double RATE = 6.9; // -- Or const double RATE(6.9);

    // -- THis is not INITIALIZED as we have only DEFINED
    //    aka no assigned memory
    double deposit; 

    cout << "Deposit in $";
    cin >> deposit;

    // -- Defined
    double new_ballance;
    // -- Declared, initialized, assigned memory
    new_ballance = deposit + deposit * (RATE / 100);


    cout << "In one year that deposit will grow to $" 
        << new_ballance
        << " An ammount worth waiting for \n";

    return 0;
}
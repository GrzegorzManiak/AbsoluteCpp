#include <iostream>
using namespace std;

int main() {
    cout << "Hello " << "world";
    // -- Evalualted as
    // cout << "hello";
    // cout << "world";

    // -- New line 1
    cout << "hello \n world";

    // -- New line 2
    cout << "hello" << endl << "world \n";

    cout.setf(ios_base::fixed); // -- Sets the number outputs to a fizxed lenght defined by cout.precision
    cout.setf(ios_base::showpoint); // this makes it so when you print '3.0' it prints at '3.0'. not '3'
    cout.precision(6);

    return 0;
}
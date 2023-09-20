#include <iostream>
using namespace std;

int main() {
    
    int a(1), b(2);
    double c(3.5);
    static int D = 5.3;

    // -- Old 1
    cout << (double)a / c;

    // -- Old 2 
    cout << double(b) / c;


    // -- New
    cout << static_cast<double>(a) / c;
    
    // -- For static conversions (Need to look up more about why this dosent work)
    cout << const_cast<int>(D); // -- THis will cut off everything after the decimal
    
    return 0;
}
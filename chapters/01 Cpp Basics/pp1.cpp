#include <iostream>
using namespace std;

int main() {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // -- One gallon is 3785.41
    const double GALLON_IN_ML(3785.41);

    double milk_package;
    cout << "Volume of a package of milk? ";
    cin >> milk_package;


    double package_in_gallons = milk_package / GALLON_IN_ML;
    cout << "Volume in gallonss " << package_in_gallons << endl;

    double packets_needed = GALLON_IN_ML / milk_package;
    cout << "Packets needed " << packets_needed << endl;

    return 0;
}
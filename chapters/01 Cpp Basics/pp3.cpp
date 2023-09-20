#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    const double SALES_INCREASE(0.13),
                PROFIT_INCREASE(0.27);

    int profits_in_millions;
    double last_years_sales;

    cout << "Please enter last years profits in Millions, and than the total last years sales " << endl;
    cin >> profits_in_millions >> last_years_sales;

    double new_profits = static_cast<double>(profits_in_millions) + (static_cast<double>(profits_in_millions) * PROFIT_INCREASE),
        new_sales = last_years_sales + (last_years_sales * SALES_INCREASE);

    cout << "Your new sales would be: " << new_sales << " Million, And your new profits would be: " << new_profits << endl;
    return 0;
}
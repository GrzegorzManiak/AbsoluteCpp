#include <iostream>
#include <string>
using namespace std;

#include "headers.h"

int main() {
    int numbers[4];
    int coppied_numbers[5];


    // -- Assign the numbers
    for(int i = 0; i < 4; i++) {
        numbers[i] = i * 2;
    }

    move_array(numbers, coppied_numbers);

    cout << "Coppied Array: "; 
    for(int i = 0; i < 4; i++) {
        cout << coppied_numbers[i] << " ";
    }

    cout << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

void move_array(int[4], int(&)[5]);

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

    return 0;
}


void move_array(int arr1[4], int (&arr2)[5]) {

    // -- Copy them over
    for(int i = 0; i < 4; i++) {
        arr2[i] = arr1[i];
    }    
}
#include <iostream>
#include <string>
using namespace std;

void move_array(int arr1[4], int (&arr2)[5]) {

    // -- Copy them over
    for(int i = 0; i < 4; i++) {
        arr2[i] = arr1[i];
    }    
}
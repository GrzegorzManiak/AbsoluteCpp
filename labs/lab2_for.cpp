#include <iostream>
using namespace std;

int main() {

    static int LOOP_COUNT = 50;
    for (int i = 1; i < LOOP_COUNT; i++) {
        
        bool is_fizz = i % 3 == 0;
        bool is_buzz = i % 5 == 0;

        if (is_fizz && is_buzz) cout << "FizzBuzz" << endl;
        else if (is_fizz) cout << "Fizz" << endl;
        else if (is_buzz) cout << "Buzz" << endl;
        else cout << i << endl;
    }

    return 0;
}
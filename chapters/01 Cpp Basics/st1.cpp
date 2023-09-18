#include <iostream>

int main() {
    /*
        1: Give the declaration for two variables called feet and inches. Both variables are
        of type int and both are to be initialized to zero in the declaration. Give both
        initialization alternatives.
    */
    int feet_a = 0, inches_a = 0;
    int feet_b(0), inches_b(0);



    /*
        2: Give the declaration for two variables called count and distance. count is of
        type int and is initialized to zero. distance is of type double and is initialized
        to 1.5. Give both initialization alternatives
    */
    int count_a = 0;
    double distance_a = 1.5;

    int count_b(0);
    double distance_b(1.5);



    /*
        3: Write a program that contains statements that output the values of five or
        six variables that have been defined, but not initialized. Compile and run the
        program. What is the output? Explain.
    */
    int a, b, c, d, e, f, g;
    std::cout << a << b << c << d << e << f << g;

    // -- A bounch of random numbers / characters / what was stored at that mem location
    //    maybe?

    return 0;
}
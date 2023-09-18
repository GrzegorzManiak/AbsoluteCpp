// -- Input-Output stream, lib provieds functionality
//    for input and output operations, eg keyboard,
//    console / terminal
#include <iostream> // -- iostreams namespace is std, as its part of the standard lib

// -- Standard namespace, collection of predefined
//    functions and classes
using namespace std;
// using namespace std;
// -- Allows you to envoke classes / functions from std
//    without directly refrencing the lib eg `std::xyz`



int main() {

    // -- Variable creation, no keywords like const let var etc
    // type var_name (; or value)
    int number_of_languages;

    // -- Cout, short for `console output`
    // NOTE: If we did not 'using namespace std' this would have to be
    // std::cout
    cout << "Hello reader.\n" // -- C-string
        << "Welcome to c++. \n";
    // << is used to insert data into a stream

    cout << "How many programming languages have you used?";

    // -- Cin, short for `Console input`
    cin >> number_of_languages;
    // >> 'Stream extraction operator', also a bitwise operator
    // Will leave this for later 

    /*
        If statments seem to allow for us to not use the {} if
        were only executing one thing;

        eg 
        if (x) y();
        if (x) {
            y();
            z();
        }

        elif and else      
    */
    if (number_of_languages < 1)
        cout << "Read the preface. You my prefer\n"
            << "A more elementarty blah";
        
    else cout << "Enjoy! \n";
    
    return 0;
}
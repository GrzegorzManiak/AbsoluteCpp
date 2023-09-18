
function main(): number {
    let number_of_languages: number;

    console.log("Hello reader. \n Welcome to c++ \n");
    console.log("How many programming languages have you used?");

    // -- Pretend to get input as getting inputs in js is 19530 layers of hell
    number_of_languages = 3;

    if (number_of_languages < 1)
        console.log("Read the preface. You may prefer a more elementary book by the same author.");
    else
        console.log("Enjoy the book.");

    return 0;
}
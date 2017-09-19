// Two versions of a function that cube a integer
#include <iostream>

// Pass-by-value used to cube a variable's value.
int cubeByValue(int); // prototype

// Pass-by-reference with a pointer argument used to cube a variable's value
void cubeByReference(int *); // prototype

int main(int argc, char const *argv[]) {

    int number = 5;

    // Pass-By-Value
    std::cout << "Number is: " << number << std::endl;

    number = cubeByValue(number);

    std::cout << "Cube of number is: " << number << std::endl;

    // Pass-By-Reference
    number = 5;
    
    std::cout << "Number is: " << number << std::endl;

    cubeByReference(&number); // pass address of number

    std::cout << "Cube of number is: " << number << std::endl;

    return 0;
}

// calculate and return cube of a integer argument
int cubeByValue(int n) {
    return n * n * n; // pass number by value to cubeByValue
}

// calculate cube of *nPtr; modifies variable number in main
void cubeByReference(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr; // cube of *nPtr
}

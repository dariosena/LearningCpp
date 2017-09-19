// Pointer Program 01
// Pointer operators & and *.

#include <iostream>

int main(int argc, char const *argv[]) {

    int a;     // a is a integer
    int *aPtr; // aPtr is an int * which is a Pointer to a integer

    a = 7;      // assign 7 to a
    aPtr = &a;  // assign the address of a to aPtr

    std::cout << "The value of a is " << a << std::endl;
    std::cout << "The address of a is " << &a << std::endl;
    std::cout << "The value of aPtr is " << aPtr << std::endl;
    std::cout << "The value of *aPtr is " << *aPtr << std::endl;
    std::cout << "&*aPtr = " << &*aPtr << std::endl;
    std::cout << "*&aPtr = " << *&aPtr << std::endl;

    return 0;
}

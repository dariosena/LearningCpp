// Attempting to modify data through a
// nonconstant pointer to constant data.

void f(const int *); // prototype

int main() {

    int y; 
    f(&y); // f attempts illegal modification
}

void f(const int *xPtr) {
    *xPtr = 100;
}



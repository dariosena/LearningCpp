// type safe at compile time

#include <stddef.h>

// ------------------------- Machinery

using Size = ptrdiff_t;

template<class Item, size_t n> 
        constexpr auto n_items(Item(&)[n]) noexcept -> Size {
    
    return n;
    
}

// ------------------------- Usage

#include <iostream>

using namespace std;

auto main() -> int {
    int const a[] = {3,1,4,1,5,9,2,6,5,4};
    Size const n = n_items(a);
    int b[n] = {}; // An array of the same size as a.
    
    (void) b;
    
    cout << "Size = " << n << "\n";
}

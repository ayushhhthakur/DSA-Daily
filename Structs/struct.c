#include <stdio.h>

// struct is a user defined data type in C
struct sample {
    int l;
    int b;
};

// for complex numbers we can use struct as well (a + ib)
struct complex {
    int real;
    int img;
};


int main () {
    // using struct
    struct sample s;
    s.l = 10;
    s.b = 15;

    printf("Length: %d\nBreadth: %d\n", s.l, s.b);
    return 0;
}
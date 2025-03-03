#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct rectangle {
    int l;
    int b;
};

int main () {
    rectangle *p;
    
    p = (struct rectangle *)malloc(sizeof(struct rectangle));


    p->l = 10;
    p->b = 15;

    printf("Length: %d\nBreadth: %d\n", p->l, p->b);
    return 0;
}
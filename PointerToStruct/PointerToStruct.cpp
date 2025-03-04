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

    cout<<"Length: "<<p->l<<endl<<"Breadth: "<<p->b<<endl;
    return 0;
}
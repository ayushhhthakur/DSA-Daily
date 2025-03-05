#include <iostream>
using namespace std;


// using pass by address as in call by value the changes made in formal parameters are not reflected in actual parameters
// so we use call by address to reflect the changes made in formal parameters to actual parameters
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main () {
    int a, b;
    a = 10;
    b = 20;
    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "After swapping a = " << a << " b = " << b << endl;
    return 0;
}
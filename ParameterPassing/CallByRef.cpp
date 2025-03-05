#include <iostream>
using namespace std;

// using call by reference
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main () {
    int a, b;
    a = 10;
    b = 20;
    cout << "Before swapping a = " << a << " b = " << b << endl;
    swap(a, b);
    cout << "After swapping a = " << a << " b = " << b << endl;
    return 0;
}
#include <iostream>
using namespace std;


// using pass by value
int add(int a, int b) {
    int c;
    c=a+b;
    return c;
}

int main () {
    int num1=10, num2=20, sum;
    sum = add(num1, num2);
    cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}
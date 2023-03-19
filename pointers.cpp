#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;

    // & ---> address of operator

    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;

    // * --> value at deference operator

    cout << "The value of a is " << *b << endl;

    return 0;
}
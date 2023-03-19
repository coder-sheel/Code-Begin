#include <iostream>
using namespace std;

struct employee
{
    //data
    int eId;
    char favChar;
    float salary;
};

int main(){
    struct employee sheel;
    sheel.eId = 1;
    sheel.favChar = 'S';
    sheel.salary = 500000;

    cout << "The value is " << sheel.eId << endl;
    cout << "The value is " << sheel.favChar << endl;
    cout << "The value is " << sheel.salary << endl;

    return 0;
}
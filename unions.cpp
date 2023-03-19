#include <iostream>
using namespace std;

union money  //only one value at a time
{
    //data
    int rice;
    char car;
    float pounds;
}; 

int main(){
    union money sheel;
    sheel.rice = 34;
    sheel.car = 'c';

    cout << sheel.car << endl;
    cout << sheel.rice;               //garbage value
    return 0;
}
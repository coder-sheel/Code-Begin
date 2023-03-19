#include <iostream>
using namespace std;

int sum(float a, int b, int c){
    return a+b+c;
}

int sum(int a, int b){
    return a+b;
}

int main(){
    cout << sum(3,6) << endl;
    cout << sum(3,6,10) << endl;
    //in both the cases different functions will be used
    return 0;
}
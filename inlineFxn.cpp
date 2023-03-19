#include <iostream>
using namespace std;

inline int product(int a,int b){    //help to reduce multiple simple execution  time
    return a*b;                     
}

int main(){
    int a, b;
    cout << "Enter value of a nd b " << endl;
    cin >> a >> b;
    cout << "Product is " << product(a,b) << endl;
    return 0;
}
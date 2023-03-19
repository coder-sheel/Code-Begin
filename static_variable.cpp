#include <iostream>
using namespace std;

int product(int a, int b){
    static int c = 0;     //This executes only once
    c = c + 1;            //Next time this function run, the vakue of c will be retained
    return a*b+c;
}

int main(){
    int a , b;
    cout << "Enter value of a and b " << endl;
    cin >> a >> b;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;
    cout << product(a,b) << endl;

    return 0;
}
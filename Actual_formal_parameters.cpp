#include<iostream>
using namespace std;

void decrease(int n1, int n2){
    n1--;
    n2=n2-2;
    cout << (n1) << ":" << (n2) << endl;
    //n1 and n2 are formal parameters
}
    
int main()
{
    int p = 12;
    int q = 30;
    decrease(p, q) ;
    cout << (p) << ":" << (q)<< endl;
    // p and q are actual parameters
    return 0;
}
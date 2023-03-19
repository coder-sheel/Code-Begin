#include<iostream>
using namespace std;
    
int square(int x){
    return x*x;
}

double circumference(int r){
    return 2*3.14*r;
}

double area(int r){
    return 3.14*square(r);
}
    
int main()
{
    int r;
    cin >> r;
    cout << circumference(r) << " " << area(r);
    return 0;
}
#include<iostream>
using namespace std;
    
int square(int x){
    return x*x;
}
    
int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout << square(i) << " ";
    }
    return 0;
}
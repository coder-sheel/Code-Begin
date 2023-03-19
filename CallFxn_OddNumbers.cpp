#include<iostream>
using namespace std;

//odd numbers between two numbers

bool isOdd(int num){ 
    if(num%2==0){        
        return false;
    }else{
        return true;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(isOdd(i)){
            cout << i << " " ;
        }
    }
    return 0;
}
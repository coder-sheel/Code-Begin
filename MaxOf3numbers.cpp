#include<iostream>
using namespace std;

int main()
{
//Find the max of three numbers. 
    int n1, n2, n3;
    cout << "Enter the three numbers " << endl;
    cin >> n1 >> n2 >> n3;
    
    if(n1>n2 && n1>n3){
        cout << "Max is " << n1 << endl;
    }
    else if(n2>n1 && n2>n3){
        cout << "Max is " << n2 << endl;
    }
    else{
        cout << "Max is " << n3 << endl;
    }
    return 0; 
}
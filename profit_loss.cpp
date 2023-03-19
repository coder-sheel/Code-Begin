#include<iostream>
using namespace std;

int main()
{
    int sp, cp;
    cout << "Enter cost price ";
    cin >> cp;
    
    cout << "Enter selling price ";
    cin >> sp;
    
    if(sp>cp){
        int profit = sp-cp;
        cout << "Profit of " << profit << endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout << "Loss of " << loss << endl;
    }
    else{
        cout << "No profit or loss" << endl;
    }
    return 0;
}
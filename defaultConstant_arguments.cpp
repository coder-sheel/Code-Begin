#include <iostream>
using namespace std;

float moneyRecieved(int money, float factor = 1.04){   //Here factor is a default argument and it should be written after compulsory arguments(here money)
    return money*factor;
}

//constant argument tell the function not to change the value of argument
//int strlen(cont char *p){

//}

int main(){
    int money = 100000;
    cout << "If you have money " << money << "Rs in your bank account, you will recieve " << moneyRecieved(money) << endl;
    cout << "For VIP : If you have money " << money << "Rs in your bank account, you will recieve " << moneyRecieved(money, 1.1) << endl;
    return 0;
}
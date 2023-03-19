#include<iostream>
using namespace std;

bool checkeligible(int age, int limit){ 
    if(age >= limit){        
        return true;
    }else{
        return false;
    }
}

int main()
{
    int age, votinglimit;
    cout << "Enter age : ";
    cin >> age ;
    cout << "Enter voting limit : ";
    cin >> votinglimit;
    int is_eligible_for_vote =checkeligible(age, votinglimit);
    if(is_eligible_for_vote){
        cout << "He/she is eligible for vote";
    }else{
        cout << "Not eligible for vote";
    }
    return 0;
}
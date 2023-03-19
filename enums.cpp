#include <iostream>
using namespace std;

int main(){
    enum Meal{ breakfast, lunch, dinner};
    Meal m2 = breakfast;
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<m2<<endl;

    cout<<(m1==0)<<endl;
    cout<<(m1==1)<<endl;
    cout<<(m2==1)<<endl;

    return 0;
}
    
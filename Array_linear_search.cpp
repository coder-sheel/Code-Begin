#include<iostream>
using namespace std;

int main()
{
    int array[]={3,32,5,24,7};
    int key = 24;
    
    int ans= -1;
    
    for(int i=0;i<5;i++){
        if(array[i]==key){
        ans=i;
        break;
        }
    }
    cout << ans << endl;
    return 0; 
}

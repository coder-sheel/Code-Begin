#include<iostream>
using namespace std;

int main(){
   
    // print n numbers of alphabets
    
    int n;
    cin >> n;
    
    for(int j=0;j<n;j++){
        char ch = (char)('A'+j);
        cout << ch;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main(){
   
    // implicit type conversion
    
    char ch = 'a';
    int x = (ch + 1);
    cout <<(char)x<< endl;
    
    return 0;
}
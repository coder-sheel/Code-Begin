#include <iostream>
using namespace std;

//This will not swap a and b
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}

//call by reference using pointers
void swapPointers(int* a, int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

//call by reference using C++ refernce variables
void swapReference(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
}

int main(){
    int x =4, y=5;
    cout << "The value of x is " << x << " The value of y is " << y << endl; 
    
    //swap(x,y); This will NOT swap a and b 
    swap(x,y);
    cout << "The value of x is " << x << " The value of y is " << y << endl;
   
    //swapPointers(&x,&y); This will swap a and b using pointers reference
    swapPointers(&x,&y);
    cout << "The value of x is " << x << " The value of y is " << y << endl;
   
    //swapReference(&x,&y); This will swap a and b using reference variables
    swapReference(x,y);
    cout << "The value of x is " << x << " The value of y is " << y << endl;
   
   
    return 0;
}


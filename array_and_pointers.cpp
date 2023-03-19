#include <iostream>
using namespace std;

int main(){
    
    //POINTERS ARITHMETIC
    // Address(new) = adress(current) + i(increament/decreament) *sizeof(datatype)
    
    int mathmark[4];
    mathmark[0] = 22;
    mathmark[1] = 44;
    mathmark[2] = 16;
    mathmark[3] = 21;

    int* p = mathmark;
    cout << "The value of mathmark is " << *p << endl ;
    cout << "The value of mathmark is " << *(p+1) << endl ;
    cout << "The value of mathmark is " << *(p+2) << endl ;
    cout << "The value of mathmark is " << *(p+3) << endl ;

    cout << *(p++) << endl ;
    cout << *p << endl;
    cout << *(++p) << endl;
    cout << *p << endl;
    cout << *(--p) << endl;
    cout << *p << endl;
    return 0;
}
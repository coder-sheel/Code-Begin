#include <iostream>
using namespace std;

int main(){
    int array[] = {2,4,6,48};
    int mathmark[4];
    mathmark[0] = 22;
    mathmark[1] = 44;
    mathmark[2] = 16;
    mathmark[3] = 21;


    
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;

    cout << mathmark[0] << endl;
    cout << mathmark[1] << endl;
    cout << mathmark[2] << endl;
    cout << mathmark[3] << endl;

    //you can change the value of an array

    mathmark[3] = 5;
    cout << mathmark[3] << endl;

    //using loop

    for(int i = 0 ; i<4 ; i++){
        cout << "The value of marks " << i << " is " << mathmark[i] << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){

    const int ARRAY_SIZE = 10;
    int someArray[10];

    for(int x = 0; x < ARRAY_SIZE; x++){
        someArray[x] = x + 11;
    }

    for (int x = 0; x < ARRAY_SIZE; x++){
        cout << someArray[x] << endl;
    }

    // for(int number : someArray){
    //     cout << number << endl;
    // }

    return 0;
}
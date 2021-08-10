#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 5> myIntArray;

    for(int a = 0; a < 5; a++){
        cout << myIntArray[a] << endl;
    }

    return 0;
}
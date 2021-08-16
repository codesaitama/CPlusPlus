#include <iostream>
#include <array>
using namespace std;

int main(){

    array<int, 10> arrayInt;

    for(int x = 0; x < arrayInt.size(); x++){
        arrayInt[x] = x * 2;
    }

    for(int element : arrayInt){
        cout << element << endl;
    }

    return 0;
}
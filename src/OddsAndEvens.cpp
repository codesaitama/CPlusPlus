#include <iostream>
using namespace std;

int main(){

    for(int x = 0; x <= 50; x++){

        if(x % 2 == 0){
            cout << x << " is an even number" << endl;
        }else{
            cout << x << " is an odd number" << endl;
        }
    }

    return 0;
}
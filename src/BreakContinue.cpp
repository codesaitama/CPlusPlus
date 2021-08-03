#include <iostream>
using namespace std;


int main(){

    int count = 0;

    while (count < 10)
    {
        if(count == 5){
            count++;
            continue;
        }

        cout << count << endl;
        count++;
    }

    for(int x = 0; x < 20; x++){
        if(x % 2 == 0){
            break;
        }

        cout << x << endl;
    }

    return 0;
}
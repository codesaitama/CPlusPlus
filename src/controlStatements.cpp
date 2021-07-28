#include <iostream>
using namespace std;

int main(){

    // Sequential statement (sequence)
    // Selection statement (decision)
    // Repetition statement (loops)

    int age = 15;

    cout << 15 << endl;

    if( age >= 16){
        cout << "You can drive" << endl;
    }
    else{
        cout << "You cannot drive " << endl;
    }

    // For Loop

    for(int i = 1; i <= age; i++){
        cout << "Happy birthday " << i;
    }

    return 0;
}
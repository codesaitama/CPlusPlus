#include <iostream>
using namespace std;

int main(){

    int count = 0;

    // while loop
    while(count < 10){
        cout << count << endl;
        count++;
    }

    cout << "----------------" << endl;

    count = 0;
 
    // do while loop
    do{
        cout << count << endl;
        count++;
    }while(count < 10);

    cout << "----------------" << endl;

    // for loop
    for(int x = 0; x < 10; x++){
        cout << x << endl;
    }

    int input;
    cout << "Please enter a non-negative integer to continue, "<< endl;
    cout << "or negative if you want to quit" << endl;

    cin >> input;

    while(input >= 0){
        cout << input << endl;
        cout << "Please enter a non-negative integer to continue, "<< endl;
        cout << "or negative if you want to quit" << endl;

        cin >> input;
    } // end while loop


    return 0;
}
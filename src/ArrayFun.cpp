#include <iostream>

using namespace std;

int main(){

    const int ARRAY_SIZE = 5;
    int myArray[ARRAY_SIZE];

    string names[4]{"Bob", "Kofi", "Daniel", "Lopez"};

    myArray[0] = 12;
    myArray[1] = 24;
    myArray[2] = 35;
    myArray[3] = 50;
    myArray[4] = 47;

    for(int x = 0; x < ARRAY_SIZE; x++){
        cout << myArray[x] << endl;
    }

    cout << "---------------------------------" << endl;

    for(int x = 0; x < 4; x++){
        cout << names[x] << endl;
    }

    return 0;
}
#include <iostream>
#include <string>

using namespace std;

void arithmetic(){
    // Arithmetic Operators
    int a = 10;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    cout << sum << endl;
    cout << difference << endl;
    cout << product << endl;
    cout << quotient << endl;
    cout << remainder << endl;
}

int main(){
    arithmetic();

    return 0;
}
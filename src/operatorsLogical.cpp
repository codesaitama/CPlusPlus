#include <iostream>
using namespace std;

int main(){
    // Logical Operators
    
    bool isRaining = true;
    bool isWarm = true;

    cout << boolalpha;
    
    cout << "And: " << (isRaining && isWarm) << endl;
    cout  << "Or: " << (isRaining || isWarm) << endl;
    cout << "Not: " << (!isRaining) << endl;

    return 0;
}
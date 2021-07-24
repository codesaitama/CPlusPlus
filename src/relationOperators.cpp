#include <iostream>

using namespace std;

int main(){
    // Relational Operators

    cout << boolalpha;

    int a = 15, b = 20;
    bool areEqual = a == b;
    int age = 26;

    cout << (a < b) << endl;
    cout << areEqual << endl;

    cout << "Age >= 21 : " << (age >= 21) << endl;

    return 0;
}
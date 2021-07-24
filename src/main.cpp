#include <iostream>
#include <string>

using namespace std;

int main(){
    int myInt = 15;
    double myDouble = 3.14159;
    char singleChar = 'a';
    string myName = "Emmanuel Achana";
    bool isRaining = false;


    cout << myInt << endl;
    cout << myDouble << endl;
    cout << singleChar << endl;
    cout << "Hello " << myName << endl;
    cout << isRaining << endl;
    cout << boolalpha << isRaining << endl;

    return 0;
}
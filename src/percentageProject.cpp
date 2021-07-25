#include <iostream>
#include <string>

using namespace std;

int main(){
    string seperator = "\n--------------------------------------------\n";
    string fullName;
    string location;
    int initialScore;

    cout << "Please enter a score between 0 to 100: ";
    cin >> initialScore;

    cin.get();

    cout << "Please enter your full name: ";
    getline(cin, fullName);

    cout << "Please enter your city, state/province and country: ";
    getline(cin, location);

    cout << seperator << "Hello " + fullName + "." << "\nWe heard you are from " + location + ". \nYour original score is " << initialScore << ", but with five points added you, your score is " << initialScore + 5 << seperator;

    return 0;
}
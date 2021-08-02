#include <iostream>
using namespace std;

int main(){

    int sum = 0;

    int input;
    cout << "Please enter a non-negative integer to continue, "<< endl;
    cout << "or negative if you want to quit and get the total" << endl;
    cin >> input;

    while (input >= 0)
    {
        sum = sum + input;
        cout << "Please enter a non-negative integer to continue, "<< endl;
        cout << "or negative if you want to quit and get the total" << endl;
        cin >> input;
    }

    cout << "The sum of numbers is " << sum << endl;
    

    return 0;
}
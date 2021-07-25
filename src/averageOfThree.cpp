#include <iostream>
using namespace std;

int main(){
    double num1, num2, num3;

    cout << "Please enter the first number: ";
    cin >> num1;

    cout << "Please enter the second number: ";
    cin >> num2;

    cout << "Please enter the last number: ";
    cin >> num3;

    double mean = (num1 + num2 + num3) / 3;

    cout << "First: " << num1 << " Second: " << num2 << " Third: " << num3 << " Mean is " << mean;

    return 0;
}
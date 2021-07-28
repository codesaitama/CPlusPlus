#include <iostream>
using namespace std;

int main(){
    // Prompt user for age AND gender;
    // Age is int, gender is character
    // Get of f or F and are 60 or over
    // You qualify for the discount
    // You do not qualify for the discount

    int age;
    char gender;

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter you gender: ";
    cin >> gender;

    if(age >= 60 && (gender == 'F' || gender == 'f')){
        cout << "You qualify for the discount!" << endl;
    }else{
        cout << "You do not qualify for the discount!" << endl;
    }

    cout << "Age: " << age << " || Gender: " << gender;
    return 0;
}
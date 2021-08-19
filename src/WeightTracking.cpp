#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    const int NUM_OF_PEOPLE = 5;
    vector<string> names;
    vector<float> weight;

    for(int x = 0; x < NUM_OF_PEOPLE; x++){
        string name;
        float number;

        cout << "Enter full name: " << endl;
        getline(cin, name);
        names.push_back(name);

        cout << "Enter " << name << "'s weight: " << endl;
        cin >> number;
        weight.push_back(number);
        cin.get();
    }

    for(int x = 0; x < NUM_OF_PEOPLE; x++){
        cout << names[x] << " weighs " << weight[x] << " lbs" << endl;
    }

    return 0;
}
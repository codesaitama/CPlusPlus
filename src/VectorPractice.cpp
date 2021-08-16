#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> names;

    names.push_back("Kofi Yeboah");
    names.push_back("Sarah Connor");
    names.push_back("Alfred Mantil");
    names.push_back("Jennifer Lawerence");
    names.push_back("Rita Ora");

    names.insert(names.begin() + 2, "John Baugh");
    names.pop_back();

    for(string name : names){
        cout << name << endl;
    }

    return 0;
}
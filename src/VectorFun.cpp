#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    vector<int> someVector;

    someVector.push_back(4);
    someVector.push_back(2);
    someVector.push_back(9);
    someVector.push_back(12);
    someVector.push_back(8);

    for(int vec : someVector){
        cout << vec << endl;
    }
    return  0;

}
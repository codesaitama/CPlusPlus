#include <iostream>
#include <string>

using namespace std;

void greet(string name){
    cout << "Hello " + name << endl;
}

int main(){
    greet("Saitama");

    return 0;
}
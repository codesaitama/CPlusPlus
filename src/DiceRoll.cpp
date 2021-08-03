#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(nullptr));

    for (int x = 0; x < 10; x++){
        int val = rand() % 6 + 1;

        cout << val << endl;
    }

    return 0;
}
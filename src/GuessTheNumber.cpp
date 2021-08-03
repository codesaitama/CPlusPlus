#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(nullptr));

    int numberOfTries = 0;
    int guess;

    while(numberOfTries < 3){
        int randomGuess = rand() % 100 + 1;

        //cout << randomGuess << endl;

        numberOfTries++;
        cout << "Guess a number between 0 and 101 " << endl;
        cin >> guess;

        if(randomGuess == guess){
            cout << "Congratulations! You guessed the number in " << numberOfTries << "! Thnaks for playing" << endl;
            break;
        }

        if(guess > randomGuess){
            cout << "Your guess is too high!" << endl;
        }else{
            cout << "Your guess is too low!" << endl;
        }
    }

    return 0;
}
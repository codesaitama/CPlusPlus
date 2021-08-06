#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(nullptr));

    int numberOfTries = 0;
    int guess, allowedNumberOfGuesses = 3;
    int randomGuess = rand() % 100 + 1;
    cout << randomGuess << endl;

    while(numberOfTries < allowedNumberOfGuesses){

        numberOfTries++;
        cout << "Guess a number between 0 and 101 " << endl;
        cin >> guess;

        if(guess > 100 || guess < 1){
            cout << "That was a waste of guess. You must pick a number between 1 and 100 inclusive!" << endl;
            continue;
        }

        if(randomGuess == guess){
            cout << "Congratulations! You guessed the number in " << numberOfTries << " tries! Thnaks for playing" << endl;
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
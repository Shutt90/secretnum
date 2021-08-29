#include <iostream>

using namespace std;

int main()
{

    int secretNum = rand() % 11;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(guess != secretNum && !outOfGuesses) {
        if(guessCount < guessLimit) {
            cout << "Guess the secret number (between 1 and 10)" << endl;
            cin >> guess;
            cout << "Wrong " << guessLimit << " lives left" << endl;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }

    if (outOfGuesses) {
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }

    return 0;

}
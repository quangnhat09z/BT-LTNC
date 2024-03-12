#include <iostream>
#include <ctime>

using namespace std;

int generateRandomNumber() {

    srand(time(NULL));
    int res = rand() % 100 + 1;
    return res;
}

void printAnswer(int number, int guessNumber) {
    if (number > guessNumber) cout << "Your number is so big" << endl;
    if (number < guessNumber) cout << "Your number is so small" << endl;
    if (number == guessNumber) cout << "Congratulation!. You win" << endl;
}

bool playAgain() {
    char answer;
    cin >> answer;
    if (answer == 'Y') {
        return true;
    } else return false;
}

void playGuessIt() {
    cout << "Let's guess 1 number from 1...100" << endl;
    int number;
    int guessNumber = generateRandomNumber();

    do {
        cin >> number;
        printAnswer(number, guessNumber);
    } while (number != guessNumber);


    cout << "Do you want to play again (Y/N)" << endl;
}

int main() {

    do {
        playGuessIt();

    } while (playAgain());


    return 0;
}

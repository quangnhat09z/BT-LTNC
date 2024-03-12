#include <iostream>
#include <ctime>

using namespace std;

int selectNumber(int low, int high) {

    srand(time(NULL));
    int res = rand() % (high - low + 1) + low;
    return res;
}

char getHostAnswer(int x) {
    char answer;
    cout << "Your number is " << x << endl;
    cout << "type > or < or =: ";
    cin >> answer;
    return answer;
}

bool playAgain() {
    cout << "Do you want to play again (Y/N): " << endl;
    char result;
    cin >> result;
    if (result == 'Y' or result == 'y') {
        return true;
    }
    return false;
}

void playComputerGuessIt() {
    int x, answer;
    int low = 1, high = 100;
    do {

        x = selectNumber(low, high);
        answer = getHostAnswer(x);
        if (answer == '=') cout << "Haha, I win" << endl;
        else if (answer == '>') high = x - 1;
        else if (answer == '<') low = x + 1;
        else cout << "Invalid input. Please type > or < or =: ";

    } while (answer != '=');


}

int main() {

    do {
        playComputerGuessIt();
    } while (playAgain());


    return 0;
}

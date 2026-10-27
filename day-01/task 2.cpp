// Made with Blocks to C++
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    // Guess a number between 1 and 20
    int secret = random(20);
    int guess = 0;
    int tries = 0;
    int rangehigh = secret + 3;
    int rangelow = secret - 3;
    cout << "I am thinking of a number from 1 to 20." << endl;
    do {
        cout << "Your guess:" << endl;
        cin >> guess;
        tries += 1;

        if (guess <= rangehigh && guess >= rangelow) {
            cout << "hot" << endl;
        }

    } while (guess != secret);
    cout << "Correct!" << endl;
    cout << "You needed " << tries << " tries." << endl;
    return 0;
}

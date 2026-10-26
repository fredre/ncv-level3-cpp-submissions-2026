#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name, gender;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Are you male or female? ";
    cin >> gender;

    // Convert gender to lowercase
    transform(gender.begin(), gender.end(),
              gender.begin(), ::tolower);

    if (gender == "male") {
        cout << "Hello, " << name << "! You are handsome." << endl;
    }
    else if (gender == "female") {
        cout << "Hello, " << name << "! You are beautiful." << endl;
    }
    else {
        cout << "Please enter male or female." << endl;
    }

    return 0;
}

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
char num1;
string message;

cout << " Please enter gender code : \n";
cin >> num1;

switch (num1) {
    case 'M':
        message = "Male";
        break;
    case 'm':
        message = "Male";
        break;
    case 'F':
        message = "Female";
        break;
    case 'f':
        message = "Female";
        break;

    default:
        message = "Invalid";
        break;
}

cout << message;

return 0;
}

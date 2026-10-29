#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int num1 = 0;
int num2 = 0;
int temp = 0;


int main() {
cout << " Please enter first number: \n";
cin >> num1;
cout << " Please enter second number \n";
cin >> num2;
temp = num1 % 2;
if (temp != 0) {
    // Executes if condition1 is true
    cout << " The first number is odd \n";
}
else if (temp == 0) {
    // Executes if condition1 is false AND condition2 is true
     cout << " The first number is even \n";
}
temp = num2 % 2;
if (temp != 0) {
    // Executes if condition1 is true
    cout << " The second number is odd \n";
}
else if (temp == 0) {
    // Executes if condition1 is false AND condition2 is true
     cout << " The second number is even \n";
}

return 0;
}

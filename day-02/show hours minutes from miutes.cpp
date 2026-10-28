#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;
// declare variables
int minutes = 0;
int hours = 0;
int minutes_input = 0;
int sec_temp = 0;

int main() {
    cout << "Input a number of munutes ";
    cin >> minutes_input;

    sec_temp = minutes_input % 60;  // when using mod the remaining seconds get calculated and stored in sec_temp
    hours = minutes_input / 60;    // this operator does not give commas due to the variable type

    cout << "it is " << hours << " and " << sec_temp << " minutes" << "/n";   //then this happens


return 0;
}

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>

using namespace std;



int main() {
double avg1 = (70 + 85 + 90) / 3;
double avg2 = (70 + 85 + 90) / 3.0;

int total = 245, tests = 3;
double avg3 = static_cast<double>(total) / tests;
double avg4 = static_cast<double>(total / tests);

int whole = 9.99;

cout << fixed << setprecision(2) << "/n";
cout << avg1 << "\n";
cout << avg2 << "\n";
cout << avg3 << "\n";
cout << avg4 << "\n";
cout << whole << "\n";

return 0;
}

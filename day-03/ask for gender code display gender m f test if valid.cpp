#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
string num1 = "0";
cout << " Please enter gender code m\f: \n";
cin >> num1;

if ((num1 == "m") || (num1 == "f")) {
    if (num1 == "m") {

    cout << " Male \n";

    }
    else if (num1 == "f") {

    cout << " Female \n";

    }

}
else if ((num1 != "m") && (num1 != "f")) {
    cout << " invalid code \n";
}



return 0;
}

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int calcSum(int num1, int num2);

int main() {

    cout << calcSum(50, 56);

return 0;
}

int calcSum(int num1, int num2)
{
    return num1 + num2;
}

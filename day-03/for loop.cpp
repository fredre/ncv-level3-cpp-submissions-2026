#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;



int main() {
    int num;
    int sum = 0;

    for (int i=1;i<=5;i++)
    {
        cout << "enter number " << i << " ";
        cin >> num;
        if (num > 50){
            i--;
        }
        else{
           sum = sum + num;
        }

    }

    cout << "The total sum is: " << sum << endl;
    cout << "The average is: " << sum /5 << endl;
return 0;
}

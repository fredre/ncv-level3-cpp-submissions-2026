#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getNums(int mrk[],int sz)  //random 2 numbers to 50
{
    for(int x=0; x < sz; x++)
    {
    mrk[x] = rand() % 50 + 1;
    }
}

int addNums(int mrk[],int sz)
{
    int think = 0;
    for(int x=0; x < sz; x++)
    {
       think = think + mrk[x];
    }
     //cout<<"sum of numbers: "<<think<<endl;
    return think;
}

int difference(int mrk[],int sz)
{
    int think = mrk[0]-mrk[1];
    return think;     //display difference
}

int product(int mrk[])
{
    int think = mrk[0]*mrk[1];
    return think;
}

int quotient(int mrk[])
{
    int think = mrk[0]/mrk[1];
    return think;
}
//constants
const int SIZE = 2;

int main() {
    //Gen random number
    char mathOperand;
    int result;
    int nums[SIZE];
    srand(time(0));
    getNums(nums,SIZE);
    cout<<"number one :"<<nums[0]<<" number two:"<<nums[1]<<endl;
    cout<<"do you want to add + subtract - divide / or multiply * the numbers?"<<endl;
    cin >> mathOperand;

    switch (mathOperand) {
    case '+':
        result = addNums(nums,SIZE);
        break;
    case '-':
        result = difference(nums,SIZE);
        break;
    case '*':
        result = product(nums);
        break;
    case '/':
        result = quotient(nums);
        break;

    default:
        result = 0;
        break;
     }
    cout<<result<<endl;

return 0;
}

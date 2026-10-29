#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getNums(int mrk[],int sz)
{
    for(int x=0; x < sz; x++)
    {
        cout<<"enter number "<< x+1 <<" : ";
        cin>>mrk[x];
    }
}

void displayNums(int mrk[],int sz)
{
    int think = 0;
    for(int x=0; x < sz; x++)
    {
       think = think + mrk[x];
    }
     cout<<"sum of numbers: "<<think<<endl;
}

void difference(int mrk[],int sz)
{
     cout<<"difference :"<<mrk[0]-mrk[1]<<endl;     //display difference
}

void product(int mrk[])
{

    cout<<"product :"<<mrk[0]*mrk[1]<<endl;
}

quotient(int mrk[])
{
    cout<<"quotient :"<<mrk[0]/mrk[1]<<endl;
}
//constants
const int SIZE = 2;

int main() {

    int nums[SIZE];
    getNums(nums,SIZE);
    displayNums(nums,SIZE);
    difference(nums,SIZE);
    product(nums);
    quotient(nums);

return 0;
}

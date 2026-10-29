#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getMarks(int mrk[],int sz)
{
    for(int x=0; x < sz; x++)
    {
        cout<<"enter mark "<< x+1 <<" : ";
        cin>>mrk[x];
    }
}

void displayMarks(int mrk[],int sz)
{
    for(int x=0; x < sz; x++)
    {
        cout<<mrk[x]<<"@ "<<&mrk[x]<<endl;
    }
}

void highEst(int mrk[],int sz)
{
    int highest = mrk[0];

    for (int i = 0; i < sz; i++)
    {
        if (mrk[i] > highest)
            highest = mrk[i];
    }
    cout<<highest<<endl;
}



void loWest(int mrk[],int sz)
{
    int lowest = mrk[0];

    for (int i = 0; i < sz; i++)
    {
        if (mrk[i] < lowest)
            lowest = mrk[i];
    }
    cout<<lowest<<endl;
}

const int SIZE = 5;

int main() {

    int marks[SIZE];
    getMarks(marks,SIZE);
    displayMarks(marks, SIZE);
    highEst(marks,SIZE);
    loWest(marks,SIZE);

return 0;
}

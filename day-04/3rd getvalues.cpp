#include <iostream>
#include <conio.h>

using namespace std;

void generateValues(int &val1, int &val2)
{
    val1 = rand() % 100 + 1;
    val2 = rand() % 100 + 1;
}

int calcSum(int val1, int val2)
{
    return val1 + val2;
}


int main ()
{
    int v1 = 0;
    int v2 = 0;
    srand(time(0));
    generateValues (v1, v2);

    cout<<v1<<"+"<<v2<<"=" <<calcSum(v1,v2)<<endl;
    cout<<"The address of v1 is :"<<&v1<<endl;
    cout<<"The address of v2 is :"<<&v2<<endl;
    cout <<"The size of int on this maschine: "<<sizeof(int)<<"bytes.\n";
    _getch();
    return (0);

}

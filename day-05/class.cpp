#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <

using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;
public:
    Person();
    Person(string nm, int ag, char gn);
    void setPerson(string nm, int ag, char gn);
    string getName();
    int getAge();
    char getGender();
};

 Person::Person()
 {
     name = "";
     age = 0;
     gender = ' ';
 }

 Person::Person(string nm, int ag, char gn)
 {
    setPerson(nm, ag, gn);
 }
void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;
    if (ag >= 0 && ag <= 120) age = ag;
    else age = 0;
    gender = gn;
}

string Person::getName() {return name;}
int Person::getAge()     {return age;}
char Person::getGender() {return gender;}

int main()
{
    Person ps;
    ps.setPerson("Thato", 23, 'M');

    Person p2("Lerato", 19, 'F');

    cout <<ps.getName()<< ", "<< ps.getAge() << ", " <<ps.getGender() <<endl;
    cout <<p2.getName()<< ", "<< ps.getAge() << ", " <<p2.getGender() <<endl;

    p2.setPerson("Lerato",200, 'F');
    cout <<p2.getName() << ", "<< p2.getAge() <<endl;
    return 0;
}

#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main(){
// declare variables
double length, breadth, area, perimeter, radius;

//Prompt and get output
cout << " Please enter the lenght of the Rectangle \n";
cin >> length;
cout << " Please enter the breadth of the Rectangle \n";
cin >> breadth;
cout << " Please enter the radius of a circle \n";
cin >> radius;

// calculate for  the rectangle
area = length * breadth;
perimeter = (length + breadth) * 2;

//display area and perimeter rectangle

cout <<" The area of the rectangle is:  " << area << "\n";
cout <<" The perimeter of the rectangle is:  " << perimeter << "\n";

// calculate for  the circle
const double PI = 3.14159265358979323846;
area = PI * pow(radius,2.0);
perimeter = 2 * PI * radius;

//display area and perimeter for the circle

cout <<" The area of the circle is:  " << area << "\n";
cout <<" The perimeter of the circle is:  " << perimeter << "\n";



    return 0;

}

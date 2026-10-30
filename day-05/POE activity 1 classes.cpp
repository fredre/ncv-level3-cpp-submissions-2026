#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Product
{
private:
    string name;
    double price;
    int stock;
public:
    Product();
    Product(string nm, double pr, int st);
    void setProduct(string nm, double pr, int stock);
    string getName();
    double getPrice();
    int getStock();
};

 Product::Product()
 {
     name = "";
     price = 0.0;
     stock = 0;
 }

 Product::Product(string nm, double pr, int st)
 {
    setProduct(nm, pr, st);
 }
void Product::setProduct(string nm, double pr, int st)
{
     name = nm;

    if (pr < 0) {
        cout << "Invalid price. Setting to 0.\n";
        price = 0.0;
    } else {
        price = pr;
    }

    if (st < 0) {
        cout << "Invalid stock. Setting to 0.\n";
        stock = 0;
    } else {
        stock = st;
    }
}

string Product::getName() {return name;}
double Product::getPrice()     {return price;}
int Product::getStock() {return stock;}

int main()
{
    Product ap;
    ap.setProduct("apple", 2.30, 6);

    Product bn("banana", 4.50, 3);

    cout << ap.getName() << ", " << ap.getPrice() << ", " << ap.getStock() << endl;
    cout << bn.getName() << ", " << bn.getPrice() << ", " << bn.getStock() << endl;

    return 0;
}

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

void GetProductData(Product &p)
{
    string nm; double pr; int st;
    cout << "Name: "; cin >> nm;
    cout << "Price: "; cin >> pr;
    cout << "Stock: "; cin >> st;
    p.setProduct(nm, pr, st);
}

void DisplayProduct(Product &p)
{
    cout << p.getName() << ", " << p.getPrice() << ", " << p.getStock() << endl;
}

bool prodCompare(Product &p1, Product &p2)
{
    std::string str1 = p1.getName();
    std::string str2 = p2.getName();
    bool result;
    if (str1.empty() || str2.empty())
    {
       result = false;
    }
    else
    {
        if (str1[0] == str2[0])
            {
            result = true;
            }
        else
            {
            result = false;
            }
    }

    return result;
}


int main()
{

    Product ap;
    GetProductData(ap);
    DisplayProduct(ap);

    Product bn;
    GetProductData(bn);
    DisplayProduct(bn);


    cout << prodCompare(bn,ap);



    return 0;
}

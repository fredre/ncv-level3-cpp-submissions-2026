#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Named constants
    const double BREAD_PRICE = 16.50;
    const double AIRTIME_PRICE = 5.00;
    const double VAT_RATE = 0.15;

    // Declare variables
    int loaves;
    int vouchers;

    // Obtain input from the customer
    cout << "Enter number of loaves: ";
    cin >> loaves;

    cout << "Enter number of airtime vouchers: ";
    cin >> vouchers;

    // Calculate individual costs
    double breadCost = loaves * BREAD_PRICE;
    double airtimeCost = vouchers * AIRTIME_PRICE;

    // Calculate subtotal, VAT and total
    double subtotal = breadCost + airtimeCost;
    double vatAmount = subtotal * VAT_RATE;
    double totalPayable = subtotal + vatAmount;

    // Display the formatted till slip
    cout << fixed << setprecision(2);

    cout << "\n===== SPAZA SHOP TILL SLIP =====\n";
    cout << "Bread (" << loaves << "):     R" << breadCost << endl;
    cout << "Airtime (" << vouchers << "):  R" << airtimeCost << endl;
    cout << "Subtotal:         R" << subtotal << endl;
    cout << "VAT (15%):        R" << vatAmount << endl;
    cout << "Total payable:    R" << totalPayable << endl;

    return 0;
}

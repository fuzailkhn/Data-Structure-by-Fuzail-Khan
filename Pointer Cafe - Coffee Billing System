#include <iostream>
using namespace std;

int main() {
    int espressoPrice = 200, lattePrice = 250, cappuccinoPrice = 300;
    int *pEspressoPrice = &espressoPrice; 
	int *pLattePrice = &lattePrice; 
	int *pCappuccinoPrice = &cappuccinoPrice;

    int espressoQty = 0, latteQty = 0, cappuccinoQty = 0;
    int *pEspressoQty = &espressoQty;
	int *pLatteQty = &latteQty;
	int *pCappuccinoQty = &cappuccinoQty;

    cout << "Enter Espresso Quantity: ";
    cin >> *pEspressoQty;
    cout << "Enter Latte Quantity: ";
    cin >> *pLatteQty;
    cout << "Enter Cappuccino Quantity: ";
    cin >> *pCappuccinoQty;

    int espressoCost = (*pEspressoQty) * (*pEspressoPrice);
    int latteCost = (*pLatteQty) * (*pLattePrice);
    int cappuccinoCost = (*pCappuccinoQty) * (*pCappuccinoPrice);
    int totalBill = espressoCost + latteCost + cappuccinoCost;

    cout << "------ Cafe Bill ------"<<endl;
    cout << "Espresso (" << *pEspressoQty << " x " << *pEspressoPrice << ") = " << espressoCost << endl;
    cout << "Latte    (" << *pLatteQty << " x " << *pLattePrice << ") = " << latteCost << endl;
    cout << "Cappuccino (" << *pCappuccinoQty << " x " << *pCappuccinoPrice << ") = " << cappuccinoCost <<endl;
    cout << "-----------------------"<<endl;
    cout << "TOTAL BILL: " << totalBill << endl;

    return 0;
}

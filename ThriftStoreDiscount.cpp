// Thrift Store Discount Calculator
// Programmer: Matt Brundage II
// Date: 3/11/21

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double itemPrice = 0.0;
    double discountPrice = 0.0;
    double discountAmt = 0.0;

    cout << "Item Price: ";
    cin >> itemPrice;

    for (double rate = 0.1;
    rate <= 0.4; rate += 0.05)
    {
        discountAmt = itemPrice * rate;
        discountPrice = itemPrice - discountAmt;

        cout << rate * 100 << "% discount: ";
        cout << "$" << discountPrice << endl;
    } //end for
}
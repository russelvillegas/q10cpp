#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string productName;
    double unitPrice, discountPercent, shippingPerBox;
    double subtotal, discount, merchandiseTotal, exactBoxes, shipping, amountDue;
    int quantity, unitsPerBox, boxes;

    cout << "Enter product name: ";
    getline(cin, productName);
    cout << "Enter unit price: ";
    cin >> unitPrice;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter discount percentage: ";
    cin >> discountPercent;
    cout << "Enter shipping per box: ";
    cin >> shippingPerBox;
    cout << "Enter units per box: ";
    cin >> unitsPerBox;

    subtotal = unitPrice * quantity;
    discount = subtotal * discountPercent / 100.0;
    merchandiseTotal = subtotal - discount;
    exactBoxes = static_cast<double>(quantity) / unitsPerBox;
    boxes = (int)ceil(exactBoxes);
    shipping = boxes * shippingPerBox;
    amountDue = merchandiseTotal + shipping;

    cout << fixed << setprecision(2);
    cout << "\nProduct:\t" << productName << endl;
    cout << "Subtotal:\t" << subtotal << endl;
    cout << "Discount:\t" << discount << endl;
    cout << "Boxes:\t\t" << boxes << endl;
    cout << "Shipping:\t" << shipping << endl;
    cout << "Amount Due:\t" << amountDue << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Item {
    string name;
    int quantity;
    float price;
    float total;
};

int main() {
    int n;
    float grandTotal = 0, gstRate = 18.0, discountRate = 0.0;
    string customerName;

    cout << "=========== ADVANCED BILLING SYSTEM ===========" << endl;
    cout << "Enter customer name: ";
    cin >> ws;
    getline(cin, customerName);

    cout << "Enter number of items: ";
    cin >> n;

    Item items[n];

    // Input items
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << ":" << endl;
        cout << "Item name: ";
        cin >> ws;
        getline(cin, items[i].name);
        cout << "Quantity: ";
        cin >> items[i].quantity;
        cout << "Price per item: ";
        cin >> items[i].price;

        items[i].total = items[i].quantity * items[i].price;
        grandTotal += items[i].total;
    }

    // Discount input
    cout << "\nEnter discount percentage (0 if none): ";
    cin >> discountRate;

    // Calculations
    float discountAmount = (grandTotal * discountRate) / 100;
    float amountAfterDiscount = grandTotal - discountAmount;
    float gstAmount = (amountAfterDiscount * gstRate) / 100;
    float finalAmount = amountAfterDiscount + gstAmount;

    // Display Bill
    cout << "\n\n=============== BILL RECEIPT ===============" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "--------------------------------------------" << endl;
    cout << left << setw(20) << "Item Name"
         << setw(10) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;
    cout << "--------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(20) << items[i].name
             << setw(10) << items[i].quantity
             << setw(10) << fixed << setprecision(2) << items[i].price
             << setw(10) << fixed << setprecision(2) << items[i].total << endl;
    }

    cout << "--------------------------------------------" << endl;
    cout << setw(30) << left << "Subtotal:" << "₹" << fixed << setprecision(2) << grandTotal << endl;
    cout << setw(30) << left << "Discount (" + to_string((int)discountRate) + "%):" << "-₹" << discountAmount << endl;
    cout << setw(30) << left << "Amount After Discount:" << "₹" << amountAfterDiscount << endl;
    cout << setw(30) << left << "GST (18%):" << "+₹" << gstAmount << endl;
    cout << setw(30) << left << "Final Total:" << "₹" << finalAmount << endl;
    cout << "============================================" << endl;
    cout << "Thank you for shopping with us, " << customerName << "!" << endl;
    cout << "============================================" << endl;

    return 0;
}
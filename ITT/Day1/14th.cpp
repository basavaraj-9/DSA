#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double branding, travel, food, logistics;
    double total;

    // Input values
    cin >> branding;
    cin >> travel;
    cin >> food;
    cin >> logistics;

    // Calculate total
    total = branding + travel + food + logistics;

    // Output with 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Total expenses : Rs." << total << endl;

    cout << "Branding expenses percentage : "
         << (branding / total) * 100 << "%" << endl;

    cout << "Travel expenses percentage : "
         << (travel / total) * 100 << "%" << endl;

    cout << "Food expenses percentage : "
         << (food / total) * 100 << "%" << endl;

    cout << "Logistics expenses percentage : "
         << (logistics / total) * 100 << "%" << endl;

    return 0;
}

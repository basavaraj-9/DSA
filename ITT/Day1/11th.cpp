#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string eventName, eventType;
    int expectedCount;
    char paidEntry;
    double expenses;

    getline(cin, eventName);
    getline(cin, eventType);
    cin >> expectedCount;
    cin >> paidEntry;
    cin >> expenses;

    cout << "Event Name : " << eventName << endl;
    cout << "Event Type : " << eventType << endl;
    cout << "Expected Count : " << expectedCount << endl;
    cout << "Paid Entry : " << paidEntry << endl;
    cout << "Projected Expense : " << expenses << "L" << endl;

    return 0;
}

#include <iostream>
using namespace std;
struct SalesRecord {
    string month;
    float amount;
};
int main() {
    SalesRecord sales[12];
    cout << "Enter sales data for each month:\n";
    for (int i = 0; i < 12; ++i) {
        cout << "Month " << i + 1 << " Name: ";
        cin >> sales[i].month;
        cout << "Sales Amount: ";
        cin >> sales[i].amount;
    }
    int max = 0;
    int min = 0;
    for (int i = 1; i < 12; ++i) {
        if (sales[i].amount > sales[max].amount) {
            max = i;
        }
        if (sales[i].amount < sales[min].amount) {
            min = i;
        }
    }
    cout << "\nMonth with maximum sales: " << sales[max].month
         << " with amount " << sales[max].amount << endl;
    cout << "Month with minimum sales: " << sales[min].month
         << " with amount " << sales[min].amount << endl;

    return 0;
}

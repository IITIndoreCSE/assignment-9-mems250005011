#include <iostream>
using namespace std;
struct Item {
    int id;
    float cost;
};
int main() {
    Item items[6] = {
        {101, 75.50},
        {102, 45.00},
        {103, 60.25},
        {104, 30.00},
        {},{}
    };
    for (int i = 0; i < 6; ++i) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }
    return 0;
}

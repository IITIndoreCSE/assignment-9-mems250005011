
#include <iostream>
using namespace std;
struct Point {
    float x;
    float y;
};
int main() {
    Point points[7];
    cout << "Enter coordinates for 7 points (x,y):" << endl;
    for (int i = 0; i < 7; ++i) {
        cout << "Point " << (i + 1) << " - x:";
        cin >> points[i].x;
        cout << "Point " << (i + 1) << " - y:";
        cin >> points[i].y;
    }
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        if (points[i].x > 0 and points[i].y > 0) {
            sum++;
        }
    }
    cout << "Number of points in the first quadrant: " << sum << endl;

    return 0;
}

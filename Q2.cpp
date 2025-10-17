
#include <iostream>
using namespace std;
struct Color {
    int red;
    int green;
    int blue;
};
int main() {
    Color colors[5] = {
        {100, 150, 200},
        {50, 75, 125},
        {0, 0, 0},
        {255, 255, 255},
        {30, 60, 90}
    };
    for (int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i + 1 << ": "
             << "Red = " << colors[i].red << ", "
             << "Green = " << colors[i].green << ", "
             << "Blue = " << colors[i].blue << endl;
    }

    return 0;
}

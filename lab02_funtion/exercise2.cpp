#include <iostream>
using namespace std;

int areaRectangle(int length, int width) {
    return length * width;
}

int main() {
    int length, width, area;

    cout << "---------------- CALCULATE RECTANGLE ----------------" << endl;

    cout << "Enter length : ";
    cin >> length;

    cout << "Enter width : ";
    cin >> width;

    area = areaRectangle(length, width);

    cout << "\nThe area of the rectangle is: " << area << endl;

    cout << "---------------- END OF PROGRAM ----------------" << endl;

    return 0;
}
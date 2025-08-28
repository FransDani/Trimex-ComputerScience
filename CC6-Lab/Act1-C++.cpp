#include <iostream>
using namespace std;

class Rectangle {
private:
    float lngth;
    float wdth;

public:
    // 
    Rectangle(float l, float w) {
        lngth = l;
        wdth = w;
    }

    // Method to calculate area
    float area() {
        return lngth * wdth;
    }
};

int main() {
    float l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Rectangle rect(l, w); // create an object
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}

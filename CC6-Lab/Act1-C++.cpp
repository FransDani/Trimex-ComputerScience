#include <iostream>
using namespace std;

class Rectangle { //Rectangle class is created with private attributes (lngth, wdth)
private:
    float lngth;
    float wdth;

public:
    // Declare
    Rectangle(float l, float w) {
        lngth = l;
        wdth = w;
    }

    // To calculate area
    float area() { //method area() that calculates the rectangle’s area.
        return lngth * wdth;
    }
};

int main() { //main() function we use user input to create a Rectangle object and then print the result.
    float l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Rectangle rect(l, w); // create an object
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}

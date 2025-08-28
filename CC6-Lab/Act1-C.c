// Instruction to print the area of a rectangle

#include <stdio.h>

int main() {
    float lngt, wdth, area; //lngt for length, wdth for width
    printf("Enter Length: ");
    scanf("%f", &lngt);
    printf("Enter Width: ");
    scanf("%f", &wdth);
    area = lngt * wdth;
    printf("Area of rectangle: %.2f\n", area); //Print the area as a floating number with 2 decimal places, move to the next line.
    return 0;
}

//%f → placeholder for a floating-point number (like 3.14159)
//.2 → precision specifier: means "show exactly 2 digits after the decimal point".
// \n → newline character (moves the cursor to the next line after printing).

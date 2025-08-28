class Rectangle:
    def __init__(self, length, width):
        # Constructor: initializes object data
        self.length = length
        self.width = width

    def area(self):
        # Method to calculate area
        return self.length * self.width


# Main program
l = float(input("Enter length: "))
w = float(input("Enter width: "))

rect = Rectangle(l, w)  # Create object
print("Area of rectangle:", rect.area())

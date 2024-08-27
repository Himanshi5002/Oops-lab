#include <iostream>
#include <cmath>

class Circle {
private:
    double radius;

public:
    // Member function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Member function to calculate the area
    double calculateArea() {
        return M_PI * radius * radius;
    }

    // Member function to get the radius (optional)
    double getRadius() {
        return radius;
    }
};

int main() {
    Circle circle;  // Create an object of the Circle class
    double r;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;

    circle.setRadius(r);  // Set the radius using the member function

    // Calculate and display the area
    std::cout << "The area of the circle is: " << circle.calculateArea() << std::endl;

    return 0;
}

#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
protected:
    int ShapeLength;
    int ShapeWidth;

public:
    Shape(int l = 0, int w = 0) : ShapeLength(l), ShapeWidth(w) {}

    int GetLength() const {
        return ShapeLength;
    }

    int GetWidth() const {
        return ShapeWidth;
    }

    virtual int GetPerimeter() const = 0; // Pure virtual function
};

// Derived class Square
class Square : public Shape {
public:
    Square(int l) : Shape(l, l) {}

    int GetPerimeter() const override {
        return 4 * ShapeLength;
    }

    friend double Circle(Square sq);
};

// Derived class Rectangle
class Rectangle : public Shape {
public:
    Rectangle(int l, int w) : Shape(l, w) {}

    int GetPerimeter() const override {
        return 2 * (ShapeLength + ShapeWidth);
    }
};

// Friend function to calculate the circumference of a circle
double Circle(Square sq) {
    int radius = sq.ShapeLength;
    return 2 * 3.14 * radius;
}

int main() {
    Square sq(10);
    Rectangle rect(10, 5);

    cout << "Square Length: " << sq.GetLength() << endl;
    cout << "Square Perimeter: " << sq.GetPerimeter() << endl;

    cout << "Rectangle Length: " << rect.GetLength() << endl;
    cout << "Rectangle Width: " << rect.GetWidth() << endl;
    cout << "Rectangle Perimeter: " << rect.GetPerimeter() << endl;

    cout << "Circle Circumference from Square Side: " << Circle(sq) << endl;

    return 0;
}
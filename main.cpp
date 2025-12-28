#include <iostream>
using namespace std;

class Shape{
public:
    virtual void area(){
        cout << "Area of shape is undefined." << endl;
    }
    
    virtual ~Shape() {}
};

class Rectangle : public Shape{
private:
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Circle : public Shape{
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }
};

int main() {
    Shape* s1;
    Shape* s2;

    Rectangle r(5, 4);
    Circle c(3);

    s1 = &r;
    s2 = &c;

    s1 -> area();
    s2 -> area();

    return 0;
}
#include <iostream>
using namespace std;

class Shape{
public:
    virtual void area() = 0;    
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
    Shape* shape = nullptr;
    int choice;

    cout << "Choose Shape : \n";
    cout << "1. Rectangle \n";
    cout << "2. Circle \n";
    cout << "Enter choice: ";
    cin >> choice ;

    if (choice == 1){
        float l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;

        shape = new Rectangle(l, w);
    }
    else if (choice == 2) {
        float r;
        cout << "Enter radius: ";
        cin >> r;

        shape = new Circle(r);
    }
    else {
        cout << "Invalid choice !" << endl;
        return 0;
    }

    shape -> area();

    delete shape;
    return 0;
}
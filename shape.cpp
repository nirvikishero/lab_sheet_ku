#include<iostream>
#include<cctype> //for lower case check
#include<string>  // Include string for std::string
using namespace std;

class Shape {
protected:
    double side1, side2;
public:
    void getdata(double s1, double s2) {
        side1 = s1;
        side2 = s2;
    }
    virtual void area_display() = 0; // Pure virtual function
};

class Triangle : public Shape {
public:
    void area_display() {
        cout << "The area of Triangle is: " << 0.5 * side1 * side2 << endl;
    }
};

class Rectangle : public Shape {
public:
    void area_display() {
        cout << "The area of Rectangle is: " << side1 * side2 << endl;
    }
};

int main() {
    double m, n;
    string input;
    cout << "Triangle or Rectangle: ";
    cin >> input;

    //  input to lowercase
    for (char &c : input) {
        c = tolower(c);
    }

    while (true) {
        if (input == "triangle") {
            cout << "Enter the base and height [b h]: ";
            cin >> m >> n;
            Triangle triangle;
            triangle.getdata(m, n);
            triangle.area_display();
            break;
        } else if (input == "rectangle") {
            cout << "Enter the length and breadth: ";
            cin >> m >> n;
            Rectangle rectangle;
            rectangle.getdata(m, n);
            rectangle.area_display();
            break;
        } else {
            cout << "Choose correctly!!!!" << endl;
            cout << "Triangle or Rectangle: ";
            cin >> input;
            for (char &c : input) {
                c = tolower(c);
            }
        }
    }
    return 0;
}

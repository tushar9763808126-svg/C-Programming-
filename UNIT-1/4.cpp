#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
    float length, breadth, area, perimeter;

public:

    void getDimensions()
    {
        cout << "Enter Rectangle Length: ";
        cin >> length;

        cout << "Enter Rectangle Breadth: ";
        cin >> breadth;
    }

    void calcArea()
    {
        area = length * breadth;
    }

    void calcPerimeter()
    {
        perimeter = 2 * (length + breadth);
    }

    void Display()
    {
        cout << "Length of Rectangle: " << length << endl;
        cout << "Breadth of Rectangle: " << breadth << endl;
        cout << "Area of Rectangle: " << area << endl;
        cout << "Perimeter of Rectangle: " << perimeter << endl;
    }
};

int main()
{
    Rectangle r1;

    r1.getDimensions();
    r1.calcArea();
    r1.calcPerimeter();
    r1.Display();

    return 0;
}
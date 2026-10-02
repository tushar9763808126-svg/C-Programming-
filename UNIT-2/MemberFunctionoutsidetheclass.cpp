#include <iostream>
using namespace std;

class Student {
public:
    void display(); // Function declaration
};

// Function definition outside the class
void Student::display() {
    cout << "Hello";
}

int main() {
    Student s;
    s.display();

    return 0;
}
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    // Default Constructor
    Student() {
        marks = 0;
    }

    // Parameterized Constructor
    Student(int m) {
        marks = m;
    }

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    // Object using Default Constructor
    Student s1;

    // Object using Parameterized Constructor
    Student s2(85);

    cout << "Student 1:" << endl;
    s1.display();

    cout << "Student 2:" << endl;
    s2.display();

    return 0;
}
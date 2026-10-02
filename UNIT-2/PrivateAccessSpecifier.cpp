#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

public:
    void setMarks(int m)
    {
        marks = m;
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student s1;

    // Setting marks using public member function
    s1.setMarks(85);

    // Getting marks using public member function
    cout << "Student Marks = " << s1.getMarks() << endl;

    return 0;
}
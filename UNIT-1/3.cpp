#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;

public:

    void Display()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Hello " << name << endl;
    }
};

int main()
{
    Student s1[3];

    s1[0].Display();
    s1[1].Display();
    s1[2].Display();

    return 0;
}
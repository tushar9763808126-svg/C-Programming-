#include <iostream>
#include <string>
using namespace std;

class Student
{
    int rollno;
    string name, result;
    float marks_sub1, marks_sub2, marks_sub3, total, percent;

public:

    void acceptDetails()
    {
        cout << "Enter Student Roll No: ";
        cin >> rollno;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter marks of Subject 1: ";
        cin >> marks_sub1;

        cout << "Enter marks of Subject 2: ";
        cin >> marks_sub2;

        cout << "Enter marks of Subject 3: ";
        cin >> marks_sub3;
    }

    void calcResult()
    {
        total = marks_sub1 + marks_sub2 + marks_sub3;
        percent = (total / 300) * 100;

        if (percent > 60)
        {
            result = "First Class";
        }
        else if (percent > 50)
        {
            result = "Second Class";
        }
        else if (percent > 40)
        {
            result = "Pass";
        }
        else
        {
            result = "Fail";
        }
    }

    void displayInfo()
    {
        cout << "----Student Details----" << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks of Subject 1: " << marks_sub1 << endl;
        cout << "Marks of Subject 2: " << marks_sub2 << endl;
        cout << "Marks of Subject 3: " << marks_sub3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percent << "%" << endl;
        cout << "Result: " << result << endl;
    }
};

int main()
{
    Student s1;

    s1.acceptDetails();
    s1.calcResult();
    s1.displayInfo();

    return 0;
}
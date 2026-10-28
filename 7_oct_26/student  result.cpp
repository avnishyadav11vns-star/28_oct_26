#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;
  

public:
    void getstudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

       
    }
};

class Result : public Student
{
private:
    int marks;
    char grade;
    float percentage;

public:
    void getresult();
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3.0;
    }

    void display()
    {
        cout << "\n----- STUDENT RESULT -----" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No.   : " << rollNo << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 33)
            cout << "Result     : PASS" << endl;
        else
            cout << "Result     : FAIL" << endl;
    }
};

int main()
{
    Result student;

    student.getData();
    student.calculate();
    student.display();

    return 0;
}
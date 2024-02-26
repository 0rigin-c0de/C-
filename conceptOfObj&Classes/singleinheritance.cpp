#include <iostream.h>
#include <conio.h>

class Person
{
    char name[20];
    int age;

public:
    void read()
    {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    int rollno, marks;

public:
    void read1()
    {
        cout << "Enter the roll no: ";
        cin >> rollno;
        cout << "Enter the marks: ";
        cin >> marks;
    }

    void display1()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

void main()
{
    clrscr();
    Student s;
    s.read();
    s.read1();
    s.display();
    s.display1();
    getch();
}

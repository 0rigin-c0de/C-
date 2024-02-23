#include <iostream.h>
#include <conio.h>

class area
{
private:
    int length, breadth, side;

public:
    void read()
    {
        cout << "Enter the length \n";
        cin >> length;
        cout << "Enter the breadth \n";
        cin >> breadth;
        cout << "Enter the side \n";
        cin >> side;
    }
    void show()
    {
        cout << "Area of rectangle is =" << length * breadth << endl;
        cout << "\n Area of Square is =" << side * side << endl;
    }
};

void main()
{
    clrscr();
    area a;
    a.read();
    a.show();
    getch();
}

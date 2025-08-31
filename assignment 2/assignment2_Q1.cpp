#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int breath;
    int height;

public:
    Box(void) : length(0), breath(0), height(0)
    {}
    Box(int value) : length(value), breath(value), height(value)
    {}
    Box(int lenght, int breath, int height) : length(lenght), breath(breath), height(height)
    {}

    int calculateVolume()
    {
        return length * breath * height;
    }
};

int menuList()
{
    int choice;

    cout << "********************" << endl;
    cout << "0. exit" << endl;
    cout << "1. Calculate volume with default values" << endl;
    cout << "2. Calulate volume with length, breath and height with same values" << endl;
    cout << "3. Calculate volume with different values" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "*********************" << endl;
    return choice;
}

int main()
{

    int choice;
    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            Box b;
            cout << "volume with default values: " << b.calculateVolume() << endl;
            break;
        }

        case 2:
        {
            Box b2(5);
            cout << "volume with length, breath and height with same values: " << b2.calculateVolume() << endl;
            break;
        }

        case 3:
        {
            Box b3(2, 3, 4);
            cout << "volume with different value: " << b3.calculateVolume()<< endl;
            break;
        }

        default:
        {
            cout << "INVALID CHOICE";
            break;
        }
        }
    }
}

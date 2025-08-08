// Code for printing hollow rectangle shape of any size using * symbol

#include <iostream>
using namespace std;

void print(int height, int breadth)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < breadth; j++)

        {
            if (i == 0 || j == 0 || i == height - 1 || j == breadth - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int height, breadth;

    cout << "Enter height of the rectangle : ";
    cin >> height;

    cout << "Enter breadth of the rectangle : ";
    cin >> breadth;

    if (height <= 0 || breadth <= 0)

    {
        cout << "Invalid input!" << endl;
        return 1;
    }

    print(height, breadth);

    return 0;
}

/*

OUTPUT
Enter height of the rectangle : 4
Enter breadth of the rectangle : 5
* * * * *
*       *
*       *
* * * * *

*/
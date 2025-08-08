// Code for centering a hollow right tilted parallelogram of desired base and height using * symbol

#include <iostream>
using namespace std;

void print(int base, int height, int console_width, int console_height)
{
    if (base > console_width || base > console_height || height > console_width || height > console_height)

    {
        cout << "Line too long for console!" << endl;
        return;
    }

    int vertical_spaces = (console_height - height) / 2;
    int horizontal_spaces = (console_width - (base * 2)) / 2;

    for (int i = 0; i < vertical_spaces; i++)

    {
        cout << endl;
    }

    for (int i = 0; i < height; i++)

    {
        for (int j = 0; j < horizontal_spaces; j++)

        {
            cout << " ";
        }

        for (int j = 0; j < height - i - 1; j++)

        {
            cout << " ";
        }

        for (int j = 0; j < base; j++)

        {
            if (i == 0 || j == 0 || i == height - 1 || j == base - 1)

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
    int base, height;
    cout << "Enter the base of the parallelogram : ";
    cin >> base;

    cout << "Enter the height of the parallelogram : ";
    cin >> height;

    if (base <= 0 || height <= 0)

    {
        cout << "Invalid input case!" << endl;
        return 1;
    }

    print(base, height, 80, 24);

    return 0;
}

/*

OUTPUT
Enter the base of the parallelogram : 4
Enter the height of the parallelogram : 5


                   * * * *
                  *     *
                 *     *
                * * * *


*/
// Code for centering a hollow isosceles triangle of any size using * symbol

#include <iostream>
using namespace std;

void print(int n, int console_width, int console_height)
{
    if (n > console_width || n > console_height)

    {
        cout << "Line too long for console!" << endl;
        return;
    }

    int vertical_spaces = (console_height - n) / 2;
    int horizontal_spaces = (console_width - (2 * n - 1) * 2) / 2;

    for (int i = 0; i < vertical_spaces; i++)

    {
        cout << endl;
    }

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < horizontal_spaces; j++)

        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)

        {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i + 1; j++)

        {
            cout << "* ";
        }

        cout << endl;
    }
}

int main()

{
    int n;
    cout << "Enter the length : ";
    cin >> n;

    if (n <= 0)

    {
        cout << "Invalid input case!" << endl;
        return 1;
    }

    print(n, 80, 24);

    return 0;
}

/*
OUTPUT
Enter the length : 6



                                            *
                                          *   *
                                        *       *
                                      *           *
                                    *               *
                                  * * * * * * * * * * *



*/
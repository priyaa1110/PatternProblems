// Code for centering a half diamond triangle of any size using * symbol

#include <iostream>
using namespace std;

void print(int n, int console_width, int console_height)
{
    if ((2 * n - 1) > console_width || (2 * n - 1) > console_height)

    {
        cout << "Line too long for console!" << endl;
        return;
    }

    int vertical_spaces = (console_height - (2 * n - 1)) / 2;
    int horizontal_spaces = (console_width - (2 * n - 1)) / 2;

    if (vertical_spaces <= 0 || horizontal_spaces <= 0)
    
    {
        cout << "Improper inputs!" << endl;
        return;
    }

    for (int i = 1; i <= vertical_spaces; i++)

    {
        cout << endl;
    }

    for (int i = 1; i <= n; i++)

    {
        for (int j = 1; j <= horizontal_spaces; j++)

        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)

        {
            cout << "* ";
        }

        cout << endl;

    }

    for (int i = n - 1; i >= 1; i--)

    {

        for (int j = 1; j <= horizontal_spaces; j++)

        {
            cout << "  ";

        }

        for (int j = 1; j <= i; j++)

        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int i = 1; i <= vertical_spaces; i++)

    {
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
Enter the length : 5


                                   *
                                   * *
                                   * * *
                                   * * * *
                                   * * * * *
                                   * * * *
                                   * * *
                                   * *
                                   *



*/
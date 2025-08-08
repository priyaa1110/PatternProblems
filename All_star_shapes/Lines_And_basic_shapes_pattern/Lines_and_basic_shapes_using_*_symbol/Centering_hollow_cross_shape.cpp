#include <iostream>
using namespace std;

void print(int n, int console_width, int console_height)
{
    int mid = n / 2;

     if (n > console_width || n > console_height)
    {
        cout << "Line too long for console!" << endl;
        return ;
    }

    int vertical_spaces = (console_height - n) / 2;
    int horizontal_spaces = (console_width - 1) / 2;

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

        for (int j = 0; j < n; j++)

        {
            if ((i == j || i + j == n - 1) && !(i == mid && j == mid))

            {
                cout << "*";
            }

            else

            {
                cout << " ";
            }

        }

        cout << endl;

    }
}

int main()
{
    int n;
    cout << "Enter the odd length : ";
    cin >> n;

    if (n <= 1 || n % 2 == 0)
    {
        cout << "Invalid input case!" << endl;
        return 0;
    }
    print(n, 80, 24);
    return 0;
}

/*

OUTPUT
Enter the odd length : 5


                                       *   *
                                        * *

                                        * *
                                       *   *


*/
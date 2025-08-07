// Code for centering a vertical line of any length using * symbol

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of your vertical line : ";
    cin >> n; // User enters the input

    // For invalid input cases
    if (n <= 0)
    {
        cout << "Enter a positive number!" << endl;

        return 1; // Exit if input is invalid ( 1 and anyother non-zero number is used for invalid cases i.e unsuccessfull cases )
    }

    // Assuming standard console size (can vary on different systems)
    int console_width = 80;
    int console_height = 24;

    // Calculate vertical and horizontal spaces to center the line
    int vertical_spaces = (console_height - n) / 2;
    int horizontal_spaces = (console_width-1) / 2;

    // Loop for maintaining vertical spaces in console
    for (int i = 0; i < vertical_spaces; i++)
    {
        cout << endl;
    }

    // Print each line with horizontal spaces and then '*'
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < horizontal_spaces; j++)
        {
            cout << " ";
        }

        cout << "*" << endl;
    }
    return 0;
}

/*

OUTPUT
Enter the length of your vertical line : 4



                *
                *
                *
                *



*/
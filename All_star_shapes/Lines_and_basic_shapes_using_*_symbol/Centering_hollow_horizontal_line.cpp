// Code for centering a horizontal hollow line of any length using * symbol

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of your horizontal line : ";
    cin >> n;

    // For invalid input cases
    if (n <= 0)
    {
        cout << "Enter a positive number! " << endl;
        return 1;
    }

    // Assuming standard console size (can vary on different systems)
    int console_width = 80;
    int console_height = 24;

    if (n > console_width || n > console_height)
    {
        cout << "Line too long for console!" << endl;
        return 1;
    }

    int vertical_spaces = (console_height - 1) / 2;  // Calculate vertical space to center the line vertically
    int horizontal_spaces = (console_width - n) / 2; // Calculate horizontal space to center the line horizontally

    // Print blank lines to move the cursor vertically to the center
    for (int i = 0; i < vertical_spaces; i++)
    {
        cout << endl;
    }

    // Print spaces to move the cursor horizontally to the center
    for (int i = 0; i < horizontal_spaces; i++)
    {
        cout << " ";
    }

    for (int i = 0; i < n; i++) // Loop runs for n times
    {
        if (i == 0 || i == n - 1) // Checks condition
        {
            cout << "*"; // Prints * for the first and last position
        }
        else
        {
            cout << " "; // Prints spaces for the rest of the position
        }
    }

    // Moves the cursor to the next line
    cout << endl;

    return 0;
}

/*
OUTPUT
Enter the length of your horizontal line : 8



                  *       *



Note:
- You can change console_width and console_height according to your terminal settings.
*/

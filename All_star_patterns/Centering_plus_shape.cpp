//Code for centering a plus shape of any odd size using * symbol

#include <iostream>
using namespace std;

// Function to print a centered plus sign of size n
void print(int n, int console_width, int console_height)
{
    int mid = n / 2; // Middle index for both rows and columns

     if (n > console_width || n > console_height)
    {
        cout << "Line too long for console!" << endl;
        return ;
    }

    int vertical_spaces = (console_height - n) / 2; // Blank lines before the pattern (to center vertically)

    int horizontal_spaces = (console_width - n) / 2; // Spaces before each line (to center horizontally)

    {
        // Print blank lines to push pattern vertically to the center
        for (int j = 0; j < vertical_spaces; j++)
        {
            cout << endl;
        }

        // Print each row of the pattern
        for (int i = 0; i < n; i++)
        {
            // Print spaces before the pattern to center it horizontally
            for (int j = 0; j < horizontal_spaces; j++)
            {
                cout << " ";
            }

            // Print characters in each column
            for (int j = 0; j < n; j++)
            {

                // Print '*' if it's in the middle row or middle column
                if (i == mid || j == mid)
                {
                    cout << "*";
                }
                else
                {
                    cout << " "; // Otherwise, print space
                }
            }

            cout << endl; // Move to the next line after finishing a row
        }
    }
}
int main()
{
    int n;
    cout << "Enter the odd size : ";
    cin >> n; // Ask the user to input an odd number greater than 1

    // Validate input: Must be an odd number greater than 1
    if (n <= 1 || n % 2 == 0)
    {
        cout << "Invalid input case!" << endl;

        return 1;
    }

    // Call the function to print the pattern centered in a console of size 80x24
    print(n, 80, 24);

    return 0;
}

/*
OUTPUT
Enter the odd size : 5



             *
             *
           *****
             *
             *


*/
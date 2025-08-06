#include <iostream>
using namespace std;

// Function to print the centered hollow vertical line
void print(int n, int console_width, int console_height)
{

    // Calculate vertical and horizontal spacing to center the line
    int vertical_spaces = (console_height - n) / 2;
    int horizontal_spaces = (console_width) / 2;

    // Print empty lines to move the line vertically to center
    for (int i = 0; i < vertical_spaces; i++)
    {
        cout << endl;
    }

    // Loop to print each row of the vertical line
    for (int i = 0; i < n; i++)
    {

        // Print spaces to move the line horizontally to center
        for (int j = 0; j < horizontal_spaces; j++)
        {
            cout << " ";
        }

        // Print '*' at the first and last row, and space in between to make it hollow
        if (i == 0 || i == n - 1)
        {
            cout << "*" << endl;
        }
        else
        {
            cout << " " << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the length of your vertical line : ";
    cin >> n; // User enters the input

    // For invalid input case
    if (n <= 0)
    {
        cout << "Enter a positive number!" << endl;

        return 1; // Return 1 to indicate an unsuccessful case
    }
    // Assuming standard console size (can vary on different systems)
    int console_width = 80;

    int console_height = 24;

    // Call the function to print the pattern
    print(n, console_width, console_height);

    return 0; // Return 0 to indicate successful execution

}

/*

OUTPUT
Enter the length of your vertical line : 5
               


                    *
                    
                     
                     
                    * 



*/
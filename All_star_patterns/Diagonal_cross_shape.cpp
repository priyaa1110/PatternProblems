// Code for printing cross symbol of any length using * symbol

#include <iostream>
using namespace std;

// Function to print a cross shape
void print(int n)
{
    for (int i = 0; i < n; i++) // Loop through each row
    {
        for (int j = 0; j < n; j++) // Loop through each column

        {

            // Print '*' if it's on either the left or right diagonal
            if ((i == j) || (i + j == n - 1)) // Left diagonal: i==j, Right diagonal: i+j==n-1
            {
                cout << "*"; // Print star at diagonal positions
            }
            else
            {
                cout << " "; // Otherwise, print a space
            }
            
        }

        cout << endl; // Move to the next line after printing each row
    }
}

int main()
{
    int n;
    cout << "Enter the odd length : ";
    cin >> n; // Take user input for size of the pattern

    // Check if input is a valid odd number greater than 1
    if (n <= 1 || n % 2 == 0)
    {
        cout << "Invalid input case!" << endl;

        return 1;
    }

    print(n); // Call the function

    return 0;
}

/*

OUTPUT
Enter the lemgth : 5
*   *
 * *
  *
 * *
*   *

 */
// Code for printing a hollow plus (+) sign of any odd length using * symbol

#include <iostream>
using namespace std;

// Function to print the plus sign pattern
void print(int n)
{
    int mid = n / 2; // Calculate the middle index of the grid

    // Loop through each row
    for (int i = 0; i < n; i++)
    {

        // Loop through each column
        for (int j = 0; j < n; j++)
        {

            // Print '*' if the current position is in the middle row or column
            // but not at the exact center (to leave the center empty)
            if ((i == mid || j == mid) && !(i == mid && j == mid))
            {
                cout << "*";
            }

            else
            {
                cout << " "; // Otherwise, print a space
            }
        }

        cout << endl; // Move to the next line after each row
    }
}

int main()
{
    int n;
    cout << "Enter the odd size : ";
    cin >> n; // Take input from the user

    // Validate input: n must be a positive odd number
    if (n < 1 || n % 2 == 0)
    {
        cout << "Invalid input!" << endl;
        return 1; // Exit if input is invalid
    }

    // Call the function to print the plus pattern
    print(n);

    return 0; // Successful execution
}


/*

OUTPUT
Enter the odd size : 5
  *
  *
** ** 
  * 
  * 
  
  Note: The center is left empty to create a 'hollow' plus pattern.
*/

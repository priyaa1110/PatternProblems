//Code for printing a hollow horizontal line of any length using * symbol

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of your horizontal line : ";
    cin >> n; // User enters the input

    // For Invalid input cases
    if (n <= 0)
    {
        cout << "Please enter a positive number!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) // Loop runs for  n times
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
Enter the length of your horizontal line : 7
*     *
*/

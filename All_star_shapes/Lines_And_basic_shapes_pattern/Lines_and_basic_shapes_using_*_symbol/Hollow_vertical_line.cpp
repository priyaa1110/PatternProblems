// Code for printing a hollow vertical line of any length using * symbol

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

    for (int i = 0; i < n; i++) // Loop runs for n times
    {
        if (i == 0 || i == n - 1) // Checks condition
        {
            cout << "*" << endl; // Print a star and move cursor to the next line
        }
        else
        {
            cout << endl; // Print a space and move cursor to the next line
        }
    }
    return 0;
}

/*


OUTPUT
Enter the length of your vertical line : 7
*





*


*/
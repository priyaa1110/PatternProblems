// Code for printing only the edges of a hollow plus (+) sign of any odd length using * symbol

#include <iostream>
using namespace std;

void print(int n)
{
    int mid = n / 2;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            if ((i == 0 && j == mid) || (i == n - 1 && j == mid) || (i == mid && j == 0) || (i == mid && j == n - 1))

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
        cout << "Enter the odd size : ";
        cin >> n;

        if (n < 1 || n % 2 == 0)
        {
            cout << "Invalid input!" << endl;
            return 1;
        }

        print(n);

        return 0;
    }

    /*

    OUTPUT
    Enter the odd size : 5
      *

    *   *

      *

     
    */

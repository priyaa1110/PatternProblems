// Code for printing a hollow isosceles triangle shape of any size using * symbol

#include <iostream>
using namespace std;

void print(int n)

{

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n - i - 1; j++)

        {
            cout << "  ";
        }

        for (int j = 0; j < 2 * i + 1; j++)

        {
            if (j == 0 || i == n - 1 || j == i * 2)

            {
                cout << "* ";
            }

            else

            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

int main()

{
    int n;
    cout << "Enter the length : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input case!" << endl;
        return 1;
    }

    print(n);
    return 0;
    
}

/*

OUTPUT
Enter the length : 4
      *
    *   *
  *       *
* * * * * * *

*/
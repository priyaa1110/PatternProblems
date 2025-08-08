// Code for printing right aligned triangle of any size using * symbol

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

        for (int j = 0; j < i + 1; j++)

        {
            cout << "* ";
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
    * * 
  * * * 
* * * * 

*/
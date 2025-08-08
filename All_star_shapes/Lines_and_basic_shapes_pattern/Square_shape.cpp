// Code for printing square shape of any size using * symbol

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

stringstream buffer; 

void print(int n)
{

    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n; j++)

        {
            cout << "* ";
             buffer << "* "; 
        }

        cout << endl;
        buffer << "\n";
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

// WebAssembly-compatible function
extern "C"
{
    const char* run(int n)
    {
        static string result;      // ✅ Declare 'result' as static string
        buffer.str("");            // Clear buffer content
        buffer.clear();            // Clear buffer state

        if (n <= 0)
        {
            buffer << "Invalid input case!\n";
        }
        else
        {
            print(n);              // Print into buffer
        }

        result = buffer.str();     // Copy buffer to static string
        return result.c_str();     // Return the char* safely
    }
}


/*

OUTPUT
Enter the length : 4
* * * *
* * * *
* * * *
* * * *

*/
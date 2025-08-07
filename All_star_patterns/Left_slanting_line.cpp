#include<iostream>
using namespace std;

// Function to print a left slanting line (diagonal from top-left to bottom-right)
void print(int  n)
{
for (int i =0; i<n; i++)   // Loop through each row
{ 
    for (int j=0; j<n; j++)   // Loop through each column
    {
        if (i==j)  // If row index equals column index, it's on the left diagonal
        {
            cout<<"*";
        }
        else{
            cout<<" ";  // Otherwise, print a space
        }

    }
    cout<<endl;  // Move to the next line after printing each row
}
}

int main()
{
    int n;
    cout<<"Enter the length : ";
    cin>>n;  // Take user input for size of the pattern
     

    // Check if the input is valid (positive number)
    if(n<=0)
    {
        cout<<"Invalid input case!"<<endl;

        return 1;
    }

    print(n);  // Call the function to print the left slanting line

    return 0;
}

/*

OUTPUT
Enter the lemgth : 5
*
  *
    *
      *
        *

 */
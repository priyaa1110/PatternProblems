//Code for centering right slanting line of any length using * symbol 

#include<iostream>
using namespace std;


// Function to print a centered right slanting line 
void print(int  n, int console_width, int console_height)
{
    int vertical_spaces =(console_height-n)/2;
    int horizontal_spaces = (console_width-1)/2;

    for (int i=0; i<vertical_spaces; i++)
    {
        cout<<endl;
    }


for (int i =0; i<n; i++)   // Loop through each row
{ 
    for(int j=0; j<horizontal_spaces; j++)
{
    cout<<" ";
}
    for (int j=0; j<n; j++)   // Loop through each column
    {
        if (i+j ==n-1)  // Condition to check right diagonal (i + j == n - 1)
        {
            cout<<"*";  // Print star at the right slanting position
               break; // stop printing further spaces
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

    print(n, 80, 24);  // Call the function to print the right slanting line

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
//Code for centering left slanting line of any length using * symbol 

#include<iostream>
using namespace std;


// Function to print a centered left slanting line (diagonal from top-left to bottom-right)
void print(int  n, int console_width, int console_height)
{
     if (n > console_width || n > console_height)
    {
        cout << "Line too long for console!" << endl;
        return ;
    }

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
        if (i==j)  // If row index equals column index, it's on the left diagonal
        {
            cout<<"*";  // Print star at the left slanting position
            break;  // No need to print more spaces after *
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

    print(n, 80, 24);  // Call the function to print the left slanting line

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
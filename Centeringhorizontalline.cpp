//##Centering a horizontal line of any length at the center of a console using * symbol with spaces##


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of your horizontal line : ";
    cin>>n;

    // Assuming standard console size (can vary on different systems)
    int console_width = 80;
    int console_height = 24;
     
  // Calculate vertical space to center the line vertically
    int vertical_spaces = (console_height - 1)/2;

     // Calculate horizontal space to center the line horizontally
    int horizontal_spaces = (console_width - n)/2;


    // Print blank lines to move the cursor vertically to the center
    for (int i =0; i<vertical_spaces; i++)
    {
        cout<<endl;
    }

     // Print spaces to move the cursor horizontally to the center
    for (int i = 0; i<horizontal_spaces; i++)
    {
        cout<<" ";
    }
    // Print the horizontal line of stars
    for (int i=0; i<n; i++)
    {
        cout<<"*";
    }
    
    // Move to the next line after printing
    cout<<endl;

    return 0;

}
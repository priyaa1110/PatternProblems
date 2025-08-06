//Code for printing a simple horizontal line of any length using * symbol

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of horizontal line : ";
    cin>>n; //Takes input from the user.
    for (int i=0 ; i<n; i++) //Loop runs n times
    {
        cout<<"* "; //Print * n times with a space

    }
    cout<<endl; //Moves the cursor to the next line
    
    return 0;
}

/*
OUTPUT
Enter the length of horizontal line : 7
* * * * * * *
*/

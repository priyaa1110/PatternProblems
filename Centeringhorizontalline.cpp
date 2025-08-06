#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of your horizontal line : ";
    cin>>n;

    int console_width = 80;
    int console_height = 24;
     
  
    int vertical_spaces = (console_height - 1)/2;
    int horizontal_spaces = (console_width - n)/2;

    for (int i =0; i<vertical_spaces; i++)
    {
        cout<<endl;
    }
    for (int i = 0; i<horizontal_spaces; i++)
    {
        cout<<" ";
    }
    for (int i=0; i<n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    return 0;

}
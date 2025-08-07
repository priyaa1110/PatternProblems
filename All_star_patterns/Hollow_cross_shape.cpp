//Code for printing a hollow cross shape of any length using * symbol

#include<iostream>
using namespace std;

void print (int n)
{ int mid= n/2;
for (int i =0; i<n; i++)
{
    for (int j=0; j<n; j++)
    {
        if( (i==j ||i+j==n-1) && !(i==mid && j ==mid))
        {
            cout<<"*";
            
        }
       
        else 
        {
            cout<<" ";
        }

    }
    cout<<endl;
}
}

int main ()
{
    int n;
    cout<<"Enter the odd length : ";
    cin>>n;

    if(n<=1 || n%2==0)
    {
        cout<<"Invalid input case!"<<endl;
        return 1;
    }

    print(n);
    return 0;
}

/*

OUTPUT
Enter the odd length : 5
*   *
 * *
 
 * *
*   *

*/
//Code for printing half diamond of any size using * symbol

#include<iostream>
using namespace std;

void print (int n)
{
 for (int i=1; i<=n; i++)
 {
    for (int j =1; j<=i ;j++)
    {
        cout<<"* ";
    }
    cout<<endl;

 }
 for (int i= n-1; i>=1 ; i--)
 {
    for (int j=1; j<=i; j++ )
    {
        cout<<"* "; 
    }
    cout<<endl;
 }
}

int main ()
{
    int n;
    cout<<"Enter the length : ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Invalid input case!"<<endl;
        return 0;
    }

    print(n);

    return 0;
}

/*

OUTPUT
Enter the length : 5
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * 
* * * 
* * 
* 


*/
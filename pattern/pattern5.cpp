#include<iostream>
using namespace  std;
int main()
{
    int n = 4;
    // cout<<"Enter the number of rows : ";
    // cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<"  ";   
        }
        for (int j = i+1; j >= 1; j--)
        {
            cout<<j<<" ";   
        }
        for (int j = 2; j <= i+1; j++)
        {
            cout<<j<<" ";   
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"  ";   
        }
        for (int j = n-i-1; j >= 1; j--)
        {
            cout<<j<<" ";   
        }
        for (int j = 2; j <= n-i-1; j++)
        {
            cout<<j<<" ";   
        }
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        //space
        for (int j = 0; j < n-i; j++)
        {
            cout<<" ";
        }
        //numbers
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1;
        }
        //reverse numbers
        for (int j = i; j >= 1 ; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
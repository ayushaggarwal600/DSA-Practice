#include <iostream>
using namespace std;
int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (j==0 && i==0){
                cout<<"*"<<j+1<<"*";
            }
            else if(j==0)
            {
                cout<<"*"<<j+1;
            }
            else{
                cout<<j+1;
            }
        }
        for (int j = i; j > 0; j--)
        {
            if (j==1){
                cout<<j<<"*";
            }
            else{
                cout<<j;
            }
            // cout<<j;
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (j==0 && i==n-2){
                cout<<"*"<<j+1<<"*";
            }
            else if(j==0)
            {
                cout<<"*"<<j+1;
            }
            else{
                cout<<j+1;
            }
        }
        for (int j = n-i-2; j >= 1; j--)
        {
            if (j==1){
                cout<<j<<"*";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}
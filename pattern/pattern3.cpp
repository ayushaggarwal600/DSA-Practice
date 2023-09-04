#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (i == 0 || i == n-1)
            {
                cout<<count<<" ";
            }
            else
            {
                if (j==0||j==n-i-1)
                {
                    cout<<count<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            count++;
        }
        cout<<endl;
        count=i+2;
    }
    
    return 0;
}
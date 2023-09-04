#include <iostream>
using namespace std;
int main(){
    int n = 5;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (i == 0 || i == n-1)
            {
                cout<<count;
            }
            else
            {
                if (j==0||j==i+1-1)
                {
                    cout<<count<<" ";
                }
                else
                {
                    cout<<" ";
                }
            }
            count++;
        }
        cout<<endl;
        count=1;
    }
    
    return 0;
}
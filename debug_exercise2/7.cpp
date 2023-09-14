/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    // cin>>n;
    int i = 0;
    int gaps = n - 1;
    while (i < n)
    {
        int k = 0, gaps = n - i;
        while (k < gaps)
        {
            cout << k + 1;
            k++;
        }
        // int num = i+1;
        // while(num>0){
        //     cout<<"*";
        //     num = num - 1;
        // }
        k = 2;
        while (k <= (i + 1))
        {
            cout << "**";
            k++;
        }
        k = n - i;
        while (k >= 1)
        {
            cout << k;
            k--;
        }
        i++;
        cout << "\n";
    }
    return 0;
}
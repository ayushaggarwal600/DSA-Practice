/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
#include<iostream>
using namespace std;

int main() {
    int i,j,n=5;
    // cin>>n;
    for(i=1;i<=n;i++){
        char p='E'-i+1;
        for(j=1;j<=i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}
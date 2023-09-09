#include<iostream>
using namespace std;
void reverseArray(int arr[],int size)
{
    for (int i = 0; i < size/2 ; i++)
    {
        swap(arr[i],arr[size-i-1]);
    }

    cout<<"Printing Reverse Array : "<<endl;

    for (int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main ()
{
    int arr[]={10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    reverseArray(arr,size);
    return 0;
}
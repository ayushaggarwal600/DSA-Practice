#include<iostream>
#include<vector>
using namespace std;
void shiftArrayKTimes(int arr[],int size,int k)
{
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[size-i-1];
    }
    for (int i = size-1; i-k >= 0; i--)
    {
        arr[i]=arr[i-k];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i]=temp[k-i-1];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}
int main ()
{
    int arr[]={10,20,30,40,50,60};
    // int arr1[6];
    // arr1 = arr;
    // vector<int> arr2(10,60);
    // vector<int> arr3(6);
    // arr3 = arr2;
    int size = sizeof(arr)/sizeof(int);
    shiftArrayKTimes(arr,size,3);
    return 0;
}
#include <iostream>
using namespace std;
void uniqueValue(int arr[], int size)
{
    int uniqueElement=0;
    for (int i = 0; i < size ; i++)
    {
        uniqueElement = uniqueElement^arr[i];
    }
    cout<<"Unique Element = "<<uniqueElement<<endl;
}
int main()
{
    int arr[] = {1,3,2,4,5,3,2,1};
    int size = sizeof(arr) / sizeof(int);
    uniqueValue(arr, size);
    return 0;
}
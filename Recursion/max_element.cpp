#include <iostream>
using namespace std;
void findMax(int arr[], int size, int &maxi, int i)
{
    if (i >= size)
        return;
    maxi = max(maxi, arr[i]);
    findMax(arr, size, maxi, i+1);
}
int main()
{
    int arr[] = {10, 5, 20, 4, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxi = INT_MIN;
    int index = 0;
    findMax(arr, size, maxi, index);
    cout << maxi;
    return 0;
}
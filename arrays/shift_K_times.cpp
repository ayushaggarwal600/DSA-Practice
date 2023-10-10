// #include<iostream>
// #include<vector>
// using namespace std;
// void shiftArrayKTimes(int arr[],int size,int k)
// {
//     int temp[k];
//     for (int i = 0; i < k; i++)
//     {
//         temp[i] = arr[size-i-1];
//     }
//     for (int i = size-1; i-k >= 0; i--)
//     {
//         arr[i]=arr[i-k];
//     }
//     for (int i = 0; i < k; i++)
//     {
//         arr[i]=temp[k-i-1];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     } 
// }
// int main ()
// {
//     int arr[]={10,20,30,40,50,60};
//     // int arr1[6];
//     // arr1 = arr;
//     // vector<int> arr2(10,60);
//     // vector<int> arr3(6);
//     // arr3 = arr2;
//     int size = sizeof(arr)/sizeof(int);
//     shiftArrayKTimes(arr,size,1);
//     return 0;
// }
#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend) {
  int s = 0;
  int e = dividend;
  int ans = -1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    
    if(mid * divisor == dividend) {
      return mid;
    }
    if(mid * divisor < dividend) {
      //ans store
      ans = mid;
      //right me jao
      s = mid+1;
    }
    else {
      //left
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return ans;
}

int main() {

  int divisor = 0;
  int dividend = 29;
  
  int ans = getQuotient(abs(divisor), abs(dividend));

  //now we need to decide k sign konsa lagaye +ve ya negative

  if((divisor >0 && dividend <0) || (divisor <0 && dividend > 0)) {
   ans = 0 - ans;
  }

  cout << "Final Ans is: " << ans << endl;
  return 0;
}
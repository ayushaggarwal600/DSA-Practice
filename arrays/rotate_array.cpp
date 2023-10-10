#include <iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
    int size=nums.size();
    
    // initializing a starting vector and adding values
    vector<int>startVector;
    if(size > k){
    for(int i=0;i<k;i++) {
        startVector.push_back(nums[size-k+i]);
    }
    
    for(int i=size-1;i>=k;i--) {
        swap(nums[i], nums[i-k]);
    }
    
    for(int i=0; i<k;i++) {
        nums[i] = startVector[i];
    }
    }
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    rotate(v,5);
    for(int i=0;i<2;i++ )
    {
        cout<<v[i]<<" ";
    }
    return 0;
}


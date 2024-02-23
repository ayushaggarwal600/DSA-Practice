#include <iostream>
#include <vector>
#include <string>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    int size = nums.size();

    // initializing a starting vector and adding values
    vector<int> startVector;
    if (size > k)
    {
        for (int i = 0; i < k; i++)
        {
            startVector.push_back(nums[size - k + i]);
        }

        for (int i = size - 1; i >= k; i--)
        {
            swap(nums[i], nums[i - k]);
        }

        for (int i = 0; i < k; i++)
        {
            nums[i] = startVector[i];
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    rotate(v, 3);
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }
    // cout<<endl;
    // int abbrr[5];
    // char abr[5];
    // vector<int>aabbrr(5);
    // string aabbr;
    // for(int i=0;i<4;i++ )
    // {
    //     cout<<aabbr[i]<<" "<<int(aabbr[i])<<endl;
    // }
    return 0;
}
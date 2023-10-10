#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void combineAns(vector<int> ans, int index, int size, int &finalNumber)
{
    if (index >= size)
    {
        cout<< finalNumber;
        return;
    }
    int lastNo = ans.back();
    ans.pop_back();
    finalNumber += lastNo * pow(10, index);
    combineAns(ans, index + 1, size, finalNumber);
    // return finalNumber;
}
int main()
{
    vector<int> ans{4, 2, 1, 7};
    int no=0;
    combineAns(ans, 0, 4, no);
    // cout<<combineAns(ans, 0, 4, no);
    return 0;
}
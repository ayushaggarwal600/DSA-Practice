#include <iostream>
#include <vector>
using namespace std;
void combineAns(string ans, int index, int size, int target)
{
    if (index >= size)
    {
        return;
    }
    
    combineAns(ans, index + 1, size, target);
    // return finalNumber;
}
int main()
{
    string str = "babbar";
    combineAns(str, 0, 4,'a');
    // cout<<combineAns(ans, 0, 4, no);
    return 0;
}
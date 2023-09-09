#include <iostream>
using namespace std;
int main()
{
    int num1 = 10, num2 = 20;
    cout<<"Before swapping : "<<num1<<" "<<num2<<endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    cout<<"After swapping : "<<num1<<" "<<num2<<endl;
    return 0;
}
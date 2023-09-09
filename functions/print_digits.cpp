#include <iostream>
using namespace std;
void printDigits(int No)
{
    int Rev = 0;
    while (No > 0)
    {
        int digit = No%10;
        Rev = Rev*10 + digit;
        No /= 10;
    }

    while (Rev > 0)
    {
        int digit = Rev%10;
        cout<<digit<<" ";
        Rev /= 10;
    }
}
int main()
{
    printDigits(641);
    return 0;
}
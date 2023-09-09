#include <iostream>
using namespace std;
int main()
{
    int n = 5, count = 0;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }

        // pattern
        count = i + 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << count << " ";
            count++;
        }

        // Reverse Pattern
        count = 2 * i;
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
    return 0;
}
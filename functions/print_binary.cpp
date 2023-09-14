#include <iostream>
#include <cmath>
using namespace std;
void printBinary(int decimalNo)
{
    int binary = 0, i = 0;
    while (decimalNo > 0)
    {
        // int bit = decimalNo%2;
        int bit = decimalNo & 1;
        binary = (bit * pow(10, i)) + binary;
        decimalNo = decimalNo >> 1;
        // decimalNo /= 2;
        i++;
    }
    
    cout << "Binary : " << binary << endl;
}
int main()
{
    printBinary(10);
    return 0;
}
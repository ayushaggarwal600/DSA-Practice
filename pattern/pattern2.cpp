#include <iostream>
using namespace std;
int main(){
    int nRow = 5;
    int nCol = 8;
    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            if (i == 0 || i == nRow-1)
            {
                cout<<"* ";
            }
            else
            {
                if (j==0||j==nCol-1)
                {
                    cout<<"* ";
                }
                else
                {
                    cout<<"  ";
                }
                
            }
        }
        cout<<endl;
    }
    
    return 0;
}
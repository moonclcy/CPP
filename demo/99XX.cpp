#include<iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "X" << j << "=" << i * j << " ";
        }
        
        cout << endl;
    }
    
    return 0;
}

#include<iostream>
using namespace std;
#include<string.h>
int main(){
    int score[3][3] = {100, 100, 100, 95, 50, 75, 56, 45, 68};

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += score[i][j];
        }
        
        cout << "di" << i+1 << "sorce:" << sum << endl; 
    }
    
    return 0;
} 
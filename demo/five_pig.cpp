#include<iostream>
using namespace std;

int main(){
    int arr[] = {300 ,100 ,200 ,300 ,500};
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max  = arr[i];
        }
        
    }
    cout << max << endl;

    return 0;
}
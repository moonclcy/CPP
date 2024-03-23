#include<iostream>
using namespace std;

void Sort(int *arr, int len){
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
    }
}

int main(){
    int arr[10] = { 4, 3, 9, 6, 1, 2, 6, 8, 9, 10};
    int len = sizeof(arr) / 4;
    Sort(arr , len);

    for (int p = 0; p < len; p++)
    {
        cout << arr[p] << endl;
    }
    return 0;
}
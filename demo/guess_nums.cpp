#include<iostream>
using namespace std;
#include<ctime>
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand()%100 + 1;
    //cout << num << endl;

    int val = 0;
    

    while (1)
    {

        cin >> val;
        if (val > num)
        {
        cout << "dale" << endl;
        }

        else if (val < num)
        {
            cout << "xiaole" << endl;
        }
        
        else if (val == num)
        {
            cout << "duile" << endl;
            break;
        }
        
    }
    return 0;
}

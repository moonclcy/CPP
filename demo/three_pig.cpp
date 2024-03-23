#include<iostream>
using namespace std ;
int main()
{
    int a = 0, b = 0, c = 0;
    cout << "输入小猪a的体重" << endl;
    cin >> a;

    cout << "输入小猪b的体重" << endl;
    cin >> b;

    cout << "输入小猪c的体重" << endl;
    cin >> c;

    int comp = 0;
    
    comp = a > b ? a : b;
    comp = comp > c ? comp : c;

    cout << comp << endl;
    return 0;
}

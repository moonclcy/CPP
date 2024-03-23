#include<iostream>
using namespace std;
#include<ctime>
#include<string.h>


struct hero
{
    string name;
    int age;
    string sex;
};


int main(){
    struct hero heroArray[5] = {
        {"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
    };

    for (int i = 0; i < 5; i++)
    {
        cout << "姓名" << heroArray[i].name << "年龄"  << heroArray[i].age << "性别" << heroArray[i].sex << endl;
    }
    
}



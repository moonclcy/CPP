#include<iostream>
using namespace std;
#include<string>
//菜单显示
void shwomenu() {
	cout << "1、添加联系人" << endl;
	cout << "2、显示联系人" << endl;
	cout << "3、删除联系人" << endl;
	cout << "4、查找联系人" << endl;
	cout << "5、修改联系人" << endl;
	cout << "6、清空联系人" << endl;
	cout << "0、退出通讯录" << endl;
}
//联系人结构体
struct Person
{
	string name;
	int sex;
	int age;
	string phone;
	string address;
};
//通讯录结构体
struct address_book
{
	struct Person personArray[1000];

	int size ;
};
//添加联系人
void addPerson(address_book * abs) {

	if (abs->size == 1000) {
		cout << "通讯录满了" << endl;
		return;
	}

	else
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->size].name = name;

		//性别
		int sex1 = 0;
		cout << "请输入姓别" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true)
		{
			cin >> sex1;
			if (sex1 == 1 || sex1 == 2)
			{
				abs->personArray[abs->size].sex = sex1;
				break;
			}

			else
			{
				cout << "输入有误，请重新输入" << endl;
				
			}
		}
		
		//年龄
		cout << "请输入年龄" << endl;
		int age1 = 0;
		cin >> age1;
		abs->personArray[abs->size].age = age1;

		//电话
		cout << "请输入联系电话" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[abs->size].phone = phone1;

		//住址
		cout << "请输入家庭住址" << endl;
		string address1;
		cin >> address1;
		abs->personArray[abs->size].address = address1;

		abs->size++;
		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}
}
//显示联系人
void lookPerson(address_book * abs) {

	if (abs->size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "姓名：" << abs->personArray[i].name << "\t";
			cout << "姓别：" << (abs->personArray[i].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[i].age << "\t";
			cout << "电话：" << abs->personArray[i].phone << "\t";
			cout << "住址：" << abs->personArray[i].address << endl;
		}

	}
	system("pause");
	system("cls");
}
//检测联系人
int detectPerson(address_book* abs, string name) {
	for (int i = 0; i < abs->size; i++)
	{
		if (abs->personArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
//删除联系人 
void delatePerson(address_book* abs) {
	cout << "请输入你要删除的联系人" << endl;

	string name;
	cin >> name;

	int temp = detectPerson(abs, name);

	if (temp != -1)
	{
		for (int i = temp; i < abs->size; i++)
		{
			//后面覆盖前面
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->size--;
		cout << "删除成功" << endl;
	}

	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
 }
//查找联系人
void findPerson(address_book* abs) {
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;
	int temp = detectPerson(abs, name);
	{
		if (temp != -1) {
			cout << "姓名：" << abs->personArray[temp].name << "\t";
			cout << "姓别：" << (abs->personArray[temp].sex == 1 ? "男" : "女") << "\t";
			cout << "年龄：" << abs->personArray[temp].age << "\t";
			cout << "电话：" << abs->personArray[temp].phone << "\t";
			cout << "住址：" << abs->personArray[temp].address << endl;
		}
		else
		{
			cout << "未查到此人" << endl;
		}

		system("pasue");
		system("cls");
	}
}
//修改联系人
void modifyPerson(address_book* abs) {
	cout << "请输入要修改的联系人" << endl;
	string name;
	cin >> name;

	int temp = detectPerson(abs, name);

	if (temp != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[temp].name = name;

		//性别
		int sex1 = 0;
		cout << "请输入姓别" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true)
		{
			cin >> sex1;
			if (sex1 == 1 || sex1 == 2)
			{
				abs->personArray[temp].sex = sex1;
				break;
			}

			else
			{
				cout << "输入有误，请重新输入" << endl;

			}
		}

		//年龄
		cout << "请输入年龄" << endl;
		int age1 = 0;
		cin >> age1;
		abs->personArray[temp].age = age1;

		//电话
		cout << "请输入联系电话" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[temp].phone = phone1;

		//住址
		cout << "请输入家庭住址" << endl;
		string address1;
		cin >> address1;
		abs->personArray[temp].address = address1;

		cout << "添加成功" << endl;

		system("pause");
		system("cls");
	}

	else
	{
		cout << "未找到该联系人" << endl;
	}
}
//清空联系人
void delateAll(address_book* abs) {
	abs->size = 0;
	cout << "已清空" << endl;
	system("pause");
	system("cls");
}
int main() {
	
	int select = 0;
	address_book abs;
	abs.size = 0;
	while (true)
	{
		//菜单
		shwomenu();

		cin >> select;

		switch (select)
		{

		case 1://添加
			addPerson(&abs);//利用地址传递
			break;
		case 2://显示
			lookPerson(&abs);
			break;
		case 3://删除
			delatePerson(&abs);
			break;
		case 4://查找
			findPerson(&abs);
			break;
		case 5://修改
			modifyPerson(&abs);
			break;
		case 6://清空
			delateAll(&abs);
			break;
		case 0://退出
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}



#include<iostream>
using namespace std;
#include<string>
//�˵���ʾ
void shwomenu() {
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "0���˳�ͨѶ¼" << endl;
}
//��ϵ�˽ṹ��
struct Person
{
	string name;
	int sex;
	int age;
	string phone;
	string address;
};
//ͨѶ¼�ṹ��
struct address_book
{
	struct Person personArray[1000];

	int size ;
};
//�����ϵ��
void addPerson(address_book * abs) {

	if (abs->size == 1000) {
		cout << "ͨѶ¼����" << endl;
		return;
	}

	else
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[abs->size].name = name;

		//�Ա�
		int sex1 = 0;
		cout << "�������ձ�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
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
				cout << "������������������" << endl;
				
			}
		}
		
		//����
		cout << "����������" << endl;
		int age1 = 0;
		cin >> age1;
		abs->personArray[abs->size].age = age1;

		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[abs->size].phone = phone1;

		//סַ
		cout << "�������ͥסַ" << endl;
		string address1;
		cin >> address1;
		abs->personArray[abs->size].address = address1;

		abs->size++;
		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}
}
//��ʾ��ϵ��
void lookPerson(address_book * abs) {

	if (abs->size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->size; i++)
		{
			cout << "������" << abs->personArray[i].name << "\t";
			cout << "�ձ�" << (abs->personArray[i].sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].age << "\t";
			cout << "�绰��" << abs->personArray[i].phone << "\t";
			cout << "סַ��" << abs->personArray[i].address << endl;
		}

	}
	system("pause");
	system("cls");
}
//�����ϵ��
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
//ɾ����ϵ�� 
void delatePerson(address_book* abs) {
	cout << "��������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;

	int temp = detectPerson(abs, name);

	if (temp != -1)
	{
		for (int i = temp; i < abs->size; i++)
		{
			//���渲��ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->size--;
		cout << "ɾ���ɹ�" << endl;
	}

	else
	{
		cout << "���޴���" << endl;
	}
	system("pause");
	system("cls");
 }
//������ϵ��
void findPerson(address_book* abs) {
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int temp = detectPerson(abs, name);
	{
		if (temp != -1) {
			cout << "������" << abs->personArray[temp].name << "\t";
			cout << "�ձ�" << (abs->personArray[temp].sex == 1 ? "��" : "Ů") << "\t";
			cout << "���䣺" << abs->personArray[temp].age << "\t";
			cout << "�绰��" << abs->personArray[temp].phone << "\t";
			cout << "סַ��" << abs->personArray[temp].address << endl;
		}
		else
		{
			cout << "δ�鵽����" << endl;
		}

		system("pasue");
		system("cls");
	}
}
//�޸���ϵ��
void modifyPerson(address_book* abs) {
	cout << "������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int temp = detectPerson(abs, name);

	if (temp != -1)
	{
		//����
		string name;
		cout << "����������" << endl;
		cin >> name;
		abs->personArray[temp].name = name;

		//�Ա�
		int sex1 = 0;
		cout << "�������ձ�" << endl;
		cout << "1 --- ��" << endl;
		cout << "2 --- Ů" << endl;
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
				cout << "������������������" << endl;

			}
		}

		//����
		cout << "����������" << endl;
		int age1 = 0;
		cin >> age1;
		abs->personArray[temp].age = age1;

		//�绰
		cout << "��������ϵ�绰" << endl;
		string phone1;
		cin >> phone1;
		abs->personArray[temp].phone = phone1;

		//סַ
		cout << "�������ͥסַ" << endl;
		string address1;
		cin >> address1;
		abs->personArray[temp].address = address1;

		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls");
	}

	else
	{
		cout << "δ�ҵ�����ϵ��" << endl;
	}
}
//�����ϵ��
void delateAll(address_book* abs) {
	abs->size = 0;
	cout << "�����" << endl;
	system("pause");
	system("cls");
}
int main() {
	
	int select = 0;
	address_book abs;
	abs.size = 0;
	while (true)
	{
		//�˵�
		shwomenu();

		cin >> select;

		switch (select)
		{

		case 1://���
			addPerson(&abs);//���õ�ַ����
			break;
		case 2://��ʾ
			lookPerson(&abs);
			break;
		case 3://ɾ��
			delatePerson(&abs);
			break;
		case 4://����
			findPerson(&abs);
			break;
		case 5://�޸�
			modifyPerson(&abs);
			break;
		case 6://���
			delateAll(&abs);
			break;
		case 0://�˳�
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");
	return 0;
}



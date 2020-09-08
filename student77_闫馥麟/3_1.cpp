#include<iostream>
#include<string.h>
using namespace std;

class Person
{
private:
	string name;
	string sex;
	string fathername;
	string mothername;
	Person* father;
	Person* mother;
public:
	Person();
	string get_name();
	void set_name(string str);
	string get_sex();
	void set_sex(string str);
	string get_fathername();
	void set_fathername(string str);
	string get_mothername();
	void set_mothername(string str);
	Person* get_father();
	void set_father(Person* p);
	Person* get_mother();
	void set_mother(Person* p);
};

Person::Person()
{
	father = NULL;
	mother = NULL;
}

string Person::get_name()
{
	return name;
}

void Person::set_name(string str)
{
	name = str;
}

string Person::get_sex()
{
	return sex;
}

void Person::set_sex(string str)
{
	sex = str;
}

string Person::get_fathername()
{
	return fathername;
}

void Person::set_fathername(string str)
{
	fathername=str;
}

string Person::get_mothername()
{
	return mothername;
}

void Person::set_mothername(string str)
{
	mothername=str;
}

Person* Person::get_father()
{
	return father;
}

void Person::set_father(Person* p)
{
	father = p;
}

Person* Person::get_mother()
{
	return mother;
}

void Person::set_mother(Person* p)
{
	mother = p;
}

void find1(string name,Person p1[],int num,int index)		//Ѱ���ֵܽ���
{
	Person p = p1[index];
	int flag1 = 0, flag2 = 1, flag3 = 1;
	for (int i = 0; i < num; i++)
	{
		if (i == index)
			continue;
		Person* f1 = p1[i].get_father();
		Person* f2 = p.get_father();
		if (f1 == NULL || f2 == NULL)
			continue;
		string str1 = f1->get_name();
		string str2 = f2->get_name();
		if (str1 == str2)
		{
			flag3 = 0;
			if (flag2)
			{
				cout << name << "���ֵܽ����У�";
				flag2 = 0;
			}
			if (flag1)
			{
				cout << "  " << p1[i].get_name();
			}
			else
			{
				cout << p1[i].get_name();
				flag1 = 1;
			}
		}
	}
	if (flag3)
	{
		cout << "δ��ѯ��" << name << "���ֵܽ���";
	}
	cout << endl;
}

void find2(Person p)		//Ѱ���游ĸ�����游ĸ
{
	if (p.get_fathername() != "0" && p.get_mothername() != "0")
	{
		//Ѱ���游ĸ
		Person* p1 = p.get_father();
		if (p1->get_fathername() != "0" && p1->get_mothername() != "0")
		{
			Person* p2 = p1->get_father();
			cout << "�游Ϊ:" << p2->get_name()<<" ";
			p2 = p1->get_mother();
			cout << "��ĸΪ:" << p2->get_name()<<" ";
		}
		else
		{
			cout << "δ��ѯ���游ĸ" << endl;
		}
		//Ѱ�����游ĸ
		p1 = p.get_mother();
		if (p1->get_fathername() != "0" && p1->get_mothername() != "0")
		{
			Person* p2 = p1->get_father();
			cout << "���游Ϊ:" << p2->get_name()<<" ";
			p2 = p1->get_mother();
			cout << "����ĸΪ:" << p2->get_name()<<" ";
		}
		else
		{
			cout << "δ��ѯ�����游ĸ" << endl;
		}
	}
	else
	{
		cout << "δ��ѯ���游ĸ�Լ����游ĸ" << endl;
	}
}

int main()
{
	int num;
	while (cout << "��������Ա������,����0���˳�" << endl, cin >> num && num)
	{
		cout << "���� �Ա� ���� ĸ�ף��޸�ĸ��Ϣ������0��" << endl;
		string name, sex, fathername, mothername;
		Person persons[num];
		for (int i = 0; i < num; i++)
		{
			cin >> name >> sex >> fathername >> mothername;
			persons[i].set_name(name);
			persons[i].set_sex(sex);
			persons[i].set_fathername(fathername);
			persons[i].set_mothername(mothername);
			if (fathername == "0" || mothername == "0")
				continue;
			else
			{
				for (int j = 0; j < num; j++)
				{
					if (j == i)
						continue;
					else if (persons[j].get_name() == fathername)
						persons[i].set_father(&persons[j]);
					else if (persons[j].get_name() == mothername)
						persons[i].set_mother(&persons[j]);
				}
			}
		}
		int cas;
		while (cout << endl << "Ѱ��ĳ���˵��ֵܽ����밴1��Ѱ��ĳ���˵��游ĸ�����游ĸ�밴2,��Ҫ������һ�����밴0" << endl,cin >> cas && cas)
		{
			switch (cas)
			{
			case 1:
			{
				int flag = 1;
				string name;
				cout << "����������˵�����" << endl;
				cin >> name;
				for (int i = 0; i < num; i++)
				{
					string str = persons[i].get_name();
					if (str == name)
					{
						find1(name, persons, num, i);
						flag = 0;
					}
				}
				if (flag)
					cout << "δ��ѯ������" << endl;
			}
			break;
			case 2:
			{
				int flag = 1;
				string name;
				cout << "����������˵�����" << endl;
				cin >> name;
				for (int i = 0; i < num; i++)
				{
					string str = persons[i].get_name();
					if ( str== name)
					{
						find2(persons[i]);
						flag = 0;
					}
				}
				if (flag)
					cout << "δ��ѯ������" << endl;
			}
			break;
			}
		}
	}
	return 0;
}

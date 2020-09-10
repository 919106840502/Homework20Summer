#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class File
{
	string name;
	string size;
	string date;
	string change_date;
public:
	File()
	{
		name = '\0';
		size = '\0';
		date = '\0';
		change_date = '\0';
	}
	File(string n, string s, string d, string cd);
	string get_name();
	void set_name(string str);
	string get_size();
	void set_size(string d);
	string get_date();
	void set_date(string str);
	string get_changedate();
	void set_changedate(string str);
};

File::File(string name, string size, string date, string change_date)
{
	this->name = name;
	this->size = size;
	this->date = date;
	this->change_date = change_date;
}

string File::get_name()
{
	return name;
}

void File::set_name(string str)
{
	name = str;
}

string File::get_size()
{
	return size;
}

void File::set_size(string d)
{
	size = d;
}

string File::get_date()
{
	return date;
}

void File::set_date(string str)
{
	date = str;
}

string File::get_changedate()
{
	return change_date;
}

void File::set_changedate(string str)
{
	change_date = str;
}

class MediaFile :public File
{
	string type;
	string time;
public:
	MediaFile()
	{
		type='\0';
		time='\0';
	}
	MediaFile(string type, string time, string name, string size, string date, string change_date) :File(name, size, date, change_date)
	{
		this->type = type;
		this->time = time;
	}
	string get_type()
	{
		return type;
	}
	void set_type(string str)
	{
		type = str;
	}
	string get_time()
	{
		return time;
	}
	void set_time(string str)
	{
		time = str;
	}
};

void print(MediaFile mf)
{
	cout << "�ļ�����" << mf.get_name() << endl;
	cout << "ý�����" << mf.get_type() << endl;
	cout << "��С��" << mf.get_size() << endl;
	cout << "�������ڣ�" << mf.get_date() << endl;
	cout << "�޸����ڣ�" << mf.get_changedate() << endl;
	cout << "����ʱ�䣺" << mf.get_time() << endl;
}

int main()
{
	int num;
	while (cout << "�����ļ�����������0���˳�" << endl , cin >> num && num)
	{
		vector <MediaFile> mf(num);
		cout << "�������ļ�����ý����𡢴�С���������ڡ��޸����ڡ�����ʱ��" << endl;
		for (int i = 0; i < num; i++)
		{
			string name, type, size, date, change_date, time;
			cin >> name >> type >> size >> date >> change_date >> time;
			mf[i].set_name(name);
			mf[i].set_type(type);
			mf[i].set_size(size);
			mf[i].set_date(date);
			mf[i].set_changedate(change_date);
			mf[i].set_time(time);
		}
		string str;
		while (cout << "���������ѯ���ļ��������롰���ء��Է�����һ����" << endl, cin >> str && str != "����")
		{
			int flag = 1;
			for (int i = 0; i < num; i++)
			{
				if (str == mf[i].get_name())
				{
					flag = 0;
					print(mf[i]);
					break;
				}
			}
			if (flag)
				cout << "δ��ѯ��" << endl;
		}
	}
	return 0;
}

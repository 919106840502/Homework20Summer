#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Person
{
public:
	Person();
	~Person();
	void findAncestor(Person * father, Person * mother) {
		cout << "���游Ϊ��" << mother->father->name << " ����ĸΪ" << mother->mother->name << endl;
		cout << "�游Ϊ��" << father->father->name << " ��ĸΪ" << father->mother->name << endl;
	}
	void findBS(Person p) {
		int l = p.father->children.size();
		vector<Person> bs = p.father->children;
		cout << "���˵��ֵܽ����У�" << endl;
		for (int i = 0; i < l; i++) {
			cout <<children[i].name<<" " ;
		}
	}
private:
	string name;
	int age;
	int sex;//0-male/1-female
	Person * father;
	Person * mother;
	vector<Person>  children;
};

Person::Person()
{
}

Person::~Person()
{
}





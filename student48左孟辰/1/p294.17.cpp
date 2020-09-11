#include <iostream>
#include <string>
using namespace std;
class Person
{
		string name;
		char sex;
		Person *father;
		Person *mother;
	public:
		Person(string name,char sex,Person *father=NULL,Person *mother=NULL)
		:name(name),sex(sex),father(father),mother(mother){};
		void grandparents()
		{
			if(father&&father->father)
			cout<<"�游:"<<father->father->name;
			if(father&&father->mother)
			cout<<"\n��ĸ:"<<father->mother->name;
			if(mother&&mother->father)
			cout<<"\n���游:"<<mother->father->name;
			if(mother&&mother->mother)
			cout<<"\n����ĸ:"<<mother->mother->name<<'\n';
		}
		void brotherorsister(Person &a)
		{
			if(a.father==father&&a.mother==mother)
			{
				if(a.sex=='M')
				cout<<a.name<<"���ֵ�\n";
				else
				cout<<a.name<<"�ǽ���\n";
			}
			else
				cout<<a.name<<"�����ֵܽ���\n";
		}
};

int main()
{
	Person p1("үү",'M',NULL,NULL),p2("����",'F',NULL,NULL),
 			p3("�⹫",'M',NULL,NULL),p4("����",'F',NULL,NULL),
 			p5("�ְ�",'M',&p1,&p2),p6("����",'F',&p3,&p4),
 			p7("��",'F',&p5,&p6),p8("���",'M',&p5,&p6);
	p7.grandparents();
	p7.brotherorsister(p6);
	p7.brotherorsister(p8);
	return 0;
}

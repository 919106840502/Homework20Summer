#include<iostream>
using namespace std;

class Person
{
	string name,sex;
	Person * father,* mother;
public:
	Person(string n, string s, Person *father=NULL, Person *mother=NULL)
	{
		name=n;
		sex=s;
		this->father=father;
		this->mother=mother;
	}
	Person *getFather(){return this->father;}
	Person *getMother(){return this->mother;}
	string getName(){return name;}
	~Person(){}
};

void isXDJM(Person p1, Person p2)
{
	if(p2.getFather()!=NULL&&p2.getMother()!=NULL)
	{
		if((p1.getFather()==p2.getFather()||(p1.getMother()==p2.getMother())))
	    cout<<p2.getName()<<" �� "<<p1.getName()<<" ���ֵܽ���"<<endl; 
	}
}

void isGrandfm(Person *a, Person *b)
{
	if(a->getFather()->getFather()==b)
	   	cout<<b->getName()<<" �� "<<a->getName()<<" ���游"<<endl;
	else  if(a->getFather()->getMother()==b)
	   	cout<<b->getName()<<" �� "<<a->getName()<<" ����ĸ"<<endl;
	else if(a->getMother()->getFather()==b)
		cout<<b->getName()<<" �� "<<a->getName()<<" �����游"<<endl;
	else if(a->getMother()->getMother()==b)
	 	cout<<b->getName()<<" �� "<<a->getName()<<" ������ĸ"<<endl;
}

int main()
{
	Person p[8]={Person("����_��", "m"), 
	            Person("����_ĸ", "f"),
				Person("����", "m", &p[0], &p[1]),
				Person("����_��", "m"),
				Person("����_ĸ", "f"),
				Person("����", "f", &p[3], &p[4]),
				Person("СС��", "f", &p[2], &p[5]),
				Person("����", "m")
				};
	Person t("С��", "m", &p[2], &p[5]);
	int i;
	for(i=0;i<9;i++)
	{
		isXDJM(t, p[i]);
		isGrandfm(&t, p+i);
	}
	return 0;
} 

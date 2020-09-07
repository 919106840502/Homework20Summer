#include<iostream>
#include<string.h>
using namespace std;

class Person{					
	public:
	    char sex;
		Person * father;
		Person * mother;
		char name[20];
		Person()
		{
			sex='N';
		    father=NULL;
		    mother=NULL;
		}
		Person(char * name,char sex,Person * father=NULL,Person * mother=NULL)
	    {
		    strcpy(this->name,name);
		    this->sex=sex;
		    this->father=father;
		    this->mother=mother;
	    }
		~Person(){};
		void setfather(Person * p)
		{
			father=p;
		}
		void setmother(Person * p)
		{
			mother=p;
		}
		void showfather()
    	{
		    if(father==NULL)
			    cout<<name<<"û�аְ�qaq"<<endl;
		    else
			    cout<<name<<"�ְ���"<<father->name<<endl;
    	}
    	void showmother()
    	{
		    if(mother==NULL)
			    cout<<name<<"û������qaq"<<endl;
		    else
			    cout<<name<<"������"<<mother->name<<endl;
    	}
};

int main()
{
	Person *p=new Person [10]{
	Person("үү",'M'),Person("����",'F'),
	Person("�⹫",'M'),Person("����",'F'),
	Person("�Ķ���",'M'),Person("��÷",'F'),Person("��ѩ����",'F'),
	Person("����",'M'),Person("��ѩ",'F'),Person("����",'M')};
	p[4].setfather(&p[0]);
	p[4].setmother(&p[1]);
	p[5].setfather(&p[2]);
	p[5].setmother(&p[3]);
	p[6].setfather(&p[2]);
	p[6].setmother(&p[3]);
	p[7].setfather(&p[4]);
	p[7].setmother(&p[5]);
	p[8].setfather(&p[4]);
	p[8].setmother(&p[5]);
	p[9].setfather(&p[4]);
	p[9].setmother(&p[5]);
	cout<<p[7].name<<"���ֵܽ�����"<<endl;
	for(int i=0;i<10;i++)
	{
		if(p[i].father==NULL)
		    continue;
		    if(i==7)
		    
		if(strcmp(p[i].father->name,p[7].father->name)==0)
		    cout<<p[i].name<<endl;
	}
	for(int i=0;i<10;i++)
	{
		if(p[i].father!=NULL&&p[i].father->father!=NULL)
		{
		    cout<<p[i].name<<"��үү��"<<p[i].father->father->name<<endl;
		}
		if(p[i].father!=NULL&&p[i].father->mother!=NULL)
		{
		    cout<<p[i].name<<"��������"<<p[i].father->mother->name<<endl;
		} 
		if(p[i].mother!=NULL&&p[i].mother->father!=NULL)
		{
		    cout<<p[i].name<<"���⹫��"<<p[i].mother->father->name<<endl;
		}
		if(p[i].mother!=NULL&&p[i].mother->mother!=NULL)
		{
		    cout<<p[i].name<<"��������"<<p[i].mother->mother->name<<endl;
		}        
	}
	return 0; 
}

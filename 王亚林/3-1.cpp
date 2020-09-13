#include<iostream>
#include<string.h>
using namespace std;
class Person{
	string name;
	string sex;
	Person *father;
	Person *mother;
public:
	Person(string name,string sex,Person* father,Person* mother){
		this->name=name;
		this->sex=sex;
		this->father=father;
		this->mother=mother;
	}
	~Person(){}
	void setName(string name){this->name=name;}
	void setSex(string sex){this->sex=sex;}
	void setFather(Person *father){this->father=father;}
	void setMother(Person *mother){this->mother=mother;}
	string getName(){return name;	}
	string getSex(){return sex;	}
	Person *getFather(){return father;	}
	Person *getMother(){return mother;	}
};
int main(){
	Person p1("үү","male",NULL,NULL),p2("����","female",NULL,NULL),
			p3("�⹫","male",NULL,NULL),p4("����","female",NULL,NULL),
			p5("�ְ�","male",&p1,&p2),p6("����","female",&p3,&p4),
			p7("��","female",&p5,&p6),p8("���","female",&p5,&p6);
	cout<<p7.getName()<<" ���ֵܽ����� ";
	Person p[8]={p1,p2,p3,p4,p5,p6,p7,p8};
	for(int i=0;i<8;i++){
		if(i==6) continue;
		else if(p[i].getFather()==p[6].getFather() || p[i].getMother()==p[6].getMother())
		    cout<<p[i].getName()<<" ";
	}
	cout<<endl;
	if(p7.getFather()!=NULL&&p7.getFather()->getFather()!=NULL)
		cout<<p7.getName()<<" ���游ĸ�� "<<p7.getFather()->getFather()->getName()<<p7.getFather()->getMother()->getName()<<endl;
	if(p7.getMother()!=NULL&&p7.getMother()->getFather()!=NULL)
		cout<<p7.getName()<<" �����游ĸ��"<<p7.getMother()->getFather()->getName()<<p7.getMother()->getMother()->getName()<<endl;
	return 0;
}

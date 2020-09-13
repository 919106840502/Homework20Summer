#include <iostream>
using namespace std;
class Person{
	string name;
	string sex;
	Person * father;
	Person * mother;
public:
	Person(){
		}
	Person(string name,string sex,Person *father,Person * mother)
				:name(name),sex(sex),father(father),mother(mother){} 
    string getName()
	{return name;}
	string getSex()
	{return sex;}
	Person * getFatherAdd()
	{return father;}
	Person * getMotherAdd()
	{return mother;}
	string getFather()
	{return father->name;}
	string getMother()
	{return mother->name;}
	void setName(string name)
	{this->name=name;}
	void setSex (string sex)
	{this->sex=sex;}
	~Person(){
	}	
};
void judge(Person a,Person b)
{
	if(a.getFatherAdd()==b.getFatherAdd()&&a.getMotherAdd()==b.getMotherAdd())
	{cout<<a.getName()<<" �� "<<b.getName()<<" ���ֵܽ��� ��"<<endl;}
	else  
	{cout<<a.getName()<<" �� "<<b.getName()<<" �����ֵܽ��� ��"<<endl;}
 } 
void grand(Person a)
{
	cout<<a.getName()<<" ���游�� "<<a.getFatherAdd()->getFather()<<endl;
	cout<<a.getName()<<" ����ĸ�� "<<a.getFatherAdd()->getMother()<<endl;
	cout<<a.getName()<<" �����游�� "<<a.getMotherAdd()->getFather()<<endl;
	cout<<a.getName()<<" ������ĸ�� "<<a.getMotherAdd()->getMother()<<endl;
 } 
int main()
{
	//Person p1,p2,p3,p4,p5,p6,p7,p8,p9;	
	Person p4("�Ŵ�ү","��",NULL,NULL);
	Person p5("�Ŵ���","Ů",NULL,NULL);
	Person p2("�����ְ�","��",&p4,&p5);
	Person p6("���ү","��",NULL,NULL);
	Person p7("�����","Ů",NULL,NULL);
	Person p3("��������","Ů",&p6,&p7);
	Person p1("����","��",&p2,&p3);	
	Person p8("����","��",&p2,&p3);
	Person p9("������","Ů",NULL,NULL); 
	grand(p1);
	judge(p1,p8);
	judge(p1,p9);
	return 0; 
	 
}

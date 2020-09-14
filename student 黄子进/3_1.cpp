#include<iostream>
using namespace std;
class Person{
	private:
	Person *father,*mother;
	string name;
	bool isman;
	public:	
	Person(){}
	Person(string name,bool isman,Person *father = NULL,Person *mother = NULL)
			:father(father),mother(mother),name(name),isman(isman){}
	Person &operator=(const Person &p)
	{
		this->father = p.father;
		this->mother = p.mother;
		this->name = p.name;
		this->isman = p.isman;
	}
//	~Person(){
//		if(father != NULL)
//		delete father;
//		if(mother != NULL)
//		delete mother;
//	}
	bool operator==(const Person &p)
	{
		if(this->name != p.name)
		return false;
		if(this->isman != p.isman)
		return false;
		return true;
	}
	Person* getfather(){
		return this->father;
	}
	Person* getmother(){
		return this->mother;
	}
	void print()
	{
		cout<<name;
		if(isman)
		cout<<" �� ";
		else
		cout<<" Ů ";
		 
	}
	void printname()
	{
		cout<<name;
	}
	void printnima()
	{
		this->mother->printname();
	}
	void printniba()
	{
		this->father->printname();
	}
	Person* getFather(){return this->father;}
	Person* getMother(){return this->mother;}
};
bool is_nimei(Person ni,Person nimei)
{
	return *(ni.getFather()) == *(nimei.getFather());
}
int main()
{
	Person me;
	Person he("��һ��",false,&me);
	Person she("��һ��",true,&he,&me);
	Person dog("Фս",true,&she,&he);
	Person N("������",false,&dog,&she);
	Person xi("���׷�",false,&N,&N);
	Person you("��һ��",true,&N,&xi);
	Person PP[10] = {he,she,dog,N,xi};
	
	for(int i = 0;i < 5;i++)
	{
		PP[i].print();
		cout<<endl;
	}
	cout<<"���У�����"<<endl;
	you.print();
	cout<<"\n����ֵܽ�����:\n"; 
	for(int i = 0;i < 5;i++)
	{
		if(is_nimei(you,PP[i]))
		PP[i].print();
	}
	cout<<"\n����游�ǣ�";
	Person *temp;
	temp = you.getfather();
	temp->printniba();
	cout<<"\n�����ĸ�ǣ�";
	temp->printnima();
	cout<<"\n������游�ǣ�";
	temp = you.getmother();
	temp->printniba();
	cout<<"\n�������ĸ�ǣ�";
	temp->printnima();
	return 0;
}


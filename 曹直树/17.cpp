#include <iostream>
using namespace std;
class Parent{
	private:string n;
	public:
		string offsprings;
		string parents;
		Parent (char*name,char *zinv,char*fumu):n(name),offsprings(zinv),parents(fumu){}
		~Parent()
		{
		}
	 string getname(){
			return n;
		}
};
class Person{
	private:
		string name;
		char sex;
	public:
		Parent p;
		string siblings;
		string grandparents;
		Person(char *name,char sex,Parent p):
		sex(sex),name(name),p(p){}
		~Person(){
		}
		const string&getName(){
			return name;
		}
		void getSex(){
			if (sex=='f')
			cout<<"Ů";
			else if(sex=='m')
			cout<<"��";
		}
		void getSiblings(){
		siblings=	p.offsprings;
		}
		void getGrandparents(){
			grandparents=p.parents;
		}
		void show(){
			cout<<"������"<<name;
			cout<<",�Ա���";
			getSex();
			cout<<",��ĸ��"<<p.getname()<<"���ֵܽ�����"
			<<siblings <<",�游ĸ�����游ĸ��"<<grandparents;
		}
};
int main()
{
	Parent a("A&B","C&D","E&F");
	Person b("O",'f',a);
	b.getSiblings();
	b.getGrandparents();
	b.show();
}

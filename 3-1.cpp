//P294.17

#include <iostream>
using namespace std;
#include <string.h> 

class Person{
	
	string name;
	char sex;
	Person *mother;
	Person *father;
	
public:
	Person(string n,char s,Person *f,Person *m){
		name=n;
		sex=s;
		father=f;
		mother=m;
	}
	
	string getname(){
		return name;
	}
	char getsex(){
		return sex;
	}
	Person *getmother(){
		return mother;
	}
	Person *getfather(){
		return father;
	}
};

int main (){
	Person p1("��үү",'f',NULL,NULL),
	       p2("������",'m',NULL,NULL),
	       p3("���⹫",'f',NULL,NULL),
	       p4("������",'m',NULL,NULL),
	       p5("�Űְ�",'f',&p1,&p2),
	       p6("������",'m',&p3,&p4),
	       p7("�Ÿ��",'f',&p5,&p6),
	       p8("����",'m',&p5,&p6);
	Person family[8]={p1,p2,p3,p4,p5,p6,p7,p8};
	
	for(int i=0;i<8;i++){
		if(i==7) 
		continue;
		if(family[i].getfather()==family[7].getfather()&&family[i].getmother()==family[7].getmother())
		cout<<p8.getname()<<"���ֵܽ�����"<<family[i].getname()<<" ";
	}
	cout<<endl;
	
	if(p8.getfather()!=NULL&&p8.getfather()->getfather()!=NULL)
		cout<<p8.getname()<<"��үү��"<<p8.getfather()->getfather()->getname()<<endl;

	if(p8.getfather()!=NULL&&p8.getfather()->getmother()!=NULL)
		cout<<p8.getname()<<"��������"<<p8.getfather()->getmother()->getname()<<endl;

	if(p8.getmother()!=NULL&&p8.getmother()->getfather()!=NULL)
		cout<<p8.getname()<<"���⹫��"<<p8.getmother()->getfather()->getname()<<endl;

	if(p8.getmother()!=NULL&&p8.getmother()->getmother()!=NULL)
	    cout<<p8.getname()<<"��������"<<p8.getmother()->getmother()->getname()<<endl;

	return 0;
}

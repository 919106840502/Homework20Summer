#include<iostream>
#include<string.h>
using namespace std;
class Person{
private:	
	string name;
	char sex;
	Person*dad;
	Person*mom;
public:
	Person(string n,char s,Person*d,Person*m)
{
	name=n;
	sex=s;
	dad=d;
	mom=m;
}
	string getName(){
		return name;}
	char getSex(){
		return sex;	}
	Person* getdad(){
		return dad;}
	Person* getmom(){
		return mom;}
}; 
int main()
{
	 Person p1("үү",'m',NULL,NULL),
			p2("����",'f',NULL,NULL),
			p3("�⹫",'m',NULL,NULL),
			p4("����",'f',NULL,NULL),
			p5("�ְ�",'m',&p1,&p2),
			p6("����",'f',&p3,&p4),
			p7("���",'m',&p5,&p6),
			p8("���",'f',&p5,&p6),
			p9("�ܵ�",'m',&p5,&p6),
			p10("����",'f',&p5,&p6),
			p11("С��",'m',&p5,&p6);
	Person p[11]={p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11};
	for(int i=0;i<11;i++){	
		if(p[i].getdad()!=NULL){
			cout<<p[i].getName()<<"�İְ���"<<p[i].getdad()->getName()<<endl; 
			}
		if(p[i].getmom()!=NULL){
			cout<<p[i].getName()<<"��������"<<p[i].getmom()->getName()<<endl; 
			} 
	}
	for(int i=6;i<11;i++){
		for(int j=i+1;j<11;j++){
			if(p[i].getdad()==p[j].getdad())
	    		cout<<p[i].getName()<<"��"<<p[j].getName()<<"���ֵܽ���"<<endl;          	 
        }	 
	} 
	for(int i=0;i<11;i++){
		if(p[i].getdad()==NULL||p[i].getdad()->getdad()==NULL)
			continue; 
		else
			cout<<p[i].getName()<<"��үү��"<<p[i].getdad()->getdad()->getName()<<endl; 
	}
	return 0;
}

#include <iostream>
using namespace std;
class person{
private:
	string name;
	char sex;   //fָŮ�ԣ�mָ���� 
	person *mom;
	person *dad;
public:
	string getName(){
		return name;
	}
	person * getMom(){
		return mom;
	}
	string Momname(){
		return mom->name;
	}
	person * getDad(){
		return dad;
	}
	string Dadname(){
		return dad->name;
	}
	string getGrandf(){
		return dad->dad->name;
	}
	string getGrandm(){
		return dad->mom->name;
	}
	string getGrandmom(){
		return mom->mom->name;
	}
	string getGranddad(){
		return mom->dad->name;
	}
	person(const char* name,const char sex,person *mom,person *dad)
		:name(name),sex(sex),mom(mom),dad(dad){}
}; 
bool isBS(person a,person b){
	if ((a.getDad()==b.getDad())&&(a.getMom()==b.getMom()))
		return true;
	return false;
}
int main(){
	person a4("��������",'f',NULL,NULL);
	person a5("�����⹫",'m',NULL,NULL);
	person a6("��������",'f',NULL,NULL);
	person a7("����үү",'m',NULL,NULL);
	person a2("��������",'f',&a4,&a5);
	person a3("�����ְ�",'m',&a6,&a7);
	person a1("����",'m',&a2,&a3);
	person a8("����",'m',NULL,NULL);
	person a9("�������",'m',&a2,&a3);
	cout<<"�����������ǣ�"<<a1.getGrandmom()<<endl;
	cout<<"�������⹫�ǣ�"<<a1.getGranddad()<<endl;
	cout<<"�����������ǣ�"<<a1.getGrandm()<<endl;
	cout<<"������үү�ǣ�"<<a1.getGrandf()<<endl;
	cout<<"�����������ǣ�"<<a1.Momname()<<endl;
	cout<<"�����İְ��ǣ�"<<a1.Dadname()<<endl;
	if (isBS(a1,a8)==1){
		cout<<a8.getName()<<"��"<<a1.getName()<<"���ֵܽ���"<<endl;}
	else{
		cout<<a8.getName()<<"����"<<a1.getName()<<"���ֵܽ���"<<endl;}
	if (isBS(a1,a9)==1){
		cout<<a9.getName()<<"��"<<a1.getName()<<"���ֵܽ���"<<endl;}
	else{
		cout<<a9.getName()<<"����"<<a1.getName()<<"���ֵܽ���"<<endl;}
}

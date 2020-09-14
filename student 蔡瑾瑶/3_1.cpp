#include<iostream>
#include<string.h>
using namespace std;
class person{
	string name;
	string gender;
	person* mother;
	person* father;
public:
	person(string n,string g,person* m=0,person* f=0){
		name=n;gender=g;mother=m;father=f;
	}
	void printname(){
		cout<<name;
	}
	void print(){
		cout<<"������"<<name<<'\t';
		cout<<"�Ա�"<<gender<<'\t';
		if(mother!=0)
		cout<<"ĸ�ף�"<<mother->name<<'\t';
		if(father!=0)
		cout<<"���ף�"<<father->name;
		cout<<endl;
	}
	person* getmother(){
		return mother;
	}
	person* getfather(){
		return father;
	}
	string getname(){
		return name;
	}
	~person(){
		if(mother!=0)
 		delete mother;
 		if(father!=0)
 		delete father;
	}
};
int main(){
	person grama1("����","Ů"),grapa1("�⹫","��");
	person grama2("����","Ů"),grapa2("үү","��");
	person mom("����","Ů",&grama1,&grapa1),dad("����","��",&grama2,&grapa2);
	person sis("����","Ů",&mom,&dad),bro("���","��",&mom,&dad);
	person p[8]={grama1,grapa1,grama2,grapa2,mom,dad,sis,bro};
	cout<<"��ͥ��Ա��"<<endl;
	for(int i=0;i<8;i++)
	p[i].print();
	cout<<"���õ��ֵܽ����У�";
	for(int i=0;i<8;i++){
		if(sis.getmother()==p[i].getmother()&&sis.getfather()==p[i].getfather()&&sis.getname()!=p[i].getname()){
			p[i].printname();
			cout<<'\t';
		}
	}
	cout<<endl;
	person *p1,*p2;
	p1=sis.getmother();
	p2=p1->getmother();
	cout<<"���õ�����ĸ�ǣ�";
	p2->printname();
	return 0;
}

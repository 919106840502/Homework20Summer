//P331.13 

#include <iostream>
#include <string.h>
using namespace std;

class File{
	
	string name,size,sdate,mdate;
	
public:
	
	File(string n,string s,string sd,string md){
		name=n;
		size=s;
		sdate=sd;
		mdate=md;
	}
	
	string getname(){
		return name;
	}
	
	string getsize(){
		return size;
	}
	
	string getsdate(){
		return sdate;
	}
	
	string getmdate(){
		return mdate;
	}
	
	void show1(){
		cout<<"�ļ���:"<<name<<endl;
		cout<<"��С:"<<size<<endl;
		cout<<"��������:"<<sdate<<endl;
		cout<<"�޸�����:"<<mdate<<endl; 
	}
}; 

class MediaFile:public File{
	
	string type,playtime;
	
public:
	
	MediaFile(string t,string p,string n,string s,string sd,string md):File(n,s,sd,md){
		type=t;
		playtime=p;
	}
	
	string gettype(){
		return type;
	}
	
	string getplaytime(){
		return playtime;
	}
	
	void show2(){
		show1();
		cout<<"ý�����"<<type<<endl;
		cout<<"����ʱ�䣺"<<playtime<<endl; 
	}
};

int main(){
	MediaFile a("��Ƶ","86min","��Ȼ�Ķ�","1.60GB","2010.3.1","2020.9.12");
	a.show2();
	return 0;
}

#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;
class Date{
private:	
	int year,month,day;
public:
	Date(int y,int m,int d)
	{   year=y;
		month=m;
		day=d;
	}
	Date(){ 
		time_t ltime=time(NULL);
		tm * today=localtime(&ltime);
		year=today->tm_year+1900;
		month=today->tm_mon+1;
		day=today->tm_mday;
		}
	void printDate(){
    	cout<<year<<"��"<<month<<"��"<<day<<"��";
	}
};
class File{
private:	
	string name,size;
	Date creatdate,modifydate;
public:
	File(string n,string s,Date cd,Date md){	
		name=n;
		size=s;
		creatdate=cd;
		modifydate=md;
	}
	void printFile(){
		cout<<"�ļ�����"<<name<<"  "<<"��С��" <<size<<endl; 
		cout<<"�������ڣ�";
		creatdate.printDate();
		cout<<endl;
		cout<<"�޸����ڣ�" ;
		modifydate.printDate();
		cout<<endl;
	}
};
class MediaFile:public File{
private:
	string mediaclass,playtime;
public:
	MediaFile(string n,string s,Date cd,Date md,string mc,string pt):File(n,s,cd,md){
		mediaclass=mc;
		playtime=pt;
	}
	void printMedia(){
		printFile();
		cout<<"ý�����"<<mediaclass<<"  "<<"����ʱ�䣺"<<playtime<<endl;
	}
};
int main(){
	Date d1(2001,8,8),d2(2020,9,10);
	MediaFile m("Harry Potter and the Sorcerer's Stone","2.27GB",d1,d2,"��Ƶ","159����");
	m.printMedia(); 
	return 0;
}

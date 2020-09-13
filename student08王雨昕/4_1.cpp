using namespace std;
#include <iostream>
#include <string.h>
#include<time.h>
class Date{
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
    void printdate(){
    	cout<<year<<"��"<<month<<"��"<<day<<"��";
	}
};
class File{
	string name,size;
	Date creatdate,modifydate;
public:
	File(string n,string s,Date cd,Date md)
	{	name=n;
		size=s;
		creatdate=cd;
		modifydate=md;
	}
	void printfile(){
			cout<<"�ļ�����"<<name<<endl<<"��С��" <<size<<endl<<"�������ڣ�"; 
			creatdate.printdate();
			cout<<endl<<"�޸����ڣ�" ;
			modifydate.printdate();
			cout<<endl;
		}
};
class MediaFile:public File{
	string mediaclass,playtime;
public:
	MediaFile(string n,string s,Date cd,Date md,string mc,string pt):File(n,s,cd,md){
		mediaclass=mc;
		playtime=pt;
	}
	void printmedia(){
		printfile();
		cout<<"ý�����"<<mediaclass<<endl<<"����ʱ�䣺"<<playtime<<endl;
	}
};
int main(){
	Date d1(2000,10,16),d2(2020,1,8);
	MediaFile a("Jesus Christ Superstar","2.08GB",d1,d2,"��Ƶ","111����");
	a.printmedia(); 
	return 0;
}

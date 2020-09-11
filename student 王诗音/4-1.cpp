#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		Date(){       //ȱʡ���캯����ȡ��ǰ����
			time_t ltime=time(NULL);
			tm * today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
		int getYear(){return year;}
		int getMonth(){return month;}
		int getDay(){return day;}
		void show(){
			cout<<year<<"."<<month<<"."<<day;
		}
};
class File{
	string name;
	string size;
	Date cdate;
	Date xdate;
	public:
		File(string name,string size,Date cdate,Date xdate){
			this->name=name;
			this->size=size;
			this->cdate=cdate;
			this->xdate=xdate;
		}
		void setName(string name){this->name=name;}
		void setSize(string size){this->size=size;}
		void setCdate(Date cdate){this->cdate=cdate;}
		void setXdate(Date xdate){this->xdate=xdate;}
		string getName(){return name;}
		string getSize(){return size;}
		Date getCdate(){return cdate;}
		Date getXdate(){return xdate;}
		void show1(){
			cout<<"�ļ�����"<<name<<endl<<"��С��" <<size<<endl<<"�������ڣ�"; 
			cdate.show();
			cout<<endl<<"�޸����ڣ�" ;
			xdate.show();
			cout<<endl;
		}
};
class MediaFile:public File{
	string mediaclass;
	string playtime;
	public:
		MediaFile(string name,string size,Date cdate,Date xdate,string mediaclass,string playtime):File(name,size,cdate,xdate){
			this->mediaclass=mediaclass;
			this->playtime=playtime;
		}
		void setMediaclass(string mediaclass){this->mediaclass=mediaclass;}
		void setPlaytime(string playtime){this->playtime=playtime;}
		string getMediaclass(){return mediaclass;}
		string getPlaytime(){return playtime;}
		void show2(){
			show1();
			cout<<"ý�����"<< mediaclass<<endl<<"����ʱ�䣺"<<playtime<<endl; 
		}
};
int main(){
	Date d1(1998,4,3),d2;
	MediaFile a("̩̹��˺�","2.02GB",d1,d2,"��Ƶ","194����");
	a.show2(); 
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 
#include <iostream> 
#include <time.h> 
using namespace std; 
class Date{
   public:   int year, month, day;


	};
class Datetime{
	private:int hour,min,sec;
	Date date;	
	public:
	
	Datetime(){                 //ȱʡ���캯����ȡ��ǰ����   
	   time_t ltime = time(NULL);   
	   tm * today = localtime(&ltime); 
       date.year= today->tm_year + 1900;    
	   date.month = today->tm_mon + 1;    
	   date.day = today->tm_mday; 
	   hour=today->tm_hour;
	   min=today->tm_min;
	   sec=today->tm_sec;   
	   cout<<"ȱʡ���캯��:";     //��ӵ����   
	   print();   
	   cout<<endl;  
	   }  
	   
	   Datetime(int year,int month,int day,int hour,int min,int sec){
	   	date.year = year;
	   	date,month=month;
	   	date.day=day;
	   	this->hour=hour;
	   	this->min=min;
	   	this->sec=sec;
	   	cout<<"Datetime�Ĺ��캯����";
		print();
		cout<<endl;   
	   }
	   void getterdate(){
	   	cout<<date.year<<"."<<date.month<<"."<<date.day<<endl;
	   }
	   int getterhour(){return hour;}
	   int gettermin(){return min;}
	   int gettersec(){return sec;}
	   void show(){cout<<date.year<<"��"<<date.month<<"��"<<date.day<<"��"<<hour<<":"<<min<<":"<<sec<<endl;
	    }
		void print(){
	   	cout<<date.year<<'.'<<date.month<<"."<<date.day<<" "<<hour<<":"<<min<<":"<<sec;
	   }
};
int main(){
	Datetime datetime1(2019,10,13,20,28,36);        //��һ�� 
	cout<<"datetime1:";datetime1.print();cout<<endl;datetime1.getterdate();cout<<endl;
	Datetime * datetime2=new Datetime;
	cout<<"datetime2:";datetime2->show();cout<<endl;cout<<datetime2->getterhour()<<":"<<datetime2->gettermin()<<":"<<datetime2->gettersec()<<endl;
	delete datetime2;
	return 0; 
}

#include <iostream>
#include <time.h>
using namespace std;
class Date{
    private:
		int year,month,day;
	public:
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		Date(){
			time_t ltime=time(NULL);
			tm *today=localtime(&ltime);
			year=today->tm_year+1900;
			month=today->tm_mon+1;
			day=today->tm_mday;
		}
	void setyear(int a){
		year=a;
	}
	void setmonth(int a){
		month=a;
	}
	void setday(int a){
		day=a;
	}
	int getyear(){
		int b=year;
		return b;
	}
	int getmonth(){
		int b=month;
		return b;
	}
	int getday(){
		int b=day;
		return b;
	}
}; 
class DateTime{
	Date date;
	int hour,min,sec;
	public:
    DateTime(){
		time_t lntime=time(NULL);
		tm *today=localtime(&lntime);
		hour=today->tm_hour;
		min=today->tm_min;
		sec=today->tm_sec;
	}
    DateTime(int year,int month,int day,int hour,int min,int sec);
	void setdate(int a,int b,int c){
		date.setyear(a);
		date.setmonth(b);
		date.setday(c);
	}
	void setdatetime(int a,int b,int c){
		hour=a;
		min=b;
		sec=c;
	}
	Date getdate(){
		return date;
	}
	int gethour(){
		return hour;
	}
	int getmin(){
		return min;
	}
	int getsec(){
		return sec;
	}
	void show(){
		cout<<date.getyear()<<"��"<<date.getmonth()<<"��"<<date.getday()<<"�� "<<hour<<":"<<min<<":"<<sec<<endl;
	}	
};
int main(){
	DateTime s;
	s.show();
}

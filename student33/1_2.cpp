using namespace std;
#include<iostream>
#include<time.h>

class date{
	private:
	int year,month,day;
	public:
	 void setdate(int y,int m,int d)
	{
		year=y;
		month=m;
		day=d;
	}
	void getdate()
	{
		cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl; 
	}
};
class DateTime{
	private:
		int hour,min,sec;
		date date1;
    public:
    	DateTime()
    	{    int y,m,d;
    		time_t ltime=time(NULL);
    		tm * today=localtime(&ltime);
    		y=today->tm_year+1900;
    		m=today->tm_mon+1;
    		d=today->tm_mday;
    		date1.setdate(y,m,d);
    		hour=today->tm_hour;
    		min=today->tm_min;
    		sec=today->tm_sec;
		}
	    DateTime(int year,int month,int day,int hour,int min,int sec)
		{
		    date1.setdate(year,month,day);
			this->hour=hour;
			this->min=min;
			this->sec=sec;	
		}
		void date_setter(int y,int m,int d)
		{
		         date1.setdate(y,m,d);	
		}
		void hour_setter(int h)
		{
			hour=h;
		}
		void min_setter(int m)
		{
			min=m;
		}
		void sec_setter(int s)
		{
			sec=s;
		}
		//////////////////
		void date_getter(date n)
		{
		       n.getdate();	
		}
		void hour_getter()
		{
			cout<<hour<<"ʱ"<<endl; 
		}
		void min_getter()
		{
			cout<<min<<"��"<<endl;
		}
		void sec_getter(int s)
		{
			cout<<sec<<"��"<<endl;
		}
		void show()
		{
			date1.getdate();
			cout<<hour<<"ʱ"<<min<<"��"<<sec<<"��"<<endl;
		 } 
		
			
};

int main()
{   cout<<"ϵͳ��ǰʱ��:"<<endl; 
	DateTime D1;                         //����ȱʡ���캯�� 
	D1.show();
	cout<<"����setDate:"<<endl;                           //ȱʡ��� 
	DateTime D2(2000,6,14,14,29,52);                //���ù��캯�� 
	D2.show(); 
 } 

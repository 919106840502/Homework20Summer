#include <iostream>
#include <string.h>
using namespace std; 
class Date{
	int year,month,day;
	public:
		Date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		cout<<year<<"."<<month<<"."<<day<<endl;
		}
};
class File{
	private:
		string name;
		double size;
		Date d; //�������� 
		Date D;//�޸����� 
	public:
	File(string a,double b,int d1,int d2,int d3,int D1,int D2,int D3):d(d1,d2,d3),D(D1,D2,D3){
		name=a;
		size=b;
		cout<<"�ļ���"<<name<<" "<<"��С��"<<size<<"GB"<<endl; 
	    
	}
};
class MediaFile:public File{
	string sort;
	int time;
	public:
		MediaFile(string a,double b,int d1,int d2,int d3,int D1,int D2,int D3,string c,
		int t):File(a,b,d1,d2,d3,D1,D2,D3){
			sort=c;
			time=t;
			cout<<"ý�����"<<sort<<endl;
			cout<<"����ʱ��:" <<time<<"����"<<endl;
		}
}; 
int main() {
	MediaFile m("���˵���",1.5,2019,1,1,2020,4,13,"��Ƶ",125);
	return 0;
}

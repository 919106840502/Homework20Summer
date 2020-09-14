#include <iostream> 
#include <time.h>
#include <string>
using namespace std;
class File{
	string name;
	double size;
	int year, month, day, last_year, last_month, last_day;
public:
	File();
	File(string name,double size);
	void updatetime();
	string getname(){ 
		return name; 
	}
	void setname(string name){ 
		this->name = name; 
		updatetime();
    }
	double getsize(){ 
		return size;
	}
	void setsize(double size){ 
		this->size = size;
		updatetime(); 
	}
	void show();
};
File::File(){
	name = "�½��ļ�";
	size = 0;
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;
	last_year = year;
	last_month = month;
	last_day = day;
}
File::File(string name,double size){
	this->name = name;
	this->size = size;
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	year = today->tm_year + 1900;
	month = today->tm_mon + 1;
	day = today->tm_mday;
	last_year = year;
	last_month = month;
	last_day = day;
}
void File::updatetime(){
	time_t  l = time(NULL);
	tm *today = localtime(&l);
	last_year = today->tm_year + 1900;
	last_month = today->tm_mon + 1;
	last_day = today->tm_mday;
}
void File::show(){
	cout << name << "||��СΪ��" << size << "kb" << "||����ʱ��Ϊ:" << year << "��" << month << "��" << day << "��" << endl;
	cout << "�����޸�ʱ��Ϊ��" << last_year << "��" << last_month << "��" << last_day << "��"<<endl;
}
class MediaFile : public File{
	string type;
	int time;
public:
	MediaFile(){ type = "δ֪����"; time = 0; };
	MediaFile(string type, string name, double size, int time) :File(name, size){ this->type = type; this->time = time; };
	void show_Media(){
		cout << "����Ϊ" << type << "||ʱ����" << time << "����"<<endl;
		show();
	}

};
int main(){
	MediaFile a("flv", "type-moonʮ����", 1,390);
	File b;
	a.show_Media();
	b.show(); 
	return 0;
}

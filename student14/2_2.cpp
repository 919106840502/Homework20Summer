#include <iostream>
#include <cstring>
using namespace std;
class File{
	protected:
		string name;
		int size;
		string creatdate;
		string lastdate;
	public:
		File (char*name,int size,char *creatdate,char*lastdate):name(name),size(size),
		creatdate(creatdate),lastdate(lastdate){}
		~File(){
		}
}; 
class MediaFile:public File{
	string category;
	int time;
	public:
		MediaFile(string category,int time,char*name,int size,char *creatdate,char*lastdate):
		File(name,size,creatdate,lastdate),
		category(category),time(time){}
		~MediaFile(){
		}
		void print(){
			cout<<"�ļ�����"<<category<<"ʱ��"<<time<<"�ļ���"<<name<<"�ļ���С"<<
			size<<"�ļ��Ĵ���ʱ����"<<creatdate<<"�ļ����޸�ʱ����"<<lastdate; 
		}
	};
int main(
	MediaFile d1("video",1,"ѧϰ��Ƶ",5,"123456","56789");
	d1.print();
}

#include <iostream>
using namespace std;
class File{
private:
	string d1;   //�������� 
	string d2;   //�޸�����
	string name;
	int size;
public:
	File (string d1,string d2,string name,int size){
		this->d1=d1;
		this->d2=d2;
		this->name=name;
		this->size=size;
	}
	string getct(){
		return d1;
	}
	string getxt(){
		return d2;
	}
	string getName(){
		return name;
	}
	int getSize(){
		return size;
	}
};
class MediaFile
	:public File
{
private:
	string type;
	int time;  //second
public:
	MediaFile(string name,string d1,string d2,int size,string type,int time)
		:File(d1,d2,name,size){
			this->type=type;
			this->time=time;
		}
	string getType(){
		return type;
	}
	int getTime(){
		return time;
	}
	void print(){
		cout<<"�ļ�����"<<getName()<<endl;
		cout<<"�ļ���С��"<<getSize()<<endl;
		cout<<"�ļ����ͣ�"<<getType()<<endl;
		cout<<"����ʱ�䣺"<<getct()<<endl;
		cout<<"�޽�ʱ�䣺"<<getxt()<<endl;
		cout<<"����ʱ�䣺"<<getTime()<<endl;
	}
};
int main(){
	MediaFile m("��Ӱ","����ʱ��","�޸�ʱ��",50,"�ļ�����",100);
	m.print();
}

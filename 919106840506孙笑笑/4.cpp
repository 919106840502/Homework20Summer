#include <iostream>
using namespace std;
class File{
string FileName;
double size;
string creat;
string alter;
public:
void setFN(string FN){FileName=FN;
}
 void setsize(double s){size=s;
}  	
 void setcreat(string c){	creat=c;
}  	
 void setalter(string a){alter=a;
}  
string getFN(){return FileName;
}	
double getsize(){return size;
}
string getcreat(){return creat;
}	
string getalter(){return alter;
}	
};
class MediaFile:public File{
	string format;
	string play;
public:
MediaFile(string f,string p)		
	{
		format=f;
		play=p;
		
	}
string getf(){return format;
}	
string getPlay(){return play;
}	
	
void show(){
	cout<<"�ļ�����"<<getFN()<<endl;
	 cout<<"��С��"<<getsize()<<endl;
	cout<<"����ʱ�䣺"<<getcreat()<<endl;
	cout<<"�޸�ʱ�䣺"<<getalter()<<endl;
	cout<<"�ļ����ͣ�"<<getf()<<endl;
	cout<<"����ʱ�䣺"<<getPlay(); 
}		
};
int main(){
	MediaFile m("mp4","3:20");
	m.setFN("ӭ�����");
	m.setsize(1.2);
	m.setcreat("2020.6.20");
	m.setalter("2020.7.20");
	m.show();
}











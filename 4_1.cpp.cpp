/*
13. ����һ��File���ʾ�����ļ���Ӧ�����ļ�������С��������
�ڡ��޸����ڵ����ԡ�����һ��MediaFile ��ʾ��ý���ļ�������
���и�ʽ����Ƶ����Ƶ�ļ�������Ҫ��������ͨ�ļ����ԣ���Ҫ��
��ý�����(����Ƶ�� ��Ƶ)������ʱ������ԡ�  
*/
#include<time.h>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<ctime>

using namespace std;

class File{
	string Filename, Filesize, date_created, date_changed;
	public:

		File(string a = "", string b = "", string c = "", string d = "") {
			Filename = a;
			Filesize = b;
			date_created = c;
			date_changed = d;
		}

				//set_elements
			void setFilename(string s){
			Filename = s;
		}
		void setFilesize(string s){
			Filesize = s;
		}
		void setdate_created(string s){
			date_created = s;
		}
		void setdate_changed(string s){
			date_changed = s;
		}		


				//get_elements
		string getFilename(){
			return Filename;
		}
		string getFilesize(){
			return Filesize;
		}
		string getdate_created(){
			return date_created;
		}
		string getdate_changed(){
			return date_changed;
		}




}; 

class MediaFile:public File{
	string Fileform/*��ʽ*/, Fileclass/*���*/, playtime;
	public:
		MediaFile(string a = "", string b = "", string c = "", string d = "", string e = "", string f = ""):File(a,b,c,d){
			Fileform = e;
			playtime = f; 
		}

		//set
		void setFileform(string s){
			Fileform = s;
		}
		void setFileclass(string s){
			Fileclass = s;
		}
		void setplaytime(string s){
			playtime = s;
		}
		//get
		string getFileform(){
			return Fileform;
		}
		string getFileclass(){
			return Fileclass;
		}
		string getplaytime(){
			return playtime;
		}



};



int main()
{

	MediaFile a;
	a.setFilename("One Thousand Forms of Terror");

	cout<<a.getFilename();



	return 0;



 } 

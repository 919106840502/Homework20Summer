#include<iostream>
#include<string>
using namespace std;
enum MediaType {
	audio, video
};
class Date {
private:
	int year;
	int month;
	int day;
public:
   Date(int year, int month, int day) {
	this->year = year;
	this->month = month;
	this->day = day;
} 
 void setYear(int y){
	 year = y;
    }
 void setMonth(int m) {
	 month = m;
 }
 void setDay(int d) {
	 day = d;
 }
  int getYear() { return year; }
  int getMonth() { return month; }
  int getDay() { return day; }
  void  show() {
	  cout << year << "-" << month << "-" << day;
  }
};
class File {
private:
	string filename;
	int filesize;
	Date Createdate;
	Date Lastmodifieddate;
public:
	string getName() { return filename; }
	int getSize() { return filesize; }
	Date getCD() {
		return Createdate;
	}
	Date getLD() {
		return Lastmodifieddate;
	}
	File(string filename, int filesize, int year1, int month1, int day1,
		int year2, int month2, int day2) :filename(filename), filesize(filesize),Createdate(year1,month1,day1), Lastmodifieddate(year2,month2,day2)
		 {
		
	}


};
class MediaFile:public File{
	private:
		MediaType type;
		int playtime;
	public:
		MediaFile(string filename,int filesize,int year1,int month1,int day1,
	   int year2,int month2,int day2,MediaType type,int playtime):File( filename, filesize, year1, month1, day1,
	    year2, month2, day2){
		this->type=type;
		this->playtime=playtime;
	   }
		void print() {
			cout << "�ļ�����" << getName()<< endl << "��С��" << getSize() <<"GB"<< endl << "�������ڣ�";
			getCD().show();
			cout << endl << "�޸����ڣ�";
			getLD().show();
			cout << endl;
			switch (type)
			{
			case audio:cout << "ý�������Ƶ"<< endl << "����ʱ�䣺" << playtime <<"����"<< endl;
				break;
			case video:cout << "ý�������Ƶ"<< endl << "����ʱ�䣺" << playtime << "����" << endl;
				break;
			default:
				break;
			}
			
		}

};
int main() {
	MediaFile f1("����½ս��",2, 2000, 10, 01, 2018, 10, 28,audio,188);
	f1.print();

	return 0;
}

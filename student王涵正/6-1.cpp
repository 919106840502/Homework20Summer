#include<iostream>
#include <fstream>
using namespace std;
int main(int argc,char *argv[]){
ifstream infile(argv[1],ios::in);
	ofstream outfile(argv[2]);
if (!infile) {
cout << "���ܴ������ļ�:"<<endl;
return 0;
}
if (!outfile) {
cout << "���ܴ�Ŀ���ļ�:" << endl;
return 0;
}
char buff[4096];
int n;
while (!infile.eof()) { //�ļ�������������ѭ��
infile.read(buff, 4096); //һ�ζ�4096 ���ֽ�
n = infile.gcount(); //ȡʵ�ʶ����ֽ���
outfile.write(buff, n); //��ʵ�ʶ����ֽ���д���ļ�
}
infile.close(); outfile.close();
return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
int main(void) {
char filename1[256], filename2[256];
cout << "����Դ�ļ�����";
cin >> filename1;
cout << "����Ŀ���ļ�����";
cin >> filename2;
ifstream infile(filename1, ios::in );
ofstream outfile(filename2);
if (!infile) {
cout << "���ܴ������ļ���" << filename1 << '\n';
return 0;
}
if (!outfile) {
cout << "���ܴ�Ŀ���ļ���" << filename2 << '\n';
return 0;
}
infile.unsetf(ios::skipws); //A
char buff[300];
while (infile.getline(buff,300))
outfile<<buff<<endl; //B
infile.close();
outfile.close();
return 0;
}

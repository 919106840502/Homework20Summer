#include <iostream>
#include <fstream>
using namespace std;
int main (int argc,char *argv[]){
	//char filename1[256],filename2[256];


	//cout<<"����Դ�ļ�����";

	//cout<<"����Ŀ���ļ�����";

	fstream infile,outfile;
	infile.open(argv[1],ios::in | ios::binary);
	outfile.open(argv[2],ios::out | ios::binary);
	if(!infile){
		cout<<"���ܴ������ļ���"<<argv[1]<<'\n';
		return 0;
	}
	if(!outfile){
		cout<<"���ܴ�Ŀ���ļ���"<<argv[2]<<'\n';
		return 0;
	}
	char buff[4096];
	int n;
	while(!infile.eof()){
		infile.read(buff,4096);
		n=infile.gcount();
		outfile.write(buff,n);
		
	}

	infile.close();
	outfile.close();

	return 0;
}

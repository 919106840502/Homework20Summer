#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]){        
	fstream infile,outfile;
	infile.open(argv[1],ios::in|ios::binary);
	outfile.open(argv[2],ios::out|ios::binary);
	if(!infile){
		cout<<"���ܳɹ��������ļ���"<<argv[1]<<'\n';
		return 0;
	}
	if(!outfile){
		cout<<"���ܳɹ���Ŀ���ļ���"<<argv[2]<<'\n';
		 return 0;
	}
	char st;
	while(infile.get(st)){
		outfile.put(st);
	}
	infile.close();
	outfile.close();
	return 0;
}

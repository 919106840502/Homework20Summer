#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]){
	fstream infile,outfile;
	infile.open(argv[1],ios::in|ios::binary);
	outfile.open(argv[2],ios::out|ios::binary);
	if(!infile){
		cout<<"���ܴ������ļ�"<<argv[1]<<endl;
		
		return 0;
	}else{
		cout<<"�ܴ������ļ�"<<argv[1]<<endl;
	}
		if(!outfile){
		cout<<"���ܴ������ļ�"<<argv[2]<<endl;
		return 0;
	}
	else{
		cout<<"�ܴ������ļ�"<<argv[2]<<endl;
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

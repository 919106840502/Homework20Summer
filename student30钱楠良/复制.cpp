using namespace std;
#include<iostream>
#include<fstream>
int main(int argc,char **argv)
{
	fstream infile,outfile;
	infile.open(argv[1],ios::in|ios::binary);
	outfile.open(argv[2],ios::out|ios::binary);
    if(!infile)
	{
		cout<<"���ļ�ʧ��"<<endl;
		return 0; 
		}	
		
	if(!outfile)
	{
		cout<<"���ļ�ʧ��"<<endl;
		return 0; 
		}
		char buff[4096];
		int n;
		while(!infile.eof())
		{
		infile.read(buff,4096);
		n=infile.gcount();
		outfile.write(buff,n);
     	}
     	infile.close();
		outfile.close();
		return 0;
}

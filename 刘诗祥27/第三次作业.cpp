using namespace std;
#include <iostream>
#include <string.h>
class Person{
	char *name;
	char sex;
	char *momname;
	char *dadname;
public:
	void seekbroandsis(Person a,Person b){
		if(strcmp(a->momname,b->momname)||strcmp(a->dadname,b->dadname))
		  cout<<b->name<<"��"<<a->name<<"���ֵܽ���"<<endl;
	}//stcmp��������� 
	void seekffmm(Person a,Person b){
		if(strcmp(a->dadname,b->name)||strcmp(a->momname,b->name))
		{
			cout<<b->dadname<<"��"<<b->momname<<"��"<<a->name<<"���游ĸ"<<endl;
		}
	} 
};

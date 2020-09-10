using namespace std;
#include<iostream>
#include<string.h>
class Person{
	private: 
	char sex,*name;
	Person *father,*mother;
	
	
	public:
	Person(char sex,char*name,Person*p1,Person*p2)
	:sex(sex),name(nullptr),father(nullptr),mother(nullptr){   
		setname(name);
		setfm(p1,p2);
	}
	
	
	
	~Person(){
		if(name!=nullptr)
		delete []name;
	}
	
	
	Person(const Person &p)
	:Person(p.sex,p.name,p.father,p.mother){}
	
	
	Person &operator=(const Person &p){
		setname(p.name);
		sex=p.sex;
		return *this;
	}
	
	
	void setname(const char*a)
	{
		if(name!=nullptr)
		delete []name;
		if(a!=nullptr)
		{
			int lenth;
			lenth=strlen(a);
			name=new char[lenth+1];
			strcpy(name,a);
		}
	   else
	   name=nullptr;
		
	}		
	
	
	void show(){
	if(this!=nullptr)
	cout<<"�Ա�"<<sex<<" ������"<<name<<endl;
	cout<<"father��"<<getfname()<<endl;
	cout<<"mother: "<<getmname()<<endl;
	
}
void setfm(Person*a,Person*b)
      {
      	if(father==nullptr)
      	father=a;
      	if(mother==nullptr)
      	mother=b;
	  
	  }
  const char*getmname()
  {
  	 if(mother!=nullptr)
  	  return mother->name;
  	  else
  	  return "unnamed";
		}	  
	  
  const char *getfname()
  {  if(father!=nullptr)
  	return father->name;
  	else
  	return "unnamed";
  }
  const char* getname(){
  	return name;
  }
  bool unkown(){
  	if(father==nullptr)
  	return 1;
  	else 
  	return 0;
  }
 
 
   Person* myfather()const
  {
  	 return father;
  }
  
  
  
   Person* mymother()const
  {
  	return mother;
  }
};

int main()
{ 
      Person p1('m',"�����游",nullptr,nullptr),
             p2('f',"������ĸ",nullptr,nullptr),
             p3('m',"�������游",nullptr,nullptr),
			 p4('f',"��������ĸ",nullptr,nullptr),
			 p5('m',"��������",&p1,&p2),
             p6('f',"����ĸ��",&p3,&p4),
			  p('m',"����",&p5,&p6),
			  px('f',"����",&p5,&p6);
	          
	         p.show();
	         p2.show();
	         if(strcmp(p.getfname(),px.getfname())==0)
	         {
	         	if(p.unkown()==0)
	         	{
				 cout<<"ͨ����ĸ���Լ����ֵܽ��ã�"; 
				 cout<<p.getname()<<"and"<<px.getname()<<" are brothers"<<endl;
			   
			 } 
			 }
			 cout<<"ͨ���������Լ����游��"<<p.myfather()->getfname()<<endl;
	         return 0;
}

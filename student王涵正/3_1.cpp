#include<iostream>
#include<string.h>
using namespace std;
class Person{
	private:
		string name;
		bool sex;
		Person *father, *mother;
	public:
		Person(){
		}
		Person(string name,bool sex,Person *father,Person *mother)
				:name(name),sex(sex),father(father),mother(mother){} 
	

		~Person(){
		}
		string getName(){
			return name;
		}
		bool getSex(){
			if (sex==1)return "male";
			else return "female"; 
		}
		void setName(string name){
			this->name = name;
		}
		void setSex(bool sex){
			this->sex = sex;
		}
		string getFather(){
			return father->name;
		}
		string getMother(){
			return mother->name;
		}
		
string sisorbro(Person* p){int x=0;
if(this->father == p->father&&this->mother != p->mother &&  p->getSex() == 1) x=1;//ͬ����ĸ�ֵ� 
else if(this->father == p->father&&this->mother != p->mother &&  p->getSex() == 0) x=2;//ͬ����ĸ���� 
else if(this->father != p->father&&this->mother == p->mother &&  p->getSex() == 1) x=3;//ͬmu��fuxiongdi 			
else if(this->father != p->father&&this->mother == p->mother &&  p->getSex() == 0) x=4;//ͬmu��fu���� 		
else if(this->father == p->father&&this->mother == p->mother &&  p->getSex() ==1) x=5;//ͬ��tongĸxiongdi 			
else if(this->father == p->father&&this->mother == p->mother &&  p->getSex() == 0) x=6;//ͬ��tongĸ���� 		
else if(this->father != p->father&&this->mother != p->mother ) x=7;//doubushi
if(x==1) return "ͬ����ĸ�ֵ�";
if(x==2) return "ͬ����ĸ����";
if(x==3) return "ͬĸ�츸�ֵ�";
if(x==4) return "ͬĸ�츸����";
if(x==5) return "ͬ��ͬĸ�ֵ�";
if(x==6) return "ͬ��ͬĸ����";
if(x==7) return "��ѪԵ��ϵ";
		}                                                 
		
};                                            
int main(){
Person person1;Person person2;Person person5;
person1.setName("whz");
person2.setName("wjl");
person5.setName("xxx");
Person person3("wx",1,&person1,&person2);
Person person4("ws",1,&person1,&person5);
cout<<person3.sisorbro(&person4)<<endl;


}

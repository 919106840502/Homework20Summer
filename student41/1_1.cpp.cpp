#include<iostream>
#include<string>
using namespace std;
class Cat{
	private:
		int age,weight;
		string color;
	public:
	    void setAge(int a);
		void setWeight(int w);
		void setColor(const char *p);//�����ָ��ú����� 
		void printAge(){
			cout<<age;
		}		
		void printWeight(){
			cout<<weight;
		}
		void printColor(){
			cout<<color;
		}
};
void Cat::setAge(int a){
	age=a;
}
void Cat::setWeight(int w){
	weight=w;
}
void Cat::setColor(const char*p){
	color=p;//ע������ط��� 
}
int main(){
	Cat cat1,cat2;//�������������������Ĳ��� 
	cat1.setAge(2);
	cat1.setWeight(5);
	cat1.setColor("Yellow");
	cout<<"The cat1 is ";
	cat1.printAge();
	cout<<" years old"<<endl;
	cout<<"It is ";
	cat1.printWeight();
	cout<<" kilograms"<<endl;
	cout<<"It is ";
	cat1.printColor();
	cout<<endl;
	cat2.setAge(6);
	cat2.setWeight(10);
	cat2.setColor("Black");
	cout<<"The cat2 is ";
	cat2.printAge();
	cout<<" years old"<<endl;
	cout<<"It is ";
	cat2.printWeight();
	cout<<" kilograms"<<endl;
	cout<<"It is ";
	cat2.printColor();
	
	return 0;
	
}

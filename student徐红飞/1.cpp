#include <iostream>
#include <String>
using namespace std;
class Cat{
	private:
		int age,weight;
		string color;
    public:
    	void setAge(int age){
    		this->age=age;
		}
			void setWeight(int weight){
    		this->weight=weight;
		}
			void setColor(string color){
    		this->color=color;
		}
		int getAge(){
			return age;
		}
		int getWeight(){
			return weight;
		}
		string  getColor(){
			return color;
		}
			
}; 
int main(){
	Cat c;
	c.setAge(2);
	c.setWeight(8);
	c.setColor("white");
	cout<<"è��������"<<c.getAge()<<",  "<<"è��������"<<c.getWeight()<<",  "<<"è����ɫ��"<<c.getColor()<<",  "<<endl;
	return 0; 
}

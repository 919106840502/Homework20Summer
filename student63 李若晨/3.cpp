#include<iostream>
#include<string>
using namespace std;
class Person {
public:	string name;
	char sex;
	string fa;
	string ma;

	Person() {}
	Person(string name, char sex, string fa, string ma) :name(name), sex(sex), fa(fa), ma(ma) {}
	bool xdjm(Person one, Person two) {
		return(one.fa == two.fa || one.ma == two.ma);
	}

	void print() {
		cout << name << " " << sex<<endl;
	}

	Person& operator=(const Person& e) {
		return *this;
	}
	~Person() {}
};
int main() {
	Person a("a", 'm', "b", "c"), b("b", 'm', "d", "e"), c("c", 'f', "e", "g"), d("d", 'm', "h", "g"), g("g", 'f', "j", "k");
	Person P[8]{ a , b , c , d , g };
	cout << "���ǣ�"<<endl;
	a.print();
	cout << "����ֵܽ����У�"<<endl;
	for (int i = 1; i < 5; i++) {
		if ( a.xdjm(a, P[i]))
			cout<<P[i].name<<endl;
	}
	cout << "����游ĸ�ǣ�"<<endl;
	int i = 0;
	for (; i < 5; i++) {
		
			if ( a.fa == P[i].name)
			{cout<<P[i].fa<<","<<P[i].ma;
				}	
		}


	cout << "������游ĸ�ǣ�"<<endl;
	for ( ; i < 5; i++) {
			if (a.ma == P[i].name)
				cout<<P[i].fa<<P[i].ma<<endl;
	}
}



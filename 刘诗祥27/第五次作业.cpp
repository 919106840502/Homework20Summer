using namespace std;
#include <iostream>
class Fraction{
	int x;
	int y;//���Ӻͷ�ĸ
public:
    Fraction(int a,int b)
	{
		x=a;
		y=b;
		if(y<0)
		{
			x=-x;
			y=-y;
		}//��ĸ����0
		int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i&&y%i)
			{
				x/=i;
				y/=i;
			}
		 } //���� 
	 } //���캯�� 
	 void show()
	 {
	 	 cout<<x<<"/"<<y<<endl;//����
	 }
	 Fraction & operator + (const Fraction & c)
	 {
	 	x=x*c.y+y*c.x;
	 	y=y*c.y;
	 	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}
			} 
	 }//�ӷ�
	 Fraction & operator - (const Fraction & c){
	 	x=x*c.y-y*c.x;
	 	y=y*c.y;
	 	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}}
	  }//����
	  Fraction & operator *(const Fraction &c)
	  {
	  	x=x*c.x;
	  	y=y*c.y;
	  	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i==0&&y%i==0)
			{
				x/=i;
				y/=i;
			}
		}
	   } //�˷�
	   Fraction & operator /(const Fraction &c)
	   {
	   	x=x*c.y;
	   	y=y*c.x;
	   	int max;
		x>y?max=x:max=y;
		for(int i=2;i<=max;i++)
		{
			if(x%i&&y%i)
			{
				x/=i;
				y/=i;
			}
		} //����
		operator double(){
			double t=(double)x/(double)y;
			return t;
		 } 
		 
		 
		 
		 } //����ת�� 
};
 main(){
	Fraction a(1,2),b(1,3),c(1,1);
	c=a+b;c.show();
	c=a-b;c.show();
	c=a*b;c.show();
	c=a/b;c.show();
	return 0;
	
}



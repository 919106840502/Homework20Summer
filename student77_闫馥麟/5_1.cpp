//�α�P347.5.��1����2����4��

#include<iostream>
#include<cstring>
using namespace std;

class Fraction
{
	int fenzi, fenmu;
public:
	Fraction() { fenzi = 1, fenmu = 1; }
	Fraction(int fenzi, int fenmu);
	void print();
	Fraction operator+(const Fraction& b);
	Fraction operator-(const Fraction& b);
	Fraction operator*(const Fraction& b);
	Fraction operator/(const Fraction& b);
	operator double();
};

Fraction::Fraction(int fenzi, int fenmu)
{
	int gcd = fenzi > fenmu ? fenmu : fenzi;
	while (fenzi % gcd != 0 || fenmu % gcd != 0)
		gcd--;
	fenzi /= gcd;
	fenmu /= gcd;
	this->fenzi = fenzi;
	this->fenmu = fenmu;
}

void Fraction::print()
{
	if (fenzi == 0)
		cout << 0 << endl;
	if (fenzi == fenmu)
		cout << 1 << endl;
	int maxs = fenzi > fenmu ? fenzi : fenmu;
	if (maxs > 0 && maxs <= 9)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��-" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 10 && maxs <= 99)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��--" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 100 && maxs <= 999)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��---" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 1000 && maxs <= 9999)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��----" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 10000 && maxs <= 99999)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��-----" << endl;
		cout << "        " << fenmu << endl;
	}
	if (maxs >= 100000 && maxs <= 999999)
	{
		cout << "        " << fenzi << endl;
		cout << "���Ϊ��------" << endl;
		cout << "        " << fenmu << endl;
	}
}

Fraction Fraction::operator+(const Fraction& b)
{
	int gcd = fenmu > b.fenmu ? b.fenmu : fenmu;
	while (fenmu % gcd != 0 || b.fenmu % gcd != 0)
		gcd--;
	int lcm = fenmu * b.fenmu / gcd;
	int t1 = lcm / fenmu, t2 = lcm / b.fenmu;
	int z1 = fenzi * t1, z2 = b.fenzi * t2;
	int z3 = z1 + z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator-(const Fraction& b)
{
	int gcd = fenmu > b.fenmu ? b.fenmu : fenmu;
	while (fenmu % gcd != 0 || b.fenmu % gcd != 0)
		gcd--;
	int lcm = fenmu * b.fenmu / gcd;
	int t1 = lcm / fenmu, t2 = lcm / b.fenmu;
	int z1 = fenzi * t1, z2 = b.fenzi * t2;
	int z3 = z1 - z2;
	return Fraction(z3, lcm);
}

Fraction Fraction::operator*(const Fraction& b)
{
	return Fraction(fenzi * b.fenzi, fenmu * b.fenmu);
}

Fraction Fraction::operator/(const Fraction& b)
{
	int fenzi2 = b.fenmu, fenmu2 = b.fenzi;
	return Fraction(fenzi * fenzi2, fenmu * fenmu2);
}

Fraction::operator double()
{
	double res = 0.0;
	double fz = double(fenzi);
	double fm = double(fenmu);
	res = fz / fm;
	return res;
}

int main()
{
	int fenmu1, fenzi1,fenmu2, fenzi2;
	while (cout << "�������һ�������ķ��Ӻͷ�ĸ������0���˳�" << endl, cin >> fenzi1 && fenzi1 != 0)
	{
		cin >> fenmu1, cout << "������ڶ��������ķ��Ӻͷ�ĸ" << endl, cin >> fenzi2 >> fenmu2;
		if (fenmu1 <= 0 || fenmu2 <= 0)
		{
			cout << "Ҫ���ĸ����0" << endl;
			continue;
		}
		double res = 0.0;
		Fraction frac1(fenzi1, fenmu1);
		Fraction frac2(fenzi2, fenmu2);
		Fraction res_frac;
		string mode;
		while (cout << "�� + - * / ��ѡ��һ�ּ��㷽ʽ������back���˻���һ����" << endl, cin >> mode && mode != "back")
		{
			if (mode == "+")
			{
				res_frac = frac1 + frac2;
				int choice;
				cout << "�Է�����ʽ�鿴����밴1����С����ʽ�鿴����밴2" << endl;
				cin >> choice;
				if (choice==1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "���Ϊ��" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "-")
			{
				res_frac = frac1 - frac2;
				int choice;
				cout << "�Է�����ʽ�鿴����밴1����С����ʽ�鿴����밴2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "���Ϊ��" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "*")
			{
				res_frac = frac1 * frac2;
				int choice;
				cout << "�Է�����ʽ�鿴����밴1����С����ʽ�鿴����밴2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "���Ϊ��" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
			if (mode == "/")
			{
				res_frac = frac1 / frac2;
				int choice;
				cout << "�Է�����ʽ�鿴����밴1����С����ʽ�鿴����밴2" << endl;
				cin >> choice;
				if (choice == 1)
					res_frac.print();
				else if (choice == 2)
				{
					res = res_frac;
					cout << "���Ϊ��" << res << endl;
				}
				else
					cout << "Error" << endl;
			}
		}
	}
	return 0;
}
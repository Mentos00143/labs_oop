#include "rational.h"
#include <iostream>
using namespace std;
rational::rational()
{
	num = 0;
	den = 1;
}
rational::rational(int Num)
{
	num = Num;
	den = 1;
}
rational::rational(int Num, int Den)
{
	num = Num;
	den = Den;
}
int rational::GetNum()
{
	return num;
}
int rational::GetDen()
{
	return den;
}
void rational::SetNum(int Num)
{
	num = Num;
}
void rational::SetDen(int Den)
{
	den = Den;
}
void rational::print()
{
	if (num > 0 && den < 0)
	{
		num = -num;
		den = -den;
	}
	cout << num << "/" << den << endl;
}
int rational::MaxSpilDiln(int N, int D)
{
	int S;

	if (N > D)
	{
		if (D < 0)
		{
			for (int i = -1; i >= D; i--)
			{
				if (N%i == 0 && D%i == 0)
				{
					S = i;
				}
			}
		}
		else if (D > 0)
		{
			for (int i = 1; i <= D; i++)
			{
				if (N%i == 0 && D%i == 0)
				{
					S = i;
				}
			}
		}
	}
	else if (N < D)
	{
		if (N>0)
		{
			for (int i = 1; i <= N; i++)
			{
				if (D%i == 0 && N%i == 0)
				{
					S = i;
				}
			}
		}
		else if (N < 0)
		{
			for (int i = -1; i >= N; i--)
			{
				if (D%i == 0 && N%i == 0)
				{
					S = i;
				}
			}
		}
		else if (N == 0)
		{
			S = 1;
		}
	}
	else if (N == D)
	{
		S = N;
	}
	return S;
}
void rational::reduc(int N, int D, int S)
{
	num = N / S;
	den = D / S;
}
void rational::Add(int N1, int D1, int N2, int D2)
{
	int s;
	num = D2*N1 + D1*N2;
	den = D1*D2;
	s = this->MaxSpilDiln(this->GetNum(), this->GetDen());
	this->reduc(this->GetNum(), this->GetDen(), s);
}
void rational::Sub(int N1, int D1, int N2, int D2)
{
	int s;
	num = D2*N1 - D1*N2;
	den = D1*D2;
	s = this->MaxSpilDiln(this->GetNum(), this->GetDen());
	this->reduc(this->GetNum(), this->GetDen(), s);
}
void rational::mul(int N1, int D1, int N2, int D2)
{
	int s;
	num = N1*N2;
	den = D1*D2;
	s = this->MaxSpilDiln(this->GetNum(), this->GetDen());
	this->reduc(this->GetNum(), this->GetDen(), s);
}
void rational::div(int N1, int D1, int N2, int D2)
{
	int s, buf = N2;
	N2 = D2;
	D2 = buf;
	if (D2 < 0)
	{
		D2 = -D2;
		N2 = -N2;
	}
	num = N1*N2;
	den = D1*D2;
	s = this->MaxSpilDiln(this->GetNum(), this->GetDen());
	this->reduc(this->GetNum(), this->GetDen(), s);
}
void rational::systx(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2, int f1, int f2)
{
	rational det;
	rational *dob1 = new rational;
	rational *dob2 = new rational;
	dob1->mul(a1, a2, e1, e2);
	dob2->mul(d1, d2, b1, b2);
	dob1->Sub(dob1->num, dob1->den, dob2->num, dob2->den);
	det.num = dob1->GetNum();
	det.den = dob1->GetDen();
	delete(dob1);
	delete(dob2);
	rational *dob3 = new rational;
	rational *dob4 = new rational;
	dob3->mul(c1,c2,e1,e2);
	dob4->mul(b1,b2,f1,f2);
	dob3->Sub(dob3->num, dob3->den, dob4->num, dob4->den);
	this->div(dob3->num, dob3->den, det.num, det.den);
	this->print();
	delete(dob3);
	delete(dob4);
}
void rational::systy(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2, int f1, int f2)
{
	rational det;
	rational *dob1 = new rational;
	rational *dob2 = new rational;;
	dob1->mul(a1, a2, e1, e2);
	dob2->mul(d1, d2, b1, b2);
	dob1->Sub(dob1->num, dob1->den, dob2->num, dob2->den);
	det.num = dob1->GetNum();
	det.den = dob1->GetDen();
	delete(dob1);
	delete(dob2);
	rational *dob3 = new rational;
	rational *dob4 = new rational;
	dob3->mul(a1, a2, f1, f2);
	dob4->mul(d1, d2, c1, c2);
	dob3->Sub(dob3->num, dob3->den, dob4->num, dob4->den);
	this->div(dob3->num, dob3->den, det.num, det.den);
	this->print();
	delete(dob3);
	delete(dob4);
}
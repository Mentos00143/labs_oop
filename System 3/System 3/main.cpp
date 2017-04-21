#include<iostream>
using namespace std;
double resl;
void main()
{
	setlocale(LC_ALL, "Rus");
	double c = 52, d = -5.0;
	double a, b;
	do
	{
		cout << "¬ведiть a" << endl;
		cin >> a;
		while (a == 0) return;
		cout << "¬ведiть b" << endl;
		cin >> b;
		if (a>b){

			//52b/a+b
			__asm
			{

				fld c
					fld st(0)//52
					fld b
					fld st(1)//b
					fld a
					fld st(2)//a
					fmul st(0), st(1)
					fdivr st(0), st(2)
					fadd b
					fst resl
					fst st(3)
			}
			cout << "Result= " << resl << endl;
		}
		else
		if (a == b)
		{
			cout << "-125" << endl;
		}
		else
		if (a < b)
		{
			//(a-5)/b
			__asm
			{
				    fld a
					fxch st(0)//a
					fld b
					fxch st(1)//b
					fld d
					fxch st(2)//-5
					fadd st(0), st(2)
					fdiv st(0), st(1)
					fst resl
					fst st(0)
			}
			cout << "Result= " << resl << endl;
		}
	} while (a != 0);
}
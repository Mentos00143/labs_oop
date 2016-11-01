#include "rational.h"
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise;
	do
	{
		system("cls");
		cout << "\t����\n";
		cout << "1 -> ������ ��������� ������� ������ ���� �����;\n";
		cout << "2 -> ��������� ��� �� ����������;\n";
		cout << "3 -> ������ ��� �����;\n";
		cout << "4 -> ������ ������ ���� �����;\n";
		cout << "5 -> ��������� ��� �����;\n";
		cout << "6 -> ������� ��� �����;\n";
		cout << "7 -> ����'����� ������� ������;\n";
		cout << "0 -> �����.\n";
		cout << "��� ����: ";
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
				  system("cls");
				  rational *NUM = new rational;
				  int a, b;
				  cout << "������ ����� �����: "; cin >> a;
				  NUM->SetDen(a);
				  cout << "������ ����� �����: "; cin >> b;
				  NUM->SetDen(b);
				  cout<<"��������� ������� ������ ������� �����: "<<NUM->MaxSpilDiln(a, b);
				  delete(NUM);
				  system("pause>>void");
				  break;
		}
		case 2:
		{
				  system("cls");
				  rational *NUM = new rational;
				  int a, b, s;
				  cout << "������ ���������: "; cin >> a;
				  NUM->SetNum(a);
				  do{
					  cout << "������ ���������: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b <= 0);
				  NUM->SetDen(b);
				  s = NUM->MaxSpilDiln(a, b);
				  NUM->reduc(NUM->GetNum(), NUM->GetDen(), s);
				  NUM->print();
				  delete(NUM);
				  system("pause>>void");
				  break;
		}
		case 3:
		{
				  system("cls");
				  int a, b, c, d;
				  rational *Num1 = new rational;
				  rational *Num2 = new rational;
				  cout << "1)������ ��������� 1-�� �����: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)������ ��������� 1-�� �����: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)������ ��������� 2-�� �����: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)������ ��������� 2-�� �����: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (d <= 0);
				  Num2->SetDen(d);
				  Num1->Add(Num1->GetNum(),Num1->GetDen(),Num2->GetNum(),Num2->GetDen());
				  Num1->print();
				  delete(Num1);
				  delete(Num2);
				  system("pause>>void");
				  break;
		}
		case 4:
		{
				  system("cls");
				  int a, b, c, d;
				  rational *Num1 = new rational;
				  rational *Num2 = new rational;
				  cout << "1)������ ��������� 1-�� �����: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)������ ��������� 1-�� �����: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)������ ��������� 2-�� �����: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)������ ��������� 2-�� �����: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (d <= 0);
				  Num2->SetDen(d);
				  Num1->Sub(Num1->GetNum(), Num1->GetDen(), Num2->GetNum(), Num2->GetDen());
				  Num1->print();
				  delete(Num1);
				  delete(Num2);
				  system("pause>>void");
				  break;
		}
		case 5:
		{
				  system("cls");
				  int a, b, c, d;
				  rational *Num1 = new rational;
				  rational *Num2 = new rational;
				  cout << "1)������ ��������� 1-�� �����: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)������ ��������� 1-�� �����: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)������ ��������� 2-�� �����: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)������ ��������� 2-�� �����: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (d <= 0);
				  Num2->SetDen(d);
				  Num1->mul(Num1->GetNum(), Num1->GetDen(), Num2->GetNum(), Num2->GetDen());
				  Num1->print();
				  delete(Num1);
				  delete(Num2);
				  system("pause>>void");
				  break;
		}
		case 6:
		{
				  system("cls");
				  int a, b, c, d;
				  rational *Num1 = new rational;
				  rational *Num2 = new rational;
				  cout << "1)������ ��������� 1-�� �����: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)������ ��������� 1-�� �����: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)������ ��������� 2-�� �����: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)������ ��������� 2-�� �����: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (d <= 0);
				  Num2->SetDen(d);
				  Num1->div(Num1->GetNum(), Num1->GetDen(), Num2->GetNum(), Num2->GetDen());
				  Num1->print();
				  delete(Num1);
				  delete(Num2);
				  system("pause>>void");
				  break;
		}
		case 7:
		{
				  system("cls");
				  rational *a = new rational;
				  rational *b = new rational;
				  rational *c = new rational;
				  rational *d = new rational;
				  rational *e = new rational;
				  rational *f = new rational;
				  rational *x = new rational;
				  rational *y = new rational;
				  int a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2;
				  cout << "a)������ ��������� ����� �: "; cin >> a1;
				  a->SetNum(a1);
			  do{
				  cout << "a)������ ��������� ����� a: "; cin >> a2;
				  if (a2 <= 0)
				  {
					  cout << "��������� ������� ���� ������ �� ����!\n";
				  }
			  } while (a2 <= 0);
				  a->SetDen(a2);
				  cout << "b)������ ��������� ����� b: "; cin >> b1;
				  b->SetNum(b1);
				  do{
					  cout << "b)������ ��������� ����� b: "; cin >> b2;
					  if (b2 <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (b2 <= 0);
				  b->SetDen(b2);
				  cout << "c)������ ��������� ����� c: "; cin >> c1;
				  c->SetNum(c1);
				  do{
					  cout << "c)������ ��������� ����� c: "; cin >> c2;
					  if (c2 <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (c2 <= 0);
				  c->SetDen(c2);
				  cout << "d)������ ��������� ����� d: "; cin >> d1;
				  d->SetNum(d1);
				  do{
					  cout << "d)������ ��������� ����� d: "; cin >> d2;
					  if (d2 <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (d2 < -0);
				  d->SetDen(d2);
				  cout << "e)������ ��������� ����� e: "; cin >> e1;
				  e->SetNum(e1);
				  do{
					  cout << "e)������ ��������� ����� e: "; cin >> e2;
					  if (e2 <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (e2 <= 0);
				  e->SetDen(e2);
				  cout << "f)������ ��������� ����� f: "; cin >> f1;
				  f->SetNum(f1);
				  do{
					  cout << "f)������ ��������� ����� f: "; cin >> f2;
					  if (f2 <= 0)
					  {
						  cout << "��������� ������� ���� ������ �� ����!\n";
					  }
				  } while (f2 <= 0);
				  f->SetDen(f2);
				  cout << "X = ";
				  x->systx(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2);
				  cout << "\nY = ";
				  y->systy(a1, a2, b1, b2, c1, c2, d1, d2, e1, e2, f1, f2);
				  delete(a);
				  delete(b);
				  delete(c);
				  delete(d);
				  delete(e);
				  delete(f);
				  delete(x);
				  delete(y);
				  system("pause>>void");
				  break;
		}
		case 0:
		{
				  system("cls");
				  cout << "����� ���!";
				  system("pause>>void");
				  break;
		}
		default:
		{
				   system("cls");
				   cout << "�� ����� ���������� ��������!";
				   system("pause>>void");
				   break;
		}
		}
	} while (choise != 0);
}
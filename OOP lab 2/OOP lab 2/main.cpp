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
		cout << "\tћеню\n";
		cout << "1 -> «найти найб≥льший сп≥льний д≥льник двох чисел;\n";
		cout << "2 -> ѕерев≥рити др≥б на скоротн≥сть;\n";
		cout << "3 -> ƒодати два дроби;\n";
		cout << "4 -> «найти р≥зницю двох дроб≥в;\n";
		cout << "5 -> ѕомножити два дроби;\n";
		cout << "6 -> ѕод≥лити два дроби;\n";
		cout << "7 -> –озв'€зати систему р≥вн€нь;\n";
		cout << "0 -> ¬ийти.\n";
		cout << "¬аш виб≥р: ";
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
				  system("cls");
				  rational *NUM = new rational;
				  int a, b;
				  cout << "¬вед≥ть перше число: "; cin >> a;
				  NUM->SetDen(a);
				  cout << "¬вед≥ть друге число: "; cin >> b;
				  NUM->SetDen(b);
				  cout<<"Ќайб≥льший сп≥льний д≥льник заданих чисел: "<<NUM->MaxSpilDiln(a, b);
				  delete(NUM);
				  system("pause>>void");
				  break;
		}
		case 2:
		{
				  system("cls");
				  rational *NUM = new rational;
				  int a, b, s;
				  cout << "¬вед≥ть чисельник: "; cin >> a;
				  NUM->SetNum(a);
				  do{
					  cout << "¬вед≥ть знаменник: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "1)¬вед≥ть чисельник 1-го дробу: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)¬вед≥ть знаменник 1-го дробу: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)¬вед≥ть чисельник 2-го дробу: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)¬вед≥ть знаменник 2-го дробу: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "1)¬вед≥ть чисельник 1-го дробу: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)¬вед≥ть знименник 1-го дробу: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)¬вед≥ть чисельник 2-го дробу: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)¬вед≥ть знименник 2-го дробу: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "1)¬вед≥ть чисельник 1-го дробу: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)¬вед≥ть знименник 1-го дробу: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)¬вед≥ть чисельник 2-го дробу: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)¬вед≥ть знименник 2-го дробу: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "1)¬вед≥ть чисельник 1-го дробу: "; cin >> a;
				  Num1->SetNum(a);
				  do{
					  cout << "1)¬вед≥ть знименник 1-го дробу: "; cin >> b;
					  if (b <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (b <= 0);
				  Num1->SetDen(b);
				  cout << "2)¬вед≥ть чисельник 2-го дробу: "; cin >> c;
				  Num2->SetNum(c);
				  do{
					  cout << "2)¬вед≥ть знименник 2-го дробу: "; cin >> d;
					  if (d <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "a)¬вед≥ть чисельник дробу а: "; cin >> a1;
				  a->SetNum(a1);
			  do{
				  cout << "a)¬вед≥ть знаменник дробу a: "; cin >> a2;
				  if (a2 <= 0)
				  {
					  cout << "«наменник повинен бути б≥льшим за нуль!\n";
				  }
			  } while (a2 <= 0);
				  a->SetDen(a2);
				  cout << "b)¬вед≥ть чисельник дробу b: "; cin >> b1;
				  b->SetNum(b1);
				  do{
					  cout << "b)¬вед≥ть знаменник дробу b: "; cin >> b2;
					  if (b2 <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (b2 <= 0);
				  b->SetDen(b2);
				  cout << "c)¬вед≥ть чисельник дробу c: "; cin >> c1;
				  c->SetNum(c1);
				  do{
					  cout << "c)¬вед≥ть знаменник дробу c: "; cin >> c2;
					  if (c2 <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (c2 <= 0);
				  c->SetDen(c2);
				  cout << "d)¬вед≥ть чисельник дробу d: "; cin >> d1;
				  d->SetNum(d1);
				  do{
					  cout << "d)¬вед≥ть знаменник дробу d: "; cin >> d2;
					  if (d2 <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (d2 < -0);
				  d->SetDen(d2);
				  cout << "e)¬вед≥ть чисельник дробу e: "; cin >> e1;
				  e->SetNum(e1);
				  do{
					  cout << "e)¬вед≥ть знаменник дробу e: "; cin >> e2;
					  if (e2 <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
					  }
				  } while (e2 <= 0);
				  e->SetDen(e2);
				  cout << "f)¬вед≥ть чисельник дробу f: "; cin >> f1;
				  f->SetNum(f1);
				  do{
					  cout << "f)¬вед≥ть знаменник дробу f: "; cin >> f2;
					  if (f2 <= 0)
					  {
						  cout << "«наменник повинен бути б≥льшим за нуль!\n";
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
				  cout << "ўасти вам!";
				  system("pause>>void");
				  break;
		}
		default:
		{
				   system("cls");
				   cout << "¬и ввели некоректне значенн€!";
				   system("pause>>void");
				   break;
		}
		}
	} while (choise != 0);
}
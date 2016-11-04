#include "lisp.h"
#include <iostream>
#include <windows.h>
using namespace std;
void main()
{
	char v;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise;
	do
	{
		cout << "\tћеню\n";
		cout << "1 - «найти елемент по його позиц≥њ в списку\n";
		cout << "2 - ѕерев≥рити списки на р≥вн≥сть\n";
		cout << "3 - ќб'Їднати списки\n";
		cout << "4 - ѕрисвоњти порожньому списку не порожн≥й\n";
		cout << "0 - ¬ийти\n\n";
		cout << "¬аш вибiр: ";
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
				  system("cls");
				  lisp *head = NULL;
				  int e;
				  cout << "¬вед≥ть к≥льк≥сть елемент≥в у списку:"; cin >> e;
				  for (int i = 0; i < e; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента: ";
					  cin >> v;
					  head->input(&head, v);
					  head->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  head->print(head);
				  int i;
				  char c;
				  do{
					  do
					  {
						  cout << "¬вед≥ть позиц≥ю елемента: "; cin >> i;
						  if (i <= 0)
						  {
							  cout << "„исло повинне бути б≥льшим за нуль!\n";
						  }
					  } while (i <= 0);
					  c = head->operator[](i);
				  } while (c == '†');
				  cout << c << endl;
				  break;
		}
		case 2:
		{
				  system("cls");
				  lisp *first = NULL;
				  lisp *second = NULL;
				  int n;
				  do
				  {
					  cout << "¬вед≥ть к≥льк≥сть елемент≥в у списках: "; cin >> n;
					  if (n <= 0)
					  {
						  cout << "„исло повинне бути б≥льшим за нуль!\n";
					  }
				  } while (n <= 0);
				  for (int i = 0; i < n; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента 1-го списку: ";
					  cin >> v;
					  first->input(&first, v);
					  first->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  for (int i = 0; i < n; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента 2-го списку: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  first->operator==(second);
				  break;
		}
		case 3:
		{
				  system("cls");
				  lisp *first = NULL;
				  lisp *second = NULL;
				  int n,x;
				  do
				  {
					  cout << "¬вед≥ть к≥льк≥сть елемент≥в у 1 списку: "; cin >> n;
					  if (n <= 0)
					  {
						  cout << "„исло повинне бути б≥льшим за нуль!\n";
					  }
				  } while (n <= 0);
				  for (int i = 0; i < n; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента 1-го списку: ";
					  cin >> v;
					  first->input(&first, v);
					  first->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  do
				  {
					  cout << "¬вед≥ть к≥льк≥сть елемент≥в у 2 списку: "; cin >> x;
					  if (x <= 0)
					  {
						  cout << "„исло повинне бути б≥льшшим за нуль!\n";
					  }
				  } while (x <= 0);
				  for (int i = 0; i < x; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента 2-го списку: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  first->operator+(second);
				  break;
		}
		case 4:
		{
				  system("cls");
				  lisp *first = NULL;
				  lisp *second = NULL;
				  int x;
				  do
				  {
					  cout << "¬вед≥ть к≥льк≥сть елемент≥в у 2 списку: "; cin >> x;
					  if (x <= 0)
					  {
						  cout << "„исло повинне бути б≥льшшим за нуль!\n";
					  }
				  } while (x <= 0);
				  for (int i = 0; i < x; i++)
				  {
					  cout << "¬ведiть значенн€ " << i + 1 << " елемента 2-го списку: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "≈лемент успiшно додано!\n";
				  }
				  first->operator=(*second);
				  break;
		}
		case 0:
		{
				  system("cls");
				  cout << "ўасти вам!";
				  break;
		}
		default:
		{
				   cout << "¬и ввели не коректний вираз!\a\n";
				   break;
		}
		}
		system("pause>>void");
		system("cls");
	} while (choise != 0);
}
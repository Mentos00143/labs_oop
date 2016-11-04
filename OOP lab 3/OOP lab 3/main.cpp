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
		cout << "\t����\n";
		cout << "1 - ������ ������� �� ���� ������� � ������\n";
		cout << "2 - ��������� ������ �� ������\n";
		cout << "3 - ��'������ ������\n";
		cout << "4 - �������� ���������� ������ �� �������\n";
		cout << "0 - �����\n\n";
		cout << "��� ���i�: ";
		cin >> choise;
		switch (choise)
		{
		case 1:
		{
				  system("cls");
				  lisp *head = NULL;
				  int e;
				  cout << "������ ������� �������� � ������:"; cin >> e;
				  for (int i = 0; i < e; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " ��������: ";
					  cin >> v;
					  head->input(&head, v);
					  head->Set_el(v);
					  cout << "������� ���i��� ������!\n";
				  }
				  head->print(head);
				  int i;
				  char c;
				  do{
					  do
					  {
						  cout << "������ ������� ��������: "; cin >> i;
						  if (i <= 0)
						  {
							  cout << "����� ������� ���� ������ �� ����!\n";
						  }
					  } while (i <= 0);
					  c = head->operator[](i);
				  } while (c == '�');
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
					  cout << "������ ������� �������� � �������: "; cin >> n;
					  if (n <= 0)
					  {
						  cout << "����� ������� ���� ������ �� ����!\n";
					  }
				  } while (n <= 0);
				  for (int i = 0; i < n; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " �������� 1-�� ������: ";
					  cin >> v;
					  first->input(&first, v);
					  first->Set_el(v);
					  cout << "������� ���i��� ������!\n";
				  }
				  for (int i = 0; i < n; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " �������� 2-�� ������: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "������� ���i��� ������!\n";
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
					  cout << "������ ������� �������� � 1 ������: "; cin >> n;
					  if (n <= 0)
					  {
						  cout << "����� ������� ���� ������ �� ����!\n";
					  }
				  } while (n <= 0);
				  for (int i = 0; i < n; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " �������� 1-�� ������: ";
					  cin >> v;
					  first->input(&first, v);
					  first->Set_el(v);
					  cout << "������� ���i��� ������!\n";
				  }
				  do
				  {
					  cout << "������ ������� �������� � 2 ������: "; cin >> x;
					  if (x <= 0)
					  {
						  cout << "����� ������� ���� ������� �� ����!\n";
					  }
				  } while (x <= 0);
				  for (int i = 0; i < x; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " �������� 2-�� ������: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "������� ���i��� ������!\n";
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
					  cout << "������ ������� �������� � 2 ������: "; cin >> x;
					  if (x <= 0)
					  {
						  cout << "����� ������� ���� ������� �� ����!\n";
					  }
				  } while (x <= 0);
				  for (int i = 0; i < x; i++)
				  {
					  cout << "����i�� �������� " << i + 1 << " �������� 2-�� ������: ";
					  cin >> v;
					  second->input(&second, v);
					  second->Set_el(v);
					  cout << "������� ���i��� ������!\n";
				  }
				  first->operator=(*second);
				  break;
		}
		case 0:
		{
				  system("cls");
				  cout << "����� ���!";
				  break;
		}
		default:
		{
				   cout << "�� ����� �� ��������� �����!\a\n";
				   break;
		}
		}
		system("pause>>void");
		system("cls");
	} while (choise != 0);
}
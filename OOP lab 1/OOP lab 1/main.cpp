#include <iostream>
#include <string>
#include "product.h"
#include <windows.h>
using namespace std;
void main()
{
	int w;
	product prod;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	do
	{
		system("cls");
		cout << "\tВИБЕРIТЬ ДIЮ:" << endl;
		cout << "1 > Додати iнформацiю про вирiб" << endl;
		cout << "2 > Вивести список виробiв" << endl;
		cout << "0 > Вихiд з програми" << endl;
		cout << endl;
		cout << "Ваш вибiр: ";
		cin >> w;
		system("cls");
		switch (w)
		{
		case 1:
		{
				  system("cls");
				  char i[15];
				  char j[15];
				  int b;
				  cout << "Введiть назву виробу: "; cin >> i;
				  cout << "Введiть шифр: "; cin >> j;
				  cout << "Введiть кiлькiсть: "; cin >> b;
				  prod.Set(i, j, b);
				  system("pause");
				  system("cls");
				  break;
		}
		case 2:
		{
				  system("cls");
				  prod.Show();
				  system("pause>>void");
				  system("cls");
				  break;
		}
		case 0:
		{
				  system("cls");
				  cout << "Good Luck!";
				  system("pause>>void");
				  break;
		}
		default:
		{
				   system("cls");
				   cout << "You entered false number!!!";
				   system("pause>>void");
				   break;
		}
		}
	} while (w != 0);
}
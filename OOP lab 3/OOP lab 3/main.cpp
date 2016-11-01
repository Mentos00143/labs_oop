#include "lisp.h"
#include <iostream>
using namespace std;
void main()
{
	lisp *head = NULL; // ��������� �� ������ ������� ������, ��� �� �� ����� ����, ������ �������
	char v; // ���� � �� ���� �������� ������������ �������, � "�" - ��� ������� ������
	setlocale(LC_ALL, "RUS");
	int choise; // ����� ��� ������������ ����
	do
	{
		cout << "1 - ������ �������\n";
		cout << "2 - �������� �������\n";
		cout << "3 - ������� �������� ������\n";
		cout << "4 - �����\n\n";
		cout << "��� ���i�: ";
		cin >> choise;
		switch (choise) // ����
		{
		case 1:
			cout << "����i�� �������� ��������: ";
			cin >> v;
			head->addToBegin(&head, v);//��� ����� 1 ����������� ������� ��������� �������� � ���������� ����������� ������ � ��������� ������������ � ��������� ��������
			cout << "������� ���i��� ������!\n";
			break;
		case 2:
			if (head == NULL)//�������� �� ������ �� �������
			{
				cout << "������ ������!\a\n";
			}
			else
			{
				head->del(head);//���� �� ������� ����������� ������� ��������� ��������
			}
			break;
		case 3:
			if (head == NULL)//�������� �� ������ �� �������
			{
				cout << "������ ������!\a\n";
			}
			else
			{
				head->print(head);//���� �� ������� ����������� ������� ��������� ������ �� �����
			}
			break;
		case 4:
			break;
		default:
			cout << "�� ����� �� ��������� �����!\a\n";
			break;
		}
		system("pause>>void");
		system("cls");
	} while (choise != 4);
}
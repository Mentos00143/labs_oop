#include "lisp.h"
#include <iostream>
using namespace std;
lisp::lisp()
{
	el = ' ';
	next = NULL;
}
lisp::~lisp()
{

}
void lisp::operator=(lisp& second)
{
	lisp *first = &second;
	cout << "������ ������:\n";
	first->print(first);
}
void lisp::Set_el(char a)
{
	el = a;
}
char lisp::Get_el()
{
	return el;
}
void lisp::input(lisp ** head, char &a)
{
	lisp *n = new lisp;
	n->el = a;
	n->next = *head;
	*head = n;
}
void lisp::print(lisp * head)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			cout << head->el << " => ";
			head = head->next;
		}
		else if (head->next == NULL)
		{
			cout << head->el /*<< "=>NULL" */ << endl;
			head = NULL;
		}
	}
}
char lisp::operator[](int i)
{
	int k = 0;
	lisp *first = this;
	while (first != NULL)
	{
		if (first->next != NULL)
		{
			k++;
			if (i == k)
			{
				return first->el;
			}
			first = first->next;
		}
		else if (first->next == NULL)
		{
			k++;
			if (i == k)
			{
				return first->el;
			}
			first = NULL;
		}
	}
	if (first == NULL)
	{
		cout << "� ������ ���� ������ ��������! ������ ����� �����!\n";
		return '�';
	}
}
void lisp::operator==(lisp *second)
{
	lisp *first = this;
	do
	{
		if (first->next != NULL)
		{
			if (first->el != second->el)
			{
				cout << "������ �� � ����������!\n";
				break;
			}
			first = first->next;
			second = second->next;
		}
		else if (first->next == NULL&&first->el == second->el)
		{
			cout << "������ �������!\n";
			break;
		}
		else if (first->next == NULL&&first->el != second->el)
		{
			cout << "������ �� � ����������!\n";
			break;
		}
	} while (first != NULL);
}
void lisp::operator+(lisp* second)
{
	lisp *first = this;
	while (first != NULL)
	{
		if (first->next != NULL)
		{
			first = first->next;
		}
		else if (first->next == NULL)
		{
			first->next = second;
			break;
		}
	}
	first->print(this);
}
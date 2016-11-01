#include "lisp.h"
#include <iostream>
using namespace std;
void lisp::Set_el(char a)
{
	el = a;
}
void lisp::Set_next(lisp *o)
{
	next = o;
}
char lisp::Get_el()
{
	return el;
}
lisp lisp::Get_next()
{
	return *next;
}
void lisp::addToBegin(lisp ** head, char &a)
{
	lisp *n = new lisp;
	n->el = a;
	n->next = *head;
	*head = n;
}
void lisp::del(lisp * head)
{
	if (head == NULL)
		return;
	else
	{
		lisp *p = head;
		if (p->next != NULL)
		{
			while (p->next->next)//��������� ������� �������
				p = p->next;
		}
		if (p->next == NULL)//�������� �� � ������ �� 1 �������
		{
			cout << "��������� 1 �������, ���� �� ����� ��������!\a\n";
			return;
		}
		lisp *n;
		n = p;
		n->next = NULL;//������� �������
		cout << "����i���� ������� ���i��� ��������!\n";
		return;
	}
}
void lisp::print(lisp * head)
{
	while (head != NULL)//���� �� �������� �������� � ������� �� ����������
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

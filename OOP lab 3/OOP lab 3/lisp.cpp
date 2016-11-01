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
			while (p->next->next)//знаходить останній елемент
				p = p->next;
		}
		if (p->next == NULL)//Перевіряє чи в списку не 1 елемент
		{
			cout << "Залишився 1 елемент, його не можна видаляти!\a\n";
			return;
		}
		lisp *n;
		n = p;
		n->next = NULL;//Видаляє елемент
		cout << "Потрiбний елемент успiшно видалено!\n";
		return;
	}
}
void lisp::print(lisp * head)
{
	while (head != NULL)//цикл що виводить елементи з першого до останнього
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

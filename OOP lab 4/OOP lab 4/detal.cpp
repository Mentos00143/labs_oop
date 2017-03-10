#include "detal.h"
#include <string>
#include <iostream>
using namespace std;
detal::detal()
{
	a = 0;
	b = 0;
	next = NULL;
}
detal::detal(int A)
{
	a = A;
	b = 0;
	next = NULL;
}
detal::detal(int A, int B)
{
	a = A;
	b = B;
	next = NULL;
}
detal::~detal()
{
	
}
void detal::SetA()
{
	int A;
	cout << "Vvedite dlinny detali: "; cin >> A;
	a = A;
}
void detal::SetB()
{
	int B;
	cout << "Vvedit shuruny detali: "; cin >> B;
	b = B;
}
int detal::GetA()
{
	return a;
}
int detal::GetB()
{
	return b;
}
int detal::S(int a, int b)
{
	return a*b;
}
int detal::P(int a, int b)
{
	return a * 2 + b * 2;
}
detal** detal::add(detal**head)
{
	detal *N = new detal;
	N->SetA();
	N->SetB();
	N->next = *head;
	*head = N;
	return head;
	delete(N);
}
void detal::show(detal*head)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			cout << "\nDlina detali: " << head->GetA() <<"\nShuruna detali: "<<head->GetA()<< endl;
			cout << "Ploscha detali: " << head->S(head->GetA(), head->GetB()) << "\nPerimeter detali: " << head->P(head->GetA(), head->GetB()) << endl;
			head = head->next;
		}
		else if (head->next == NULL)
		{
			cout << "\nDlina detali: " << head->GetA() << "\nShuruna detali: " << head->GetA() << endl;
			cout << "Ploscha detali: " << head->S(head->GetA(), head->GetB()) << "\nPerimeter detali: " << head->P(head->GetA(), head->GetB()) << endl;
			head = head->next;
			head = NULL;
		}
	}
}
mech::mech()
{
	det = NULL;
	NumOfDet = 0;
	next = NULL;
}
mech::mech(int N)
{
	det = NULL;
	NumOfDet = N;
	next = NULL;
}
mech::~mech()
{

}
void mech::SetNum()
{
	int N;
	cout << "Vvedite colichestvo detaley: "; cin >> N;
	NumOfDet = N;
}
int mech::GetNumOfDet()
{
	return NumOfDet;
}
mech** mech::add(mech**first, detal**second)
{
	mech *N = new mech;
	N->SetNum();
	for (int i = 0; i < N->GetNumOfDet(); i++)
	{
		N->det = *detal::add(second);
	}
	N->next = *first;
	*first = N;
	return first;
	delete(N);
}
void mech::show(mech*head, detal*second)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			cout <<"\nKilkist detaley: " << head->NumOfDet << endl;
			head->detal::show(second);
			head = head->next;
		}
		else if (head->next == NULL)
		{
			cout << "\nKilkist detaley: " << head->NumOfDet << endl;
			head->detal::show(second);
			head = NULL;
		}
	}
}
yzel::yzel()
{
	mechanizm = NULL;
	NameOfYzel = "...";
	NumOfMech = 0;
	next = NULL;
}
yzel::yzel(string Name)
{
	mechanizm = NULL;
	NameOfYzel = Name;
	NumOfMech = 0;
	next = NULL;
}
yzel::yzel(string Name, int Numb)
{
	mechanizm = NULL;
	NameOfYzel = Name;
	NumOfMech = Numb;
	next = NULL;
}
yzel::~yzel()
{

}
string yzel::GetName()
{
	return NameOfYzel;
}
int yzel::GetNumOfMech()
{
	return NumOfMech;
}
void yzel::SetName()
{
	string Name;
	cout << "Vvedite nazvanie yzla: "; cin >> Name;
	NameOfYzel = Name;
}
void yzel::SetNumOfMech()
{
	int Numb;
	cout << "Vvedite colichestvo mechanizmiv: "; cin >> Numb;
	NumOfMech = Numb;
}
yzel** yzel::add(yzel**first, mech**second,detal** third)
{
	yzel *N = new yzel;
	N->SetName();
	N->SetNumOfMech();
	for (int i = 0; i < N->GetNumOfMech(); i++)
	{
		N->mechanizm = *mech::add(second, third);
	}
	N->next = *first;
	*first = N;
	return first;
	delete(N);
}
void yzel::show(yzel*head, mech*second, detal*third)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			cout << "Nazva yzla: " << head->NameOfYzel << "\nKilkist mechanizmiv: " << head->NumOfMech <<endl;
			head->mech::show(second, third);
			head = head->next;
		}
		else if (head->next == NULL)
		{
			cout << "Nazva yzla: " << head->NameOfYzel << "\nKilkist mechanizmiv: " << head->NumOfMech << endl;
			head->mech::show(second, third);
			head = NULL;
		}
	}
}
product::product()
{
	yz = NULL;
	NameProd = "...";
	price = 0;
	NumOfYzel = 0;
	next = NULL;
}
product::product(string Name)
{
	yz = NULL;
	NameProd = Name;
	price = 0;
	NumOfYzel = 0;
	next = NULL;
}
product::product(string Name, int Price)
{
	yz = NULL;
	NameProd = Name;
	price = Price;
	NumOfYzel = 0;
	next = NULL;
}
product::product(string name, int Price, int Num)
{
	yz = NULL;
	NameProd = name;
	price = Price;
	NumOfYzel = Num;
	next = NULL;
}
product::~product()
{

}
string product::GetNameProd()
{
	return NameProd;
}
int product::GetPrice()
{
	return price;
}
int product::GetNumOfYzel()
{
	return NumOfYzel;
}
void product::SetNumOfYzel()
{
	int Num;
	cout << "Vvedite colichestvo yzliv: "; cin >> Num;
	NumOfYzel = Num;
}
void product::SetNameProd()
{
	string Name;
	cout << "Vvedite nazvanie producta: "; cin >> Name;
	NameProd = Name;
}
void product::SetPrice()
{
	int Price;
	cout << "Vvedite ceny na product: "; cin >> Price;
	price = Price;
}
void product::show(product *head,yzel *second,mech *third,detal *fourth)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			cout << head->NameProd << "\nKilkist yzliv: " << head->NumOfYzel << "\nCena: " << head->price<<endl;
			head->yzel::show(second, third, fourth);
			head = head->next;
		}
		else if (head->next == NULL)
		{
			cout << head->NameProd << "\nKilkist yzliv: " << head->NumOfYzel << "\nCena: " << head->price<<endl;
			head->yzel::show(second, third, fourth);
			head = NULL;
		}
	}
}
void product::add(product**first, yzel**second,mech**third,detal**fourth)
{
	product *N = new product;
	N->SetNameProd();
	N->SetPrice();
	N->SetNumOfYzel();
	for (int i = 0; i < N->GetNumOfYzel(); i++)
	{
		N->yz = *yzel::add(second, third, fourth);
	}
	N->next = *first;
	*first = N;
	delete(N);
}
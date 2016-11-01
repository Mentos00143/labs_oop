#include "product.h"
#include <iostream>
using namespace std;
product::product()
{
	name = " ";
	code = " ";
	number = 0;
}
product::product(char* Name, char* Code, int Number)
{
	name = Name;
	code = Code;
	number = Number;
}
product::product(product& a)
{
	name = a.name;
	code = a.code;
	number = a.number;
}
void product::Set(char* Name, char* Code, int Number)
{
	name = Name;
	code = Code;
	number = Number;
}
char* product::GetName()
{
	return name;
}
char* product::GetCode()
{
	return code;
}
int product::GetNumber()
{
	return number;
}
void product::SetName(char* Name)
{
	name = Name;
}
void product::SetCode(char* Code)
{
	code = Code;
}
void product::SetNumber(int Number)
{
	number = Number;
}
void product::Show()
{
	cout << "Назва виробу: " << name << endl << "Шифр: " << code << endl << "Кiлькiсть: " << number << endl;
}
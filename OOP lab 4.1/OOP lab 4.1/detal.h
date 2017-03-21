#include <string>
using namespace std;
class detal
{
private:
	int a, b;
public:
	int S(int a, int b)
	{
		return a*b;
	}
	int P(int a, int b)
	{
		return a * 2 + b * 2;
	}
	void SetA(int A)
	{
		a = A;
	}
	void SetB(int B)
	{
		b = B;
	}
	int GetA()
	{
		return a;
	}
	int GetB()
	{
		return b;
	}
	detal()
	{
		a = 1;
		b = 1;
	}
	detal(int A)
	{
		a = A;
		b = 1;
	}
	detal(int A, int B)
	{
		a = A;
		b = B;
	}
	~detal()
	{

	}
};
class mech :detal
{
private:
	int NumOfDet;
public:
	mech()
	{
		NumOfDet = 2;
	}
	mech(int N)
	{
		NumOfDet = N;
	}
	~mech()
	{

	}
	void SetNum(int N)
	{
		NumOfDet = N;
	}
	int GetNumOfDet()
	{
		return NumOfDet;
	}
};
class yzel :mech, detal
{
private:
	string NameOfYzel;
	int NumOfMech;
public:
	yzel()
	{
		NameOfYzel = "Yzel";
		NumOfMech = 2;
	}
	yzel(string Name)
	{
		NameOfYzel = Name;
		NumOfMech = 2;
	}
	yzel(string Name, int Numb)
	{
		NameOfYzel = Name;
		NumOfMech = Numb;
	}
	~yzel()
	{

	}
	string GetName()
	{
		return (string)NameOfYzel;
	}
	int GetNumOfMech()
	{
		return NumOfMech;
	}
	void SetName(string Name)
	{
		NameOfYzel = Name;
	}
	void SetNumOfMech(int Numb)
	{
		NumOfMech = Numb;
	}
};
class product :yzel, mech, detal
{
private:
	string NameProd;
	int NumOfYzel;
	int price;
	product *next;
public:
	product()
	{
		NameProd = "Prod 1";
		price = 143;
		NumOfYzel = 2;
		next = NULL;
	}
	product(string Name)
	{
		NameProd = Name;
		price = 143;
		NumOfYzel = 2;
		next = NULL;
	}
	product(string Name, int Price)
	{
		NameProd = Name;
		price = Price;
		NumOfYzel = 2;
		next = NULL;
	}
	product(string name, int Price, int Num)
	{
		NameProd = name;
		price = Price;
		NumOfYzel = Num;
		next = NULL;
	}
	~product()
	{

	}
	string GetNameProd()
	{
		return (string)NameProd;
	}
	int GetPrice()
	{
		return price;
	}
	int GetNumOfYzel()
	{
		return NumOfYzel;
	}
	void SetNumOfYzel(int Num)
	{
		NumOfYzel = Num;
	}
	void SetNameProd(string Name)
	{
		NameProd = Name;
	}
	void SetPrice(int Price)
	{
		price = Price;
	}
	void show(product*head)
	{
		while (head != NULL)
		{
			if (head->next != NULL)
			{
				//cout << "Rozmir detali: (" << head->detal::GetA() << ":" << head->detal::GetB() << ");\n";
				//cout << "Kilkist detaley:" << head->mech::GetNumOfDet() << ";\n";
				cout << "Nazva Yzla: " << head->GetName() << "\nKilkist mehanizmiv v nemy: " << head->GetNumOfMech() << endl;
				cout << "Nazva Viroba: " << head->GetNameProd() << " \nKilkist Yzliv: " << head->GetNumOfYzel() << "\nCena: " << head->GetPrice() << endl << endl;
				head = head->next;
			}
			else if (head->next == NULL)
			{
				cout << "Rozmir detali: (" << head->detal::GetA() << ":" << head->detal::GetB() << ");\n";
				cout << "Kilkist detaley:" << head->mech::GetNumOfDet() << ";\n";
				cout << "Nazva Yzla: " << head->GetName() << "\nKilkist mehanizmiv v nemy: " << head->GetNumOfMech() << endl;
				cout << "Nazva Viroba: " << head->GetNameProd() << " \nKilkist Yzliv: " << head->GetNumOfYzel() << "\nCena: " << head->GetPrice() << endl << endl;
				head = NULL;
			}
		}
	}
};
void addProd(product**following, int A, int B, int NumDet, string NameYzel, int NumMech, string NameOfProd, int NumYzel, int Price)
{
	product *N = new product;
	N->detal::a = A;
	N->detal::b = B;
	N->mech::GetNumOfDet = NumDet;
	N->yzel::NameOfYzel = NameYzel;
	N->yzel::GetNumOfMech = NumMech;
	N->
}
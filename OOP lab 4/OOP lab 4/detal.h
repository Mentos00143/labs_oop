#include <string>
#include <iostream>
using namespace std;
class detal
{
private:
	int a, b;
	detal *next;
public:
	detal** add(detal**);
	void show(detal*);
	int S(int a, int b);
	int P(int a, int b);
	void SetA();
	void SetB();
	int GetA();
	int GetB();
	detal();
	detal(int a);
	detal(int a, int b);
	~detal();
};
class mech:public detal
{
private:
	detal *det;
	int NumOfDet;
	mech *next;
public:
	mech** add(mech**, detal**);
	void show(mech*, detal*);
	mech();
	mech(int);
	~mech();
	void SetNum();
	int GetNumOfDet();
};
class yzel:public mech, public detal
{
private:
	mech *mechanizm;
	string NameOfYzel;
	int NumOfMech;
	yzel *next;
public:
	yzel** add(yzel**, mech**,detal**);
	void show(yzel*, mech*, detal*);
	yzel();
	yzel(string);
	yzel(string, int);
	~yzel();
	string GetName();
	int GetNumOfMech();
	void SetName();
	void SetNumOfMech();
};
class product:public yzel, public mech,public detal
{
private:
	yzel *yz;
	string NameProd;
	int NumOfYzel;
	int price;
	product *next;
public:
	void add(product**, yzel**,mech**,detal**);
	product();
	product(string);
	product(string, int);
	product(string, int, int);
	~product();
	string GetNameProd();
	int GetPrice();
	int GetNumOfYzel();
	void SetNumOfYzel();
	void SetNameProd();
	void SetPrice();
	void show(product*,yzel*,mech*,detal*);
};
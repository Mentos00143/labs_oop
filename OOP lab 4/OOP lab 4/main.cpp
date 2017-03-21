#include <iostream>
#include "detal.h"
#include <windows.h>
#include <string>
using namespace std;
void main()
{
	product *Prod = new product;
	yzel *yz = new yzel;
	mech *mechanizm = new mech;
	detal *det = new detal;
	Prod->add(&Prod, &yz, &mechanizm, &det);
	system("cls");
	Prod->show(Prod,yz,mechanizm,det);
	delete(Prod, yz, mechanizm, det);
	system("pause>>void");
}
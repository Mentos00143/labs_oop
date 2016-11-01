#include <string>
#include <iostream>
using namespace std;
class product
{
private:
	char* name;
	char* code;
	int number;
public:
	product();
	product(char*, char*, int);
	product(product&);
	void Set(char*, char*, int);
	char* GetName();
	char* GetCode();
	int GetNumber();
	void SetName(char*);
	void SetCode(char*);
	void SetNumber(int);
	void Show();
};
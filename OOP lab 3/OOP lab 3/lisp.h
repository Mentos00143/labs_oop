class lisp
{
	char el;
	lisp *next;
public:
	char operator[](int i);
	void operator==(lisp*);
	void operator+(lisp*);
	lisp();
	char Get_el();
	void Set_el(char);
	void input(lisp ** head, char &a);
	void print(lisp * head);
};
class lisp
{
	char el;
	int size;
	const int MaxSize = 143;
	lisp *next;
public:
	char Get_el();
	lisp Get_next();
	void Set_el(char);
	void Set_next(lisp *);
	void addToBegin(lisp ** head, char &a);
	void del(lisp * head);
	void print(lisp * head);
};
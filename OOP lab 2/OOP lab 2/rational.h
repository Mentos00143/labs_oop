class rational{
private:
	int num, den;
public:
	rational();
	rational(int num);
	rational(int num, int den);
	int GetNum();
	int GetDen();
	void SetNum(int);
	void SetDen(int);
	void print();
	int MaxSpilDiln(int N, int D);
	void reduc(int N, int D, int S);
	void Add(int N1, int D1, int N2, int D2);
	void Sub(int N1, int D1, int N2, int D2);
	void mul(int N1, int D1, int N2, int D2);
	void div(int N1, int D1, int N2, int D2);
	void systx(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2, int f1, int f2);
	void systy(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2, int e1, int e2, int f1, int f2);
};
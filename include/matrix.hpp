#include <iostream>
#include <fstream>
#include <string>
	

using namespace std;

class tmatrix{
private:
	int count_1,count_2;
	int **array;
public:
	tmatrix();
	tmatrix(int,int);
	tmatrix(tmatrix&);
	void print();
	void fill(string);
	tmatrix operator+(tmatrix);
	tmatrix operator*(tmatrix);
	tmatrix operator == (tmatrix&)const;
	tmatrix operator = (const tmatrix&);
	friend ostream& operator << (ostream&,tmatrix&);
	friend istream& operator >>(istream&,tmatrix&);
	~tmatrix();
};

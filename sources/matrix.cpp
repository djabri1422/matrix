#include "matrix.hpp"

tmatrix::tmatrix() : count_1(0), count_2(0), array{nullptr}
{
	
}

int tmatrix::rows(){
	return count_1;
}

int tmatrix::columns(){
	return count_2;
}
istream& operator >>(istream&b,tmatrix& num){
	cout<<"Введте кол-во строк:";
	cin>>num.count_1;
	cout<<"ВВедите кол-во столбцов:";
	cin>>num.count_2;
}

ostream& operator <<(ostream&a,tmatrix &num){
	a<<num.count_1<<num.count_2;
	return a;
}


tmatrix tmatrix::operator = ( const tmatrix &tmat)
{
	for(int i=0;i<count_1;i++)
	{
		delete[] array[i];
	}
	delete[] array;
	array = new int*[tmat.count_1];
	for(int i=0;i<tmat.count_1;i++){
		array[i]=new int[count_2];
		for(int j=0;j<count_2;j++){
			array[i][j]=tmat.array[i][j];
		}  

	}
	count_1 = tmat.count_1;
	count_2 = tmat.count_2;
	return *this;
	
}


tmatrix tmatrix::operator == (tmatrix &MatrixCopy)const{
	tmatrix re(count_1, count_2);
	for (int i = 0; i < count_1; i++){
		for (int j = 0; j < count_2; j++){
			if (array[i][j] != MatrixCopy.array[i][j]){
				cout << "Matrix_1 != Matrix_2";
			}
		break;
		} 
	break;
	}
	cout << "Matrix_1 == Matrix_2" << "\n";
	return re;
}

tmatrix::tmatrix(int xSize, int ySize) : count_1(xSize), count_2(ySize)
{
	array= new int *[xSize];
	for (int i = 0; i < xSize; i++){
		array[i] = new int[ySize];
	}
}

tmatrix::tmatrix(tmatrix&count){
	count_1=count.count_1;
	count_2=count.count_2;
	array=new int * [count_1];
	for(int i=0;i<count_1;i++){
		array[i]=new int[count_2];
		for(int j=0;j<count_2;j++){
			array[i][j]=count.array[i][j];
		}
	}
}

void tmatrix::fill(string name_1){
	ifstream file_1(name_1);
	for(int i=0;i<count_1;i++){
		for(int j=0;j<count_2;j++){
			file_1>>array[i][j];
		}
	}
}

void tmatrix::print(){
	for(int i=0;i<count_1;i++){
		for(int j=0;j<count_2;j++){
			cout<<array[i][j]<<"   ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

tmatrix tmatrix::operator+(tmatrix count){
	if (count_1!=count.count_1 || count_2!=count.count_2 )
	{
		system("pause");
		exit(1);
	}else{
	tmatrix overload(count_1,count_2);
	for(int i=0;i<count_1;i++){
		for(int j=0;j<count_2;j++)
			overload.array[i][j]=array[i][j] + count.array[i][j];
	}
	return overload;
	}	
}

tmatrix tmatrix::operator*(tmatrix count){
	tmatrix overload(count_1,count_2);
	for(int i=0;i<count_1;i++){
		for(int j=0;j<count_2;j++){
			overload.array[i][j] = 0;
			for(int k=0;k<count_2;k++){
				overload.array[i][j] +=array[i][k] * count.array[k][j];
			}

		}

	}
	return overload;
}
	
tmatrix::~tmatrix()
{
		for (int i = 0; i < count_1; i++){
		delete[] array[i];
	}
	delete[] array;
}

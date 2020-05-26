#include <iostream>
using namespace std;

int main()
{
	//int* ptr_int = new int;
	int a;
	int* ptr_int = &a;
	*ptr_int = 100;

	double* ptr_double = new double;
	*ptr_double = 100.34;

	cout << "*ptr_int = 100 " << *ptr_int << endl;
	cout << "a = 100 " << a << endl;
	cout << "a 주소 " << ptr_int << endl;

	cout << "double 숫자값: " << *ptr_double << endl;
	cout << "double형 숫자의 메모리 주소는 " << ptr_double << endl;


	return 0;
}
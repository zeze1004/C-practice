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
	cout << "a �ּ� " << ptr_int << endl;

	cout << "double ���ڰ�: " << *ptr_double << endl;
	cout << "double�� ������ �޸� �ּҴ� " << ptr_double << endl;


	return 0;
}
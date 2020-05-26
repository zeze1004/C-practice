#include <iostream>
//int average(int a[], int n) // 배열의 크기는 정해지지 않음
int average(int *a,int n)
{
	int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i];
		}
	return (sum / n);
}
int main()
{
	/*
	int array[5] = { 1,2,3,4,5 };
	//array = array + 1;
	int v1 = array[3];
	printf("v1 = %d\n", v1);
	int v2 = *(array + 3);
	printf("v2 = %d\n", v2);

	int* parray = array;
	parray = parray + 1;
	v1 = parray[3];
	printf("v1 = %d\n", v1);
	v1 = parray[2];
	printf("v1 = %d\n", v1);
	v2 = *(array + 3);
	printf("v2 = %d", v2);

	*/

	//average(a, b);
	//int array[5] = { 1,2,3,4,5 };
	int array1[100];
	int i=0;
	
	while(1)
	{
		scanf("%d", &array1[i]);
		i++;
		if (array1[i] == 0)
			break;
	}
	int average1;
	average1 = average(array1, i);
	printf("%d", average1);


	return 0;
}
#include <iostream>

int main()
{
	int year, mon, day;
	scanf("%4d.%02d.%02d",&year, &mon, &day);
	printf("%02d-%02d-%04d",day,mon,year);

	return 0;
}
#include <iostream>
/*
두 개의 참(1) 또는 거짓(0)이 입력될 때,
모두 거짓일 때에만 참이 계산되는 프로그램을 작성해보자.
*/

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
/*
	if (a != true && b != true)
	{
		printf("%d", true);
	}
	else
		printf("%d", false);
*/
	printf("%d", (a == 0) && (b == 0));
	return 0;
}
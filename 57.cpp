#include <iostream>
/*
�� ���� ��(1) �Ǵ� ����(0)�� �Էµ� ��,
��/������ ���� ���� ������ ���� ���Ǵ� ���α׷��� �ۼ��غ���.
*/

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	//printf("%d", a = !b);
	printf("%d", (a&&b) || (!a&&!b));



	return 0;
}
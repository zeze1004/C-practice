#include <iostream>
/*
�� ���� ��(1) �Ǵ� ����(0)�� �Էµ� ��,
��� ������ ������ ���� ���Ǵ� ���α׷��� �ۼ��غ���.
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
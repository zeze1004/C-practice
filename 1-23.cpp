#include <iostream>
#include <string>
using namespace std;

/**************15 %.2f �Ҽ� �� ���� �ݿø� ���
int main()
{
	float a=0;
	cout << "�Ǽ� �Է��Ͻÿ�: ";
	scanf("%f", &a);
	printf("%.2f",a);
	return 0;
}
*/

/*
//18.�ð� �Է¹޾� �״�� ����ϱ�
int main()
{
	int a, b;
	scanf("%d:%d", &a, &b);
	printf("%d:%d", a, b);
	return 0;
}
*/

//20.'-'�� ������ �ֹι�ȣ 13�ڸ��� ��� �ٿ� ����Ѵ�.
/*
int main()
{
	int a, b;
	printf("�ֹι�ȣ�� �Է��Ͻÿ�:");
	scanf("%d-%d", &a, &b);
	
	printf("%06d%07d", a, b); //%?d �ڸ����� �������� ���
	return 0;
}
*/

//22.���� 1�� �Է¹޾� �״�� ����ϱ�
/*
int main()
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

	return 0;
}
*/
//23.�Ǽ� 1�� �Է¹޾� �κк��� ���
/*
int main()
{
	int a;
	int b;
	scanf("%d.%d", &a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
*/
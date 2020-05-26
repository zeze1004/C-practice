#include <iostream>
#include <string>
using namespace std;

/**************15 %.2f 소수 몇 이하 반올림 출력
int main()
{
	float a=0;
	cout << "실수 입력하시오: ";
	scanf("%f", &a);
	printf("%.2f",a);
	return 0;
}
*/

/*
//18.시간 입력받아 그대로 출력하기
int main()
{
	int a, b;
	scanf("%d:%d", &a, &b);
	printf("%d:%d", a, b);
	return 0;
}
*/

//20.'-'를 제외한 주민번호 13자리를 모두 붙여 출력한다.
/*
int main()
{
	int a, b;
	printf("주민번호를 입력하시오:");
	scanf("%d-%d", &a, &b);
	
	printf("%06d%07d", a, b); //%?d 자리수를 고정시켜 출력
	return 0;
}
*/

//22.문장 1개 입력받아 그대로 출력하기
/*
int main()
{
	char data[2001];
	fgets(data, 2000, stdin);
	printf("%s", data);

	return 0;
}
*/
//23.실수 1개 입력받아 부분별로 출력
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
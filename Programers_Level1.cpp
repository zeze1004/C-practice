#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;
/*
1-1. �Էµ� ���� ¦����� 2�� �����ϴ�.
1-2. �Էµ� ���� Ȧ����� 3�� ���ϰ� 1�� ���մϴ�.
2. ����� ���� ���� ���� �۾��� 1�� �� ������ �ݺ��մϴ�.
*/
int solution(int num) {
    int answer = 0;
    int i = 0;
    while (i < 500)
    {
        
        if (num % 2 == 0)
        {
           
                num = num / 2;
                answer++;
                printf(" %d -> ", num); 
                i++;
                
            
            
            
        }
        else {
            num = num*3 + 1;
            printf(" %d -> ", num);
            answer++;
            i++;
            


            }
        
        if (num == 1)
            break;
        
       
    }
    if (num != 1)
        answer = -1;

    printf("\n���� ��: %d", answer);
    return answer;
}
int main()
{
    int k;
    printf("���� �Է��Ͻÿ�: ");
    scanf("%d", &k);

    solution(k);
    return 0;
}
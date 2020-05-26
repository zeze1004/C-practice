#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;
/*
1-1. 입력된 수가 짝수라면 2로 나눕니다.
1-2. 입력된 수가 홀수라면 3을 곱하고 1을 더합니다.
2. 결과로 나온 수에 같은 작업을 1이 될 때까지 반복합니다.
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

    printf("\n연산 수: %d", answer);
    return answer;
}
int main()
{
    int k;
    printf("정수 입력하시오: ");
    scanf("%d", &k);

    solution(k);
    return 0;
}
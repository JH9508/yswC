//
//  challenge4.c
//  yswC
//
//  Created by 김지훈 on 2021/02/23.
//

#include<stdio.h>
int main()
{
 int money = 5000;
 int a = 500; //크림빵 가격
 int b = 700; //새우깡 가격
 int c = 400; //콜라 가격
char input[30];

 int i,j,k,count;
    
 
    
    count = 1;
 
    for(i=1; i<100; i++)
        for(j=1; j<100; j++)
            for(k=1; k<100; k++)
            {
                if((i*a+j*b+k*c)==money)
                    printf("%d번째 크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", count,i,j,k);
                    if((i*a+j*b+k*c)==money)
                        count++;
                }
            printf("어떻게 구입하시겠습니까? (n번째 숫자만 입력)\n");
    scanf("%[^\n]s", input);    // 공백까지 포함하여 문자열 입력받기
    printf("%s\n", input);

    return 0;
}

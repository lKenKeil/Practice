#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int total = 0;
    int baby = 0;
    int teen = 0;
    int adult = 0;
    int old = 0;
    int num = 200;
    int money = 0;

   
    while (num != 0) {
        printf("가족 구성원의 나이를 입력하세요: ");

        scanf("%d", &num);    // 표준 입력을 받아서 변수에 저장
        if (num == 0) {
            break;


        }
        if (num >= 1 && num <= 7) {
            baby++;
        }
        else if (num <= 19) {
            teen++;
        }
        else if (num <= 64) {
            adult++;
        }
        else {
            old++;
        }
        total++;
    }
    if (baby >= 3) {
        money += (baby-2) * 500000;
    }
    printf("총 %d 명:노인 %d명,성인 %d명 ,청소년 %d명 , 아동 %d명\n다자녀 지원금이 %d원 지급됩니다.", total,old,adult,teen,baby,money);    // 변수의 내용을 출력

    return 0;
}
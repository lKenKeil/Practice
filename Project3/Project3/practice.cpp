#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
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
        printf("���� �������� ���̸� �Է��ϼ���: ");

        scanf("%d", &num);    // ǥ�� �Է��� �޾Ƽ� ������ ����
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
    printf("�� %d ��:���� %d��,���� %d�� ,û�ҳ� %d�� , �Ƶ� %d��\n���ڳ� �������� %d�� ���޵˴ϴ�.", total,old,adult,teen,baby,money);    // ������ ������ ���

    return 0;
}
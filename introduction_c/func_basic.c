#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "func_basic.h"

int Add(int num1, int num2)
{
    int result = num1 + num2;

    return result;
}

void ShowAddResult(int num)    // ���⼭ ����� void���� '��ȯ���� �ʴ´�.'��� ��
{
    printf("������� ��� : %d\n", num);
    // �׷��� return���� ����.
}

int InputNum(void)    // ���⼭ ����� void���� '�Ű������� �������� �ʴ´�.'��� ��
{
    int num;
    int cnt_scan_num = scanf("%d", &num);

    return num;
}

void HowToUse(void)
{
    printf("�ΰ��� ������ �Է��ϸ� ��������� ����մϴ�.\n");
    printf("������ �Է� �ϼ���.\n");
}
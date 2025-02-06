#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "func_basic.h"

int Add(int num1, int num2)
{
    int result = num1 + num2;

    return result;
}

void ShowAddResult(int num)    // 여기서 사용한 void에는 '반환하지 않는다.'라는 뜻
{
    printf("덧셈결과 출력 : %d\n", num);
    // 그래서 return문이 없음.
}

int InputNum(void)    // 여기서 사용한 void에는 '매개변수를 전달하지 않는다.'라는 뜻
{
    int num;
    int cnt_scan_num = scanf("%d", &num);

    return num;
}

void HowToUse(void)
{
    printf("두개의 정수를 입력하면 덧셈결과를 출력합니다.\n");
    printf("정수를 입력 하세요.\n");
}
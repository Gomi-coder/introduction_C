#include <stdio.h>
#include "step1.h"

// �� �� �ּ�

/*
* ���� �ּ�
*/

// Visual Studio 013 ���� �̻���ʹ� scanf() �Լ��� ����ϸ� ������ ��.
#define _CRT_SECURE_NO_WARNINGS

/* ### ǥ�� ����� �Լ�
* #### stdio.h
* ���� �ʼ���. Standard Input / Output library�� ���ڷ� �� �״�� ǥ�� ����°� ���õ� ��� ������ �� ����.
* �̰� �־�� printf()�Լ��� scanf()�Լ� ��� ����.
* ���⼭ f�� formatted�� ����(����ȭ�� ������� ������.)
*
* ### #include
* ��� ������ �����ϴ� ����.
*/
#include <stdio.h>

// ���α׷��� ����Ǹ� ���� ���� ȣ��Ǵ� �κ� (main �Լ�)
void ioBasic(void)
{
	printf("Hello, world!\n");
	printf("�ȳ��ϼ���?\n");
	/*
	* #### ���� ����
	* ���� ���� �ϳ��� ���� �ϳ��� ������.
	* %d: �����͸� 10����(demical)�� ���·� ����Ѵٴ� �ǹ�. ��ȣ �ִ� 10���� ����(char, short, int)
	*
	* %u: unsigned int/��ȣ ���� 10���� ����
	* %o: unsigned int/��ȣ ���� 8���� ����
	* %x, %X: unsigned int/��ȣ ���� 16����
	*
	* %f: 10���� ����� �ε��Ҽ��� �Ǽ�(float, double)
	*
	* %c: ���� �����ϴ� ����(char, short, int)
	* %s: ���ڿ�(char *)
	* %p: �������� �ּ� ��(void *)
	*/
	printf("�� ���̴� %d���Դϴ�.\n", 21);

	/*
	* #### ����
	* ��ǻ�� �ȿ��� � ���� �����ϱ� ���� �޸� ����
	* ���� �̸� ����� ��Ģ: ������, ����, ����ٷ� ����/���� �� ��/ù ���� �ݵ�� �����ڶǴ� �����/��ҹ��� ����
	* ������ ���� ������ ���� �ڷ����� �޶���.
	* ���� ����� `�ڷ���(�� �ڷ����� ������ ������ �޸� ������ �Ҵ�) �����̸�(�޸� ������ �̸�)`
	* ���� ���� ���� �� �ʱ�ȭ ����
	*
	* #### ���
	* ������ ������� ����(������ �Ұ����� ������)
	* ���� ����� ���� ���� ����̶� ������ �ڷ��� ���̳� �ڿ� const �� �ٿ��ָ� ��.
	* ����� ����� ���ÿ� ���� �Ҵ��Ͽ� �ʱ�ȭ������ ������ ������ ������ �߻���.
	*/
	int result;
	int num1, num2;
	int sample1, sample2;
	sample1 = 10;
	sample2 = 20;
	int sample3 = 30, sample4 = 40;
	printf("%d %d %d\n", sample1, sample2, sample3);

	const int sample5 = 50;
	int const sample6 = 60;

	/*
	* #### �ּ� ������ &
	* scanf �Լ��� ���Ե� '&' ��ȣ
	* �Է¹��� �����͸� �ڿ� ������ ������ �����϶�� �ǹ�
	* [scanf�� ���ؼ� 'scanf ��ȯ���� ���õǾ����ϴ�'��� ���](https://www.inflearn.com/community/questions/151245/warning-%EC%A7%88%EB%AC%B8%EC%9D%B4%EC%9A%94)
	*/
	printf("ù ��° ������ �Է��ϼ���: ");
	int scan_num1 = scanf("%d", &num1);
	printf("scan_num1 is %d\n", scan_num1);
	printf("�� ��° ������ �Է��ϼ���: ");
	int scan_num2 = scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	/*
	* ���α׷��� ���� ���¸� �˸��� �뵵
	* 0: �������� ������ ��Ȳ���� �����ϴ� ��
	* 0�� �ƴ� ��: ���������� ������ ��Ȳ
	*/
	return 0;
}

void conditionalStatementBasic(void) {
	// if ��
	int num = 9;
	if (num < 10) printf("10���� �۽��ϴ�.\n");

	int menu;
	printf("1.ġŲ 2.���� 3.������ 4.�ܹ���\n");
	printf("���ϴ� �޴��� �����ϼ���.: ");
	int cnt_scan_menu = scanf("%d", &menu);

	// switch �� (�������δ� ������ ���� ����)
	switch (menu) {
	case 1:
		printf("ġŲ�� �����߽��ϴ�.\n");
		break;
	case 2:
		printf("���ڸ� �����߽��ϴ�.\n");
		break;
	case 3:
		printf("�����̸� �����߽��ϴ�.\n");
		break;
	case 4:
		printf("�ܹ��Ÿ� �����߽��ϴ�.\n");
		break;
	default:
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}

	// if-else �� (�ڵ尡 �� ���̸� �߰�ȣ ���� ����)
	printf("������ �Է��ϼ���.: ");
	int cnt_scan_num = scanf("%d", &num);

	if (num % 2 == 0)
		printf("¦���Դϴ�.\n");
	else
		printf("Ȧ���Դϴ�.\n");


	// if-else if-else ��
	int score;
	printf("������ �Է��ϼ���.: ");
	int cnt_scan_score = scanf("%d", &score);

	if (score >= 90)
		printf("A����\n");
	else if (score >= 80)
		printf("B����\n");
	else if (score >= 70)
		printf("C����\n");
	else if (score >= 60)
		printf("D����\n");
	else
		printf("F����\n");


	return 0;
}

void loopBasic(void) {
	/* while ��
	* ���� �����ݷ� ������ ����
	* ���� �ݺ����� while(1)�� ���� �� �ִ�.
	*/
	int num = 0;
	while (num < 5) {
		printf("Hello, world!\n");
	}


	/* do~while ��
	* �ݺ� ������ �ּ��� �� ���� �����ϴ� ����.
	* 
	* while���� while �ڿ� �߰�ȣ�� ���� ������ �����ݷ��� ������ ������,
	* do-while ���� while�ڿ� �߰�ȣ�� ���� ������ �����ݷ��� �ٿ���� ��.
	* 
	* while���� ���ǽ��� ���� Ȯ��
	* do~while���� �ϴ� �ݺ� ������ ������ �Ŀ� �ݺ� ������ �˻�.
	*/
	int pw = 1234;
	int inputpw = 0;

	do
	{
		printf("��й�ȣ�� �Է��ϼ���. : "); 
		int cnt_scan_pw = scanf("%d", &inputpw); // ����ڷκ��� ��й�ȣ�� �Է� �ް� �� ������
	} while (pw != inputpw); // ��� ������ ������ �� ������ ����

	printf("Ȯ�εǾ����ϴ�.\n");


	/* for��
	* �ݺ� Ƚ���� ������ ���� �� ����.
	* 
	* for(�ʱ��; ���ǽ�; ������)
	* �ʱ��, ���ǽ�, ���������� �ݺ� Ƚ���� �����ϸ� ���๮�� �ݺ�
	* �ʱ���� �̸� �״�� ���� �� ���� �����.
	* �ݺ��� ���๮ ���� �� ���������� �̵�, ���ǽĿ��� ���� �˻� �� ���̸� �ٽ� �ݺ�
	* 
	* for ���� �����ݷ� ������ ����.
	*/
	num = 1;
	for (int i = 0; i < 3; i++) {
		num *= 2;
	}
	printf("for���� �����ϰ� �� ���� num ��: %d", num);


	/* ��Ÿ ���
	* (1) break
	* �ݺ��� �ȿ��� break���� ������ �ٷ� �ݺ����� ����������.
	*/
	int hap = 0;
	int location = 0;

	for (location; location <= 100; location++)
	{
		hap += location;

		if (hap >= 1000)
			break;
	}

	printf("1~100�� �� �� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d\n", location);


	/* ��Ÿ ���
	* (2) continue
	* continue���� ������ ���� ����� �ǳʶٰ� �ݺ����� ó������ ���ư���.
	* �� �ݺ��� �ȿ��� continue�� �����ϸ� continue �Ʒ��� �ڵ�� �������� �ʰ� �ǳʶ� ���� �ݺ����� �����Ѵ�.
	*/
	hap = 0;
	int continue_i = 1;
	while (continue_i <= 100)
	{
		continue_i++;
		if (continue_i % 2 != 0)
			continue;

		hap += continue_i;    // hap = hap + continue_i;
	}

	printf("1���� 100���� ���� �� ¦���� ���� ���� %d�Դϴ�.\n", hap);

	return 0;
}
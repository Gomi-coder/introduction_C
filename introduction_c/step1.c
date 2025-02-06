#include <stdio.h>
#include "step1.h"

// 한 줄 주석

/*
* 범위 주석
*/

// Visual Studio 013 버전 이상부터는 scanf() 함수를 사용하면 에러가 남.
#define _CRT_SECURE_NO_WARNINGS

/* ### 표준 입출력 함수
* #### stdio.h
* 거의 필수적. Standard Input / Output library의 약자로 말 그대로 표준 입출력과 관련된 모든 내용이 들어가 있음.
* 이게 있어야 printf()함수랑 scanf()함수 사용 가능.
* 여기서 f는 formatted의 약자(서식화된 입출력을 지원함.)
*
* ### #include
* 헤더 파일을 포함하는 문법.
*/
#include <stdio.h>

// 프로그램이 실행되면 가장 먼저 호출되는 부분 (main 함수)
void ioBasic(void)
{
	printf("Hello, world!\n");
	printf("안녕하세요?\n");
	/*
	* #### 서식 문자
	* 서식 문자 하나에 변수 하나가 대응됨.
	* %d: 데이터를 10진수(demical)의 형태로 출력한다는 의미. 부호 있는 10진수 정수(char, short, int)
	*
	* %u: unsigned int/부호 없는 10진수 정수
	* %o: unsigned int/부호 없는 8진수 정수
	* %x, %X: unsigned int/부호 없는 16진수
	*
	* %f: 10진수 방식의 부동소수점 실수(float, double)
	*
	* %c: 값에 대응하는 문자(char, short, int)
	* %s: 문자열(char *)
	* %p: 포인터의 주소 값(void *)
	*/
	printf("제 나이는 %d살입니다.\n", 21);

	/*
	* #### 변수
	* 컴퓨터 안에서 어떤 값을 저장하기 위한 메모리 공간
	* 변수 이름 만드는 규칙: 영문자, 숫자, 언더바로 구성/공백 안 됨/첫 글자 반드시 영문자또는 언더바/대소문자 구분
	* 저장할 값의 종류에 따라 자료형이 달라짐.
	* 선언 방법은 `자료형(이 자료형의 저장이 가능한 메모리 공간을 할당) 변수이름(메모리 공간의 이름)`
	* 변수 동시 선언 및 초기화 가능
	*
	* #### 상수
	* 변수의 상대적인 개념(변경이 불가능한 데이터)
	* 선언 방법은 변수 선언 방법이랑 같은데 자료형 앞이나 뒤에 const 를 붙여주면 됨.
	* 상수는 선언과 동시에 값을 할당하여 초기화해주지 않으면 컴파일 에러가 발생함.
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
	* #### 주소 연산자 &
	* scanf 함수에 포함된 '&' 기호
	* 입력받은 데이터를 뒤에 나오는 변수에 저장하라는 의미
	* [scanf에 대해서 'scanf 반환값이 무시되었습니다'라는 경고](https://www.inflearn.com/community/questions/151245/warning-%EC%A7%88%EB%AC%B8%EC%9D%B4%EC%9A%94)
	*/
	printf("첫 번째 정수를 입력하세요: ");
	int scan_num1 = scanf("%d", &num1);
	printf("scan_num1 is %d\n", scan_num1);
	printf("두 번째 정수를 입력하세요: ");
	int scan_num2 = scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	/*
	* 프로그램의 종료 상태를 알리는 용도
	* 0: 정상적인 종료의 상황에서 전달하는 값
	* 0이 아닌 값: 비정상적인 종료의 상황
	*/
	return 0;
}

void conditionalStatementBasic(void) {
	// if 문
	int num = 9;
	if (num < 10) printf("10보다 작습니다.\n");

	int menu;
	printf("1.치킨 2.피자 3.떡볶이 4.햄버거\n");
	printf("원하는 메뉴를 선택하세요.: ");
	int cnt_scan_menu = scanf("%d", &menu);

	// switch 문 (조건으로는 정수형 변수 가능)
	switch (menu) {
	case 1:
		printf("치킨을 선택했습니다.\n");
		break;
	case 2:
		printf("피자를 선택했습니다.\n");
		break;
	case 3:
		printf("떡볶이를 선택했습니다.\n");
		break;
	case 4:
		printf("햄버거를 선택했습니다.\n");
		break;
	default:
		printf("잘못 입력하였습니다.\n");
	}

	// if-else 문 (코드가 한 줄이면 중괄호 생략 가능)
	printf("정수를 입력하세요.: ");
	int cnt_scan_num = scanf("%d", &num);

	if (num % 2 == 0)
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");


	// if-else if-else 문
	int score;
	printf("점수를 입력하세요.: ");
	int cnt_scan_score = scanf("%d", &score);

	if (score >= 90)
		printf("A학점\n");
	else if (score >= 80)
		printf("B학점\n");
	else if (score >= 70)
		printf("C학점\n");
	else if (score >= 60)
		printf("D학점\n");
	else
		printf("F학점\n");


	return 0;
}

void loopBasic(void) {
	/* while 문
	* 끝에 세미콜론 붙이지 않음
	* 무한 반복문은 while(1)로 만들 수 있다.
	*/
	int num = 0;
	while (num < 5) {
		printf("Hello, world!\n");
	}


	/* do~while 문
	* 반복 영역을 최소한 한 번은 실행하는 구조.
	* 
	* while문의 while 뒤엔 중괄호가 오기 때문에 세미콜론을 붙이지 않지만,
	* do-while 문의 while뒤엔 중괄호가 없기 때문에 세미콜론을 붙여줘야 함.
	* 
	* while문은 조건식을 먼저 확인
	* do~while문은 일단 반복 문장을 실행한 후에 반복 조건을 검사.
	*/
	int pw = 1234;
	int inputpw = 0;

	do
	{
		printf("비밀번호를 입력하세요. : "); 
		int cnt_scan_pw = scanf("%d", &inputpw); // 사용자로부터 비밀번호를 입력 받고 난 다음에
	} while (pw != inputpw); // 계속 진행할 것인지 말 것인지 결정

	printf("확인되었습니다.\n");


	/* for문
	* 반복 횟수가 정해져 있을 때 유용.
	* 
	* for(초기식; 조건식; 증감식)
	* 초기식, 조건식, 증감식으로 반복 횟수를 제어하며 실행문을 반복
	* 초기식은 이름 그대로 최초 한 번만 실행됨.
	* 반복할 실행문 실행 후 증감식으로 이동, 조건식에서 조건 검사 후 참이면 다시 반복
	* 
	* for 끝에 세미콜론 붙이지 않음.
	*/
	num = 1;
	for (int i = 0; i < 3; i++) {
		num *= 2;
	}
	printf("for문을 수행하고 난 후의 num 값: %d", num);


	/* 기타 제어문
	* (1) break
	* 반복문 안에서 break문을 만나면 바로 반복문을 빠져나간다.
	*/
	int hap = 0;
	int location = 0;

	for (location; location <= 100; location++)
	{
		hap += location;

		if (hap >= 1000)
			break;
	}

	printf("1~100의 합 중 최초로 1000이 넘는 위치는? : %d\n", location);


	/* 기타 제어문
	* (2) continue
	* continue문을 만나면 남은 블록은 건너뛰고 반복문의 처음으로 돌아간다.
	* 즉 반복문 안에서 continue를 실행하면 continue 아래의 코드는 실행하지 않고 건너뛴 다음 반복문을 수행한다.
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

	printf("1부터 100까지 숫자 중 짝수만 더한 값은 %d입니다.\n", hap);

	return 0;
}
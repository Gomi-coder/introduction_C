﻿#pragma once
#ifndef FUNC_BASIC_H
#define FUNC_BASIC_H

/* 함수?
* [함수 참고](https://sejong-kr.libguides.com/c.php?g=942233&p=6822325)
*
* 어떤 기능을 하도록 만든 코드의 묶음.
* 지금까지 사용했던 printf, scanf 등도 C 표준 라이브러리에서 기본으로 제공하는 함수이다.
*
* (1) 함수 정의
* - 함수를 만드는 것
* - 반환형 함수이름(매개변수) { 함수 내용 }
* - 반환 값이 있다면 함수 내에서 실행 결과를 돌려주는 제어문인 return문을 써주어야 함.
*
* (2) 함수 선언
* - 컴파일러가 새로 만든 함수를 인식할 수 있도록 함수의 형태를 알리는 역할을 한다.
* - C언어에서는 가장 먼저 main() 함수가 컴파일러에 의해 컴파일된다.
* - main()함수 뒤에 등장하는 함수는 컴파일러가 알지 못하기 때문에 오류가 발생
	→ 컴파일러에게 함수가 정의되어 있다고 main 함수 앞에서 미리 알려줘야 함 (함수 선언)
* - 필요한 함수를 main 함수 밑에 차례로 정의하고, main 함수 앞에는 모든 함수를 선언하여 작성하는 것이 좋다.
* - 반환형 함수이름(매개 변수);
*
* (3) 함수 호출
* - 만든 함수를 사용할 때 사용.
* - 반환하는 데이터가 있을 경우 =(대입 연산자)를 통해 대입받을 수 있다.
* - 반환받을 변수 = 함수이름(매개변수);
* 
* (4) 함수명 규칙
* - 영문자(a-z, A-Z), 숫자(0-9), 밑줄(_)만 사용할 수 있음.
* - 숫자로 시작하면 안 됨. (예: 1myFunction() ❌)
* - C의 키워드(int, return, if, while 등)는 사용할 수 없음. (예: return() ❌)
* - 대소문자를 구별함. (예: myFunction()과 MyFunction()은 다른 함수)
*/

// 매개변수와 반환값이 모두 있는 함수
int Add(int num1, int num2);

// 반환값이 없는 함수
void ShowAddResult(int num);

// 매개변수가 없는 함수
int InputNum(void);

// 매개변수와 반환값이 모두 없는 함수
void HowToUse(void);

#endif

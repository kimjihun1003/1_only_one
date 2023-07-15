#include <stdio.h>//여기서 가져온다는디 종류는 많다.,include:c언어 폴더이름,stdio.h:기본 입출입 출력 코드 뭉치
//printf:출력 내장함수
//{}:코드 블럭,스코프,전역스코프,지역 스코프
/*
int main(void) {
	printf("hello welcome world");

	return 0;
}
/*특수문자
* \n:개행
* \t:수평댑
* \\:역슬래쉬
\":따옴표
\':작은 따옴표생
\a:경고소리발생


*/
//숫자입력
/*
* 10진수 정수:%d,%i
* 16진수 정수:%x,%o
* 10진수 실수:%f,%lf
* 한개의 문자:%c
* 10진수 정수(양수):%u
* 퍼센트 기호 출력:%%
* */

int main(void) {
	/*
	printf("50의 8진수 표기:%o\n", 50);
	printf("50의 10진수 표기 : %d\n", 50);
	printf("50의 16진수 표기 : %x\n", 50);

	




	int input_num;
	printf("값을 입력하시오 : \n");
	scanf_s("%d", &input_num);
	printf("입력된 정수값은 %d 입니다", input_num);

		return 0;
	
	int a;
	printf("정수 a값을 입력해주세요 : \n");
	scanf_s("%d", &a);
	int b;
	printf("정수 b값을 입력해주세요 : \n");
	scanf_s("%d",&b);
	printf("a+b=%d", a + b);
	printf("a+b=%d", a - b);
	printf("a+b=%d", a * b);
	printf("a+b=%d", a / b);
	*/


	int r;
	printf("원의 반지름을 입력하세요 : \n");
	scanf_s("%d", &r);
	double pi = 3.14 * r;
	printf("원이 넓이는 %f입니다", r * r * pi);

	return 0;
}


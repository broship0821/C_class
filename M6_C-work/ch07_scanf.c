//
//
//// ch07_scanf.c
//
//#include <stdio.h>
//
//int main() {
//	/*
//	scanf():
//		scanf("서식지정자", 입력위치(주소));
//		scanf_s("서식지정자", 입력위치(주소), 허용크기값(byte));
//		scanf_s()함수로 문자, 문자열 입력을 처리할 때는 허용크기 값을 지정해야됨
//	*/
//	// 비주얼 스튜디오에서는 scanf_s가 기본값, 프로젝트 우클릭→속성→c/c++→sdl 아니오 변경
//
//	// 정수
//	//int ia;
//	//printf("숫자 입력 >");
//	//scanf("%d", &ia); // &기호 필수
//	////scanf_s("%d", &ia);
//	//printf("ia : %d\n", ia);
//	//printf("\n");
//
//	//실수
//	// %f: float 타입의 실수 입력시 사용
//	// %lf(엘에프): double 타입의 실수 입력시 사용
//	//float fa;
//	//double da;
//	//printf("실수 2개 입력 >>");
//	////scanf("%f%lf", &fa, &da); // 서식지정자 하나만 띄우던가 아예 띄우면 안됨
//	//scanf_s("%f%lf", &fa, &da);
//	//printf("fa: %.1f\tda: %.1f\n", fa, da);
//	//printf("\n");
//
//	//문자
//	//char ca;
//	//printf("문자 입력 >>>");
//	////scanf("%c", &ca);
//	//scanf_s("%c", &ca, 1); //문자나 문자열은 scanf_s쓸때 허용 바이트값을 적어줘야됨
//	//printf("ca: %c\n", ca);
//	//printf("\n");
//
//	//문자열
//	//문자열은 배열, 배열명이 원래 가지고 있는 값이 주소이기 때문에
//	//문자열 입력시 &로 주소 표시 안해도 됨
//	//실제 처리 가능한 문자수는 전체크기-1 or 허용크기-1까지임
//	//char textA[10]; // 배열, 자체가 주소를 가지고 있음
//	//printf("단어 입력>>>");
//	////scanf("%s", textA);
//	//scanf_s("%s", textA, 10); // 허용 바이트값 표시, 10개 이전, 9개까지만 가능
//	//printf("textA: %s\n", textA);
//	//printf("\n");
//}
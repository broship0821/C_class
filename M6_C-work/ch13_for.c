//#include <stdio.h>
//
///*
//for문
//	for(초기식;조건식;증감식) {
//		반복할 코드;
//	}
//	
//	초기식: for문의 실행 횟수를 확인하는 변수의 선언과 시작값 설정, for문의 시작과 동시에 한번만 실행
//	조건식: for문의 실행 확인
//	증감식: 실행 횟수 변경
//	for문은 반복의 횟수가 지정되어 있을때 사용
//*/
//
//int main() {
//	/*for (int i = 0; i < 10; i++)
//		printf("%d\n", i);
//	puts("");
//	for (int i = 10; i > 0; i--)
//		printf("%d\n", i);*/
//
//	//// 1~n 까지의 합 구하기
//	//int last = 10, sum = 0;
//	//for (int i = 1; i <= last; i++) {
//	//	sum += i;
//	//}
//	//printf("1~%d의 합: %d\n", last, sum);
//
//	//// n의 배수 확인
//	//int n = 7, count = 0;
//	//for (int i = 1; i <= 30; i++) {
//	//	if (i % n == 0) {
//	//		count++;
//	//		printf("%d\n", i);
//	//	}
//	//}
//	//printf("%d의 배수 개수: %d\n", n, count);
//	//puts("");
//	//
//	//for (int i = n; i <= 30; i += n) {
//	//	printf("%d\n", i);
//	//}
//
//	////구구단
//	//int dan = 5;
//	//printf("--- %d 단 ---\n", dan);
//	//for (int i = 1; i < 10; i++) {
//	//	printf("%d * %d = %d\n", dan, i, dan * i);
//	//}
//
//	////2중 for문
//	//for (int out = 1; out <= 3; out++) {
//	//	printf("%d 라인: ", out);
//	//	for (int i = 1; i <= 5; i++) {
//	//		printf("%d ", i);
//	//	}
//	//	puts("");
//	//}
//	//puts("");
//	////2중 for문 구구단
//	//for (int i = 1; i < 10; i++) {
//	//	for (int j = 2; j < 10; j++) {
//	//		printf("%d * %d = %d\t", j, i, j * i);
//	//	}
//	//	puts("");
//	//}
//	////선생님꺼
//	//for (int dan = 2; dan <= 9; dan++) {
//	//	printf("- %d 단 -\n", dan);
//	//	for (int i = 1; i <= 9; i++) {
//	//		printf("%d x %d = %d\n", dan, i, dan * i);
//	//	}
//	//	puts("");
//	//}
//}
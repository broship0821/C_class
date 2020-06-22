//#include <stdio.h>
//int main() {
//	/*int kor, eng, math;
//	printf("국어 성적 입력:");
//	scanf_s("%d", &kor);
//	printf("영어 성적 입력:");
//	scanf_s("%d", &eng);
//	printf("수학 성적 입력:");
//	scanf_s("%d", &math);
//	int avg = (kor + eng + math) / 3;
//	if (avg >= 60 && kor >= 40 && eng >= 40 && math >= 40) {
//		puts("합격입니다!");
//	}
//	else {
//		puts("불합격입니다");
//	}*/
//
//	int balance=100000, withdraw;
//	printf("현재 잔액: %d\n", balance);
//	printf("출금하실 금액:");
//	scanf_s("%d", &withdraw);
//	if (withdraw % 10000 != 0)
//		printf("잔액은 10000원 단위로만 가능합니다\n");
//	else {
//		if (balance >= withdraw) {
//			balance -= withdraw;
//			printf("%d원 출금하셨습니다\n남은 금액: %d원\n", withdraw, balance);
//		}
//		else {
//			puts("잔액이 부족합니다");
//		}
//	}
//}
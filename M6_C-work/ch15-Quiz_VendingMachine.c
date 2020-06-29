//
//
//// ch15-Quiz_VendingMachine.c
//
//#include <stdio.h>
//
//int main() {
//
//	int coin = 0;              // 금액
//	int select = 0;           // 제품 선택
//	int coffee = 300;         // 커피 금액
//	int coke = 1000;          // 콜라 금액
//
//	printf("콜라 : %d , 커피 : %d\n", coke, coffee);
//	printf("금액을 투입하세요 > "); scanf_s("%d", &coin);
//	while (getchar() != '\n');
//	puts("");
//
//	while (coin >= coffee) {
//
//		printf("1.콜라 : %d  2.커피 : %d 선택 > ", coke, coffee); scanf_s("%d", &select);
//
//		switch (select) {
//		case 1: // 콜라
//			if (coin >= coke) {
//				coin -= coke;
//				puts("콜라가 나옵니다~");
//			}
//			else {
//				puts("금액이 부족합니다");
//			}
//			break;
//		case 2: // 커피
//			if (coin >= coffee) {
//				coin -= coffee;
//				puts("커피가 나옵니다~");
//			}
//			else {
//				puts("금액이 부족합니다");
//			}
//			break;
//		default:
//			puts("없는 제품입니다~");
//		}
//
//		// 추가 구매
//		int repur = 0;   // 0 : 종료,  1 : 추가 구매
//		if (coin >= coffee) {
//			printf("남은 잔액 : %d 원\n", coin);
//			while (1) {
//				printf("추가 구매(1.yes   0.no) > "); scanf_s("%d", &repur);
//				while (getchar() != '\n');
//				if (repur == 0 || repur == 1)
//					break;
//			}
//		}
//		if (repur == 0)
//			break;
//		puts("");
//	}
//	printf("반환 금액 : %d 원\n", coin);
//
//}
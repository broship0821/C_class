//#include <stdio.h>
//int main() {
//	//// Q-1 세과목의 점수를 입력받아서 합격, 불합격을 판단하는 코드를 작성하세요
//	////     - 합격 조건 : 각 과목별 점수가 40 이상이고, 평균은 60 이상이어야 합니다
//	//int kor, eng, math;
//	//printf("국어 성적 입력:");
//	//scanf_s("%d", &kor);
//	//printf("영어 성적 입력:");
//	//scanf_s("%d", &eng);
//	//printf("수학 성적 입력:");
//	//scanf_s("%d", &math);
//	//int avg = (kor + eng + math) / 3;
//	//if (avg >= 60 && kor >= 40 && eng >= 40 && math >= 40) {
//	//	puts("합격입니다!");
//	//}
//	//else {
//	//	puts("불합격입니다");
//	//}
//	//// 선생님꺼
//	//int subA, subB, subC;
//	//printf("세과목 점수 입력 > "); scanf_s("%d %d %d", &subA, &subB, &subC);
//
//	//int tot = subA + subB + subC;
//	//double avg = (double)tot / 3;
//	//printf("평균 : %.1f\n", avg);
//	//if (subA >= 40 && subB >= 40 && subC >= 40 && avg >= 60)
//	//	puts("여기를 나가도 좋습니다..ㅠㅠ");
//	//else
//	//	puts("당신은 여기 남아야 합니다..^^");
//
//
//	// Q-2 ATM 기 코드를 작성하세요
//	//     - 현재 통장 잔액을 알력줍니다
//	//       출금 할 금액을 입려받습니다
//	//       출금이 가능하면 출금 후 남은 잔액을 알려줍니다
//	//       > 출금 조건 : 인출 금액은 10000원 단위로만 가능합니다( 10001원 X )
//	//                    인출 금액은 잔액보다 많을 수 없습니다
//
//	//int balance=100000, withdraw;
//	//printf("현재 잔액: %d\n", balance);
//	//printf("출금하실 금액:");
//	//scanf_s("%d", &withdraw);
//	//if (withdraw % 10000 != 0)
//	//	printf("잔액은 10000원 단위로만 가능합니다\n");
//	//else {
//	//	if (balance >= withdraw) {
//	//		balance -= withdraw;
//	//		printf("%d원 출금하셨습니다\n남은 금액: %d원\n", withdraw, balance);
//	//	}
//	//	else {
//	//		puts("잔액이 부족합니다");
//	//	}
//	//}
//	//// 선생님꺼
//	//int balance = 100000;
//	//printf("통장 잔액 : %d 원\n", balance);
//
//	//int money;
//	//printf("인출 금액 입력 > "); scanf_s("%d", &money);
//	//puts("");
//
//	//if (money > 0 && money % 10000 == 0 && money <= balance) {
//	//	balance -= money;
//	//	printf("%d 원 출금 성공\n", money);
//	//	printf("출금 후 잔액 : %d 원\n", balance);
//	//}
//	//else {
//	//	puts("인출 금액 오류~");
//	//}
//	//printf("잔액 : %d 원\n", balance);
//}
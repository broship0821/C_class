//#include <stdio.h>
//
//
//int main() {
//
//	/*
//	삼항 연산자
//		(조건식) ? 값1 : 값2;
//
//		조건식이 참이면 값1 실행, 거짓이면 값2 실행
//	*/
//
//	//int data = 7;
//	//int abs = 0;
//	///*if (data > 0)
//	//	abs = data;
//	//else
//	//	abs = data * -1;
//	//printf("abs: %d", abs);*/
//	////삼항연산식
//	//abs = (data > 0) ? data : data * -1;
//	//printf("abs: %d", abs);
//	//
//
//	/*
//	break:
//	실행중인 제어문을 강제로 종료할때 사용 - switch, for, while, do while
//	break문을 포함하고 있는 제어문 하나만 종료
//	*/
//
//	//for (int out = 1; out <= 3; out++) {
//	//	printf("%d 회전:", out);
//	//	for (int i = 1; i <= 10; i++) {
//	//		printf("%3d", i);
//	//		if (i == 7)
//	//			break; // 제일 근처에 있는 제어문 하나만 종료 가능
//	//	}
//	//	puts("");
//	//}
//
//	/*
//	continue:
//	반복문에서 continue문이 실행되면 현재 실행중인 반복문의 코드를 멈추고 다음 반복문으로 넘어감
//	*/
//
//	//int value = 0;
//	//while (value < 21) {
//	//	value++;
//	//	if (value % 7 == 0) {
//	//		puts("lucky");
//	//		continue; //밑에꺼는 반복 안하고 위로 올라감
//	//	}
//	//	printf("%d\n", value);
//	//}
//	//for (int i = 1; i < 21; i++) {
//	//	if (i % 7 == 0) {
//	//		puts("jump~");
//	//		continue;
//	//	}
//	//	printf("%d\n", i);
//	//}
//
//	//char gameRun = 'y';
//	//while (gameRun == 'y') {
//	//	for (int heart = 3; heart > 0; heart--) {
//	//		printf("생명: %d\n", heart);
//	//	}
//	//	int restart = 0; // 1:재시작 0: 종료
//	//	printf("재시작(yes:1, no:0) >>");
//	//	scanf("%d", &restart);
//	//	while (getchar() != '\n');
//	//	if (restart == 0)
//	//		gameRun = 'n';
//	//}
//	//puts("Game End");
//}
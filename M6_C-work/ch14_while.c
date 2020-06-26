//#include <stdio.h>
//
///*
//while문
//	while(조건식){
//		실행코드;
//	}
//	
//	반복의 실행 조건을 알고있을때 사용
//*/
//
//int main() {
//	// while을 for문처럼 사용하는 방법
//	//int i = 1;
//	//while (i<6)
//	//{
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//	//puts("");
//	//int down = 5;
//	//while (down) { //down 이 0이되면 거짓이되서 while문 멈춤
//	//	printf("%d\n", down);
//	//	--down;
//	//}
//
//	//break로 무한반복 빠져나오기
//	/*int cnt = 1;
//	while (1)
//	{
//		printf("%d\n", cnt);
//		if (cnt > 9)
//			break;
//		cnt++;
//	}*/
//
//	//flag 방법으로 무한반복 빠져나오기
//	/*int run = 1;
//	int no = 1;
//	while (run) {
//		if (no > 9)
//			run = 0;
//		printf("%d\n", no);
//		no++;
//	}*/
//
//	//int value = -1;
//	//while (value < 0) {
//	//	printf("숫자 입력: ");
//	//	scanf_s("%d", &value);
//	//	while (getchar() != '\n'); // 사용자가 값을 이상하게 입력할수 있으니 버퍼를 지워줘야됨
//	//}
//	//printf("입력 값: %d\n", value);
//
//	//// do while 문
//	//int data = 0;
//	//int sum = 0;
//	//do {
//	//	printf("숫자 입력 ( 종료 : 0 ) > ");
//	//	scanf_s("%d", &data);
//	//	while (getchar() != '\n');
//	//	sum += data;
//	//} while (data != 0);
//	//printf("합 : %d\n", sum);
//	// while문으로 구성해보기
//	/*int data = 0;
//	int sum = 0;
//	while (1) {
//		printf("숫자 입력 ( 종료 : 0 ) > ");
//		scanf_s("%d", &data);
//		while (getchar() != '\n');
//		sum += data;
//		if (data == 0)
//			break;
//	}
//	printf("합 : %d\n", sum);*/
//
//	//int line = 1;
//	//while (line < 4) {
//	//	printf("%d 라인: ", line);
//	//	int no = 1; // 여기서 초기화 시켜줘야됨
//	//	while (no < 6) {
//	//		printf("%d ", no);
//	//		no++;
//	//	}
//	//	puts("");
//	//	line++;
//	//}
//
//}
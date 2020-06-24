//#include <stdio.h>
//
///*
//switch문
//	switch(값){
//	case 상수값:
//		실행코드;
//		break; //case끝날때 마다 브레이크 붙여줘야됨
//	//case는 필요한 만큼 사용하면 됨
//	
//	defalut:
//		매칭되는 case값이 없으면 실행되는 코드; //else와 비슷, 써도되고 안써도 됨
//	}
//	
//	switch 문 안에 있는 값과 정확히 일치하는 case값을 찾아서 실행
//	switch 문 안에 들어갈 수 있는 값의 형태는 정수, 문자만 가능
//	case 뒤에는 상수만 가능, 변수 사용 불가
//*/
//
//int main() {
//	//int choise;
//	//printf("1,2,3 원하는거 출력:");
//	//scanf("%d", &choise);
//	//switch (choise) {
//	//case 1:
//	//	printf("%d\n", 1);
//	//	//break; // break안쓰면 안빠져나가고 밑에거 출력됨
//	//case 2:
//	//	printf("%d\n", 2);
//	//	//break;
//	//case 3:
//	//	printf("%d\n", 3);
//	//	//break;
//	//default:
//	//	printf("제대로 골라\n");
//	//}
//
//
//	/*int value = 1;
//	printf("value : %d\n", value);
//	puts("");
//	switch (value) {
//	case 1:
//		puts("1 - one");
//		break;
//	case 2:
//		puts("2 - two");
//		break;
//	case 3:
//		puts("3 - three");
//		break;
//	default:
//		puts("?,?");
//	}*/
//
//	//char subject;
//	//printf("c언어: C, Java: J > ");
//	//subject = getchar();
//	//puts("");
//	////switch (subject)
//	////{
//	////case 'C':
//	////	puts("C언어를 선택하셨습니다");
//	////	break;
//	////case 'c':
//	////	puts("C언어를 선택하셨습니다");
//	////	break;
//	////case 'J':
//	////	puts("Java를 선택하셨습니다");
//	////	break;
//	////case 'j':
//	////	puts("Java를 선택하셨습니다");
//	////	break;
//	////default:
//	////	puts("몰라용");
//	////	break;
//	////}
//
//	////2개 case의 실행 결과가 똑같으면 밑에처럼 하면 됨
//	//switch (subject)
//	//{
//	//case 'C':
//	//case 'c':
//	//	puts("C언어를 선택하셨습니다");
//	//	break;
//	//case 'J':
//	//case 'j':
//	//	puts("Java를 선택하셨습니다");
//	//	break;
//	//default:
//	//	puts("몰라용");
//	//	break;
//	//}
//
//
//	/*int select;
//	printf("1. 시작  2. 일시정지  0. 정지 > ");
//	scanf("%d", &select);
//	puts("");
//	switch (select)
//	{
//	case 1:
//		puts("start~~");
//		break;
//	case 2:
//		puts("일시정지~");
//		break;
//	case 0:
//		puts("종료");
//		break;
//	default:
//		break;
//	}*/
//
//	/*
//	enum (열거형, enumeration)
//		enum 이름 {
//			이름
//		}
//	*/
////enum SELECT {
////	end,	//0
////	START,	//1
////	PAUSE	//2
////	};
////	int select;
////	printf("1. 시작  2. 일시정지  0. 정지 > ");
////	scanf("%d", &select);
////	puts("");
////	switch (select)
////	{
////	case START:
////		puts("start~~");
////		break;
////	case PAUSE:
////		puts("일시정지~");
////		break;
////	case end:
////		puts("종료");
////		break;
////	default:
////		break;
////	}
//}
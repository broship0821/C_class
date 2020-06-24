//#include <stdio.h>
//
//int main() {
//	//// 월을 입력받아서 해당 몇일까지 있는지 알려주는 코드를 작성하세요
//	//// - 2월은 "28 or 29일"로 처리하세요
//	//int month;
//	//printf("알고싶은 월을 입력하세요:");
//	//scanf("%d", &month);
//	//switch (month)
//	//{
//	//case 1:
//	//case 3:
//	//case 5:
//	//case 7:
//	//case 8:
//	//case 10:
//	//case 12:
//	//	printf("%d월에는 총 31일이 있습니다\n", month);
//	//	break;
//	//case 4:
//	//case 6:
//	//case 9:
//	//case 11:
//	//	printf("%d월에는 총 30일이 있습니다\n", month);
//	//	break;
//	//case 2:
//	//	puts("2월에는 28일 or 29일");
//	//	break;
//	//default:
//	//	puts("정확한 값을 입력하세요");
//	//	break;
//	//}
//	//////enum써서 해보기
//	//enum MONTH {
//	//	Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
//	//};
//	//int month;
//	//printf("알고싶은 월을 입력하세요:");
//	//scanf("%d", &month);
//	//switch (month)
//	//{
//	//case Jan:
//	//case Mar:
//	//case May:
//	//case Jul:
//	//case Aug:
//	//case Oct:
//	//case Dec:
//	//	printf("%d월에는 총 31일이 있습니다\n", month);
//	//	break;
//	//case Apr:
//	//case Jun:
//	//case Sep:
//	//case Nov:
//	//	printf("%d월에는 총 30일이 있습니다\n", month);
//	//	break;
//	//case Feb:
//	//	puts("2월에는 28일 or 29일");
//	//	break;
//	//default:
//	//	puts("정확한 값을 입력하세요");
//	//	break;
//	//}
//	////선생님꺼
//	//// 윤년 확인
//	//int year;
//	//printf("년도 입력 > "); scanf_s("%d", &year);
//	//char leapCheck = 'n';  // y : 윤년,  n : 윤년 아님
//	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//	//	leapCheck = 'y';
//	//}
//
//	//int month;
//	//printf("월 입력 > "); scanf_s("%d", &month);
//	//puts("");
//
//	//int day = 0;
//	//switch (month) {
//	//case 1:
//	//case 3:
//	//case 5:
//	//case 7:
//	//case 8:
//	//case 10:
//	//case 12:
//	//	day = 31;
//	//	break;
//	//case 2:
//	//	if (leapCheck == 'n')
//	//		day = 28;
//	//	else
//	//		day = 29;
//	//	break;
//	//case 4:
//	//case 6:
//	//case 9:
//	//case 11:
//	//	day = 30;
//	//	break;
//	//default:
//	//	puts("??");
//	//}
//	//if (day != 0) {
//	//	printf("%d월 %d일\n", month, day);
//	//}
//	//else {
//	//	puts("월 입력 오류~");
//	//}
//
//
//	//// 버스단말기 코드를 작성하세요
//	//// - 요금 : 일반(1250),  학생(720)
//	////   버스카드 잔액을 설정합니다
//	////   카드를 확인합니다( g : 일반, s : 학생 )
//	////   확인후에 차감된 금액을 알려주세요
//	//int balance;
//	//printf("요금 잔액을 입력하세요:");
//	//scanf("%d", &balance);
//	//printf("요금 잔액: %d원", balance);
//	//puts("");
//	//while (getchar() != '\n');
//	//char id;
//	//printf("요금확인(g: 일반, s: 학생) >>> ");
//	//scanf_s("%c", &id, 1);
//	//char check = 'y'; // y: 승인 n: 요금 부족 p: 입력 오류
//
//	//switch (id)
//	//{
//	//case 'g':
//	//	if (balance >= 1250) {
//	//		puts("일반요금 1250원 입니다");
//	//		balance -= 1250;
//	//	}
//	//	else {
//	//		check = 'n';
//	//	}
//	//	break;
//	//case 's':
//	//	if (balance >= 720) {
//	//		puts("학생요금 720원 입니다");
//	//		balance -= 720;
//	//	}
//	//	else {
//	//		check = 'n';
//	//	}
//	//	break;
//	//default:
//	//	check = 'p';
//	//	break;
//	//}
//	//if (check == 'y')
//	//	printf("남은 요금: %d원\n", balance);
//	//else if (check == 'n')
//	//	puts("요금이 부족합니다");
//	//else
//	//	puts("제대로 입력하세요");
//	////선생님꺼
//	//int money = 200;
//	//printf("잔액 : %d 원\n", money);
//
//	//char userCard;
//	//printf("g : 일반 , s : 학생 > "); userCard = getchar();
//	//puts("");
//
//	//int general = 1250;
//	//int student = 720;
//	//char cardCheck = 'y';   // y : 승인,  n : 미승인
//	//switch (userCard) {
//	//case 'g':
//	//	if (money >= general)
//	//		money -= general;
//	//	else {
//	//		puts("잔액이 부족합니다~");
//	//		cardCheck = 'n';
//	//	}
//	//	break;
//	//case 's':
//	//	if (money >= student)
//	//		money -= student;
//	//	else {
//	//		puts("잔액이 부족합니다~");
//	//		cardCheck = 'n';
//	//	}
//	//	break;
//	//default:
//	//	puts("카드를 확인하세요~");
//	//	cardCheck = 'n';
//	//}
//	//if (cardCheck == 'y') {
//	//	printf("삑! 잔액 : %d 원\n", money);
//	//}
//
//
//	//char cal;
//	//printf("+, -, *, /  선택\n>>>");
//	//scanf_s("%c", &cal, 1);
//	//puts("");
//	//int num1, num2;
//	//printf("숫자 2개 입력 > ");
//	//scanf("%d %d", &num1, &num2);
//	//double sum;
//	//switch (cal)
//	//{
//	//case '+':
//	//	sum = num1 + num2;
//	//	break;
//	//case '-':
//	//	sum = num1 - num2;
//	//	break;
//	//case '*':
//	//	sum = num1 * num2;
//	//	break;
//	//case '/':
//	//	sum = (double)num1 / num2;
//	//	break;
//	//default:
//	//	puts("제대로 입력하세요");
//	//	break;
//	//}
//	//printf("%d %c %d = %.2f", num1, cal, num2, sum);
//	////선생님꺼
//	//char opt;
//	//printf("+ , - , * , / 선택 > "); opt = getchar();
//	//puts("");
//
//	//int dataA, dataB;
//	//printf("숫자 2개 입력 > "); scanf_s("%d %d", &dataA, &dataB);
//	//puts("");
//
//	//char calcRun = 'y';  // y : 계산 성공, n : 계산 실패 
//	//double res = 0;
//	//switch (opt) {
//	//case '+':
//	//	res = dataA + dataB; break;
//	//case '-':
//	//	res = dataA - dataB; break;
//	//case '*':
//	//	res = dataA * dataB; break;
//	//case '/':
//	//	if (dataB > 0)
//	//		res = (double)dataA / dataB;
//	//	else
//	//		calcRun = 'n'; // 0을 나눌순 없음
//	//	break;
//	//default:
//	//	puts("연산자 선택 오류~");
//	//	calcRun = 'n';
//	//}
//	//if (calcRun == 'y') {
//	//	printf("%d %c %d = ", dataA, opt, dataB);
//	//	if (opt != '/') {
//	//		printf("%.f\n", res);
//	//	}
//	//	else {
//	//		printf("%f\n", res);
//	//	}
//	//}
//	//else {
//	//	puts("계산불가!!");
//	//}
//}
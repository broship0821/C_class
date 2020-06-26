//#include <stdio.h>
//
//int main() {
//	//// 구구단 값을 입력받아서 해당 구구단을 모두 출력하는 코드를 작성하세요
//	//// - 2 ~ 9 단 사이의 값이 아니면 출력되지 않습니다
//	//while (1) {
//	//	int num;
//	//	printf("숫자를 입력하세요(0:종료):");
//	//	scanf("%d", &num);
//	//	while (getchar() != '\n');
//	//	if (num > 1 && num < 10) {
//	//		for (int i = 1; i < 10; i++) {
//	//			printf("%d * %d = %d\n", num, i, num * i);
//	//		}
//	//	}
//	//	else if (num == 0) {
//	//		puts("프로그램을 종료합니다");
//	//		break;
//	//	}
//	//	else
//	//		puts("2~9사이의 값만 입력 가능합니다");
//	//}
//
//
//
//
//	//// 숫자 3개를 입력받고, 입력받은 수의 합을 구하는 코드를 작성하세요
//	//// 더하는 값은 +(plus)만 가능하고, 입력 값은 모두 저장되어 있지 않아도 됩니다
//	//while (1) {
//	//	int su1, su2, su3;
//	//	printf("더할 숫자 3개를 입력하시오(0:종료):");
//	//	scanf("%d %d %d", &su1, &su2, &su3);
//	//	if (su1 == 0)
//	//		break;
//	//	while (getchar() != '\n');
//	//	printf("입력하신 숫자의 합: %d+%d+%d=%d", su1, su2, su3, su1 + su2 + su3);
//	//	puts("");
//	//}
//	////선생님꺼
//	//int data = 0;
//	//int count = 1;
//	//int sum = 0;
//	//while (count <= 3) {
//	//	printf("%d 번째 입력 > ", count); scanf_s("%d", &data);
//	//	while (getchar() != '\n');
//	//	if (data >= 0) { // +연산만 하라는게 아니라 0보다 큰값만 더하라는 거엿음
//	//		sum += data;
//	//		++count;
//	//	}
//	//}
//	//printf("입력 값의 합 : %d\n", sum);
//
//
//
//
//	//// 나이, 성별(m , f)을 입력받아서 출력하는 코드를 작성하세요
//	//// - 나이 : 0 ~ 130 사이만 처리 가능합니다
//	////   성별 : m, f 만 처리 가능하고, m 이면 "남성", f 이면 "여성"으로 출력하세요
//	//int age;
//	//char gen;
//	//while (1) {
//	//	while (1) {
//	//		printf("당신의 나이를 입력하세요(0~130사이): ");
//	//		scanf("%d", &age);
//	//		if (age >= 0 && age <= 130)
//	//			break;
//	//		puts("나이는 0~130사이만 입력 가능합니다");
//	//	}
//	//	while (getchar() != '\n');
//	//	while (1) {
//	//		printf("당신의 성별을 입력하세요(남자:m, 여자:f): ");
//	//		scanf_s("%c", &gen, 1);
//	//		if (gen == 'm') {
//	//			printf("\n나이: %d\n성별: 남성\n", age);
//	//			break;
//	//		}
//	//		else if (gen == 'f') {
//	//			printf("\n나이: %d\n성별: 여성\n", age);
//	//			break;
//	//		}
//	//		else
//	//			puts("m,f만 입력 가능합니다");
//	//		while (getchar() != '\n');
//	//	}
//	//}
//	//// 선생님꺼
//	//int age;
//	//while (1) {
//	//	printf("나이 입력 > "); scanf_s("%d", &age);
//	//	while (getchar() != '\n');
//	//	if (age >= 0 && age <= 130)
//	//		break;
//	//}
//	//char gender;
//	//while (1) {
//	//	printf("성별 (m, f) 입력 > "); gender = getchar();
//	//	while (getchar() != '\n');
//	//	if (gender == 'm' || gender == 'f')
//	//		break;
//	//}
//	//puts("");
//	//printf("나이 : %d 세\n", age);
//	//printf("성별 : ");
//	//if (gender == 'm') puts("남성");
//	//else puts("여성");
//	
//
//
//	// 치즈 10Box가 저장되어 있는 창고에 쥐(암수 1쌍)가 살고 있습니다
//	// 쥐 한마리가 하루에 먹는 치즈의 양은 20g 이고, 치즈를 먹은 10일 마다 쥐의 수가 2배씩 증가합니다
//	// 몇일만에 창고의 치즈가 모두 없어지고, 이때까지의 쥐는 모두 몇 마리인지를 구하는 코드를 작성하세요
//	// - 치즈 1Box : 1kg
//	//int cheese = 10000; // 치즈 1만그램
//	//int mouse = 2;
//	//while
//	//선생님꺼
//	//int cheeseBox = 10;
//	//int cheeseGram = cheeseBox * 1000;   // 치즈 gram
//	//int mouse = 2;                       // 쥐 객체 수
//	//int day = 0;                         // 날짜
//	//while (cheeseGram > 0) {
//	//	++day;
//	//	int eat = mouse * 20;       // 하루에 먹은 치즈양
//	//	cheeseGram -= eat;          // 하루에 먹고 남은양
//	//	printf("%3d 일 - 먹은 양 : %d , 남은 양 : %d\n", day, eat, cheeseGram);
//	//	if (day % 10 == 0) { // 쥐 객체 수 증가
//	//		mouse *= 2;
//	//		printf("쥐 객체 수 증가 : %d\n", mouse);
//	//	}
//	//}
//	//printf("총 %d 일 - 쥐 객체 수 : %d\n", day, mouse);
//}
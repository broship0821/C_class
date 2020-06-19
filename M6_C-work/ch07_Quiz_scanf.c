//#include <stdio.h>
//int main() {
//	//// 이름, 나이, 주소, 성별, 키를 입력받아서 출력하는 코드를 작성하세요
//	//// - 주소는 띄어쓰기가 가능합니다
//	//// - 성별은 m, f 로 처리합니다
//	//// - 키는 소수점 첫째자리까지만 출력하세요
//
//	//char name[10];
//	//int age;
//	//char add[50];
//	//char gen;
//	//double tall;
//	//printf("이름 입력:");
//	//scanf_s("%s", name, sizeof(name));
//	//printf("나이 입력:");
//	//scanf("%d", &age);
//	//printf("주소 입력:");
//	//scanf_s("%s", add, sizeof(add)); // 주소에는 띄어쓰기가 들어가니까 scanf대신 gets_s 써야됨
//	//while (getchar() != '\n'); //문자를 받을때는 자동으로 \n을 받기 때문에 버퍼 비워주기
//	//printf("성별 입력(남자:m 여자:f):");
//	//scanf_s("%c", &gen);
//	//printf("키 입력:");
//	//scanf("%lf", &tall);
//
//	//printf("\n");
//	//printf("이름: %s\n나이: %d\n주소: %s\n성별: %c\n키: %.1f\n", name, age, add, gen, tall);
//
//	//// 선생님꺼
//	//char name[20];
//	//printf("이름 입력 > "); scanf_s("%s", name, sizeof(name));
//
//	//int age;
//	//printf("나이 입력 > "); scanf_s("%d", &age);
//	//while (getchar() != '\n');
//
//	//char addr[100];
//	//printf("주소 입력 > "); gets_s(addr, sizeof(addr));
//
//	//char gender;
//	//printf("성별 입력 > "); gender = getchar();
//
//	//double height;
//	//printf("키 입력 > "); scanf_s("%lf", &height);
//	//puts("");
//
//	//puts("----- 입 력 정 보 -----");
//	//printf("이름 : %s\n", name);
//	//printf("나이 : %d 세\n", age);
//	//printf("주소 : %s\n", addr);
//	//printf("성별 : %c\n", gender);
//	//printf("키   : %.2f\n", height);
//
//
//
//
//	//// 이름의 영문 이니셜 3개를 입력받아서 출력하는 코드를 작성하세요
//	//// - 이니셜 하나씩 저장되어 있어야 합니다
//
//	/*char initial1, initial2, initial3;
//	printf("영문 이니셜 3개를 입력하시오:");
//	scanf("%c %c %c", &initial1, &initial2, &initial3);
//	printf("\n이니셜: %c%c%c", initial1, initial2, initial3);*/
//
//	//// getchar, putchar 써보기
//	//char initial1, initial2, initial3;
//	//printf("영문 이니셜 3개를 입력하시오:");
//	//initial1 = getchar();
//	//initial2 = getchar();
//	//initial3 = getchar();
//	//putchar(initial1);
//	//putchar(initial2);
//	//putchar(initial3);
//
//	// 선생님꺼
//	//char i1, i2, i3;
//	//printf("이니셜 입력 > _ _ _\b\b\b\b\b"); // \b: 커서 왼쪽으로 한칸 이동
//	//scanf_s("%c %c %c", &i1, 1, &i2, 1, &i3, 1);
//	//printf("이니셜 : %c %c %c\n", i1, i2, i3);
//
//	
//
//
//
//	// 세과목의 점수를 입력받아서 총점, 평균을 구하는 코드를 작성하세요
//	// - 평균은 소수점 둘째자리까지 출력하세요
//
//	/*int kor, eng, math, total;
//	double avg;
//	printf("국어 점수 입력:");
//	scanf("%d", &kor);
//	printf("영어 점수 입력:");
//	scanf("%d", &eng);
//	printf("수학 점수 입력:");
//	scanf("%d", &math);
//	total = kor + eng + math;
//	avg = total / 3.0;
//	printf("\n");
//	printf("국어 점수: %d\n", kor);
//	printf("영어 점수: %d\n", eng);
//	printf("수학 점수: %d\n", math);
//	printf("총 점수: %d\n", total);
//	printf("평균 점수: %.2f\n", avg);*/
//
//
//	// 선생님꺼
//
//	/*int subA, subB, subC;
//	printf("세과목 점수 입력 > ");
//	scanf_s("%d %d %d", &subA, &subB, &subC);
//	puts("");
//
//	int tot = subA + subB + subC;
//	double avg = (double)tot / 3;
//
//	puts("--- 성 적 ---");
//	printf("총점 : %d\n", tot);
//	printf("평균 : %.2f\n", avg);
//	*/
//
//
//}
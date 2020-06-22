//#include <stdio.h>
//int main() {
//	//// 5의 배수 확인
//	//int ia;
//	//printf("정수 입력:");
//	//scanf_s("%d", &ia);
//	//if (ia % 5 == 0) {
//	//	puts("입력하신 숫자는 5의 배수 입니다");
//	//}
//	//if (ia % 5 != 0) {
//	//	puts("입력하신 숫자는 5의 배수가 아닙니다");
//	//}
//	// 선생님꺼
//	//int v1;
//	//printf("숫자 입력 > "); scanf_s("%d", &v1);
//	//puts("");
//	//if (v1 % 5 == 0)
//	//	printf("%d : 5의 배수\n", v1);
//	//if (v1 % 5 != 0)
//	//	printf("%d : 5의 배수가 아니에요.\n", v1);
//
//	//// 큰수 찾기
//	//int ib, ic;
//	//printf("첫번째 숫자 입력:");
//	//scanf_s("%d", &ib);
//	//printf("두번째 숫자 입력:");
//	//scanf_s("%d", &ic);
//	//if (ib > ic) {
//	//	puts("첫번째 숫자가 더 큽니다");
//	//}
//	//if (ib < ic) {
//	//	puts("두번째 숫자가 더 큽니다");
//	//}
//	//if (ib == ic) {
//	//	puts("둘은 같은 숫자 입니다");
//	//}
//	//선생님꺼
//	//int v2, v3;
//	//printf("숫자 2개 입력 > "); scanf_s("%d %d", &v2, &v3);
//	//puts("");
//	//int max = 0;
//	//if (v2 > v3) max = v2;
//	//if (v3 > v2) max = v3;
//	//printf("%d, %d 중 큰수 : %d\n", v2, v3, max);
//
//	////세개의 수에서 큰수 찾기
//	//int i1, i2, i3;
//	//printf("첫번째 숫자 입력:");
//	//scanf_s("%d", &i1);
//	//printf("두번째 숫자 입력:");
//	//scanf_s("%d", &i2);
//	//printf("세번째 숫자 입력:");
//	//scanf_s("%d", &i3);
//	//if (i1 > i2 && i1 > i3) {
//	//	puts("첫번째 숫자가 제일 큽니다");
//	//}
//	//if (i2 > i1 && i2 > i3) {
//	//	puts("두번째 숫자가 제일 큽니다");
//	//}
//	//if (i3 > i1 && i3 > i2) {
//	//	puts("세번째 숫자가 제일 큽니다");
//	//}
//	//if (i1 == i2 || i1 == i3 || i2 == i3) {
//	//	puts("같은 값을 입력하셨습니다");
//	//}
//	//선생님꺼
//	//int v4, v5, v6;
//	//printf("숫자 3개 입력 > "); scanf_s("%d %d %d", &v4, &v5, &v6);
//	//puts("");
//	//int max2 = 0;
//	//if (v4 > v5) max2 = v4;
//	//if (v5 > v4) max2 = v5;
//	//if (v6 > max2) max2 = v6;
//	//printf("%d, %d, %d 중 큰수 : %d\n", v4, v5, v6, max2);
//
//	//// 성별 구분 
//	//char gen;
//	//printf("당신의 성별을 입력하시오(남자:m 여자:f)\n>>>>");
//	//scanf_s("%c", &gen, 1);
//	//if (gen == 'm') { //m은 한문자니까 ''써야됨, ""쓰면 안됨
//	//	puts("남성");
//	//}
//	//if (gen == 'f') {
//	//	puts("여성");
//	//}
//	//선생님꺼
//	//char gender;
//	//printf("성별(m, f) 입력 > "); gender = getchar();
//	//puts("");
//	//if (gender == 'm') puts("남성");
//	//if (gender == 'f') puts("여성");
//
//	////두수의 합 2,3배수인지 확인하기
//	//int ii1, ii2, sum;
//	//printf("첫번째 숫자 입력:");
//	//scanf_s("%d", &ii1);
//	//printf("첫번째 숫자 입력:");
//	//scanf_s("%d", &ii2);
//	//sum = ii1 + ii2;
//	//printf("두 수의 합: %d\n", sum);
//	//if (sum % 2 == 0 && sum % 3 ==0) {
//	//	printf("%d는 2의 배수이자 3의 배수입니다", sum);
//	//}
//	//if (sum % 2 != 0) {
//	//	printf("%d는 2의 배수가 아닙니다", sum);
//	//}
//	//if (sum % 2 == 0 && sum % 3 != 0) {
//	//	printf("%d는 2의 배수이지만 3의 배수는 아닙니다", sum);
//	//}
//	//선생님꺼
//	//int v7, v8;
//	//printf("숫자 2개 입력 > "); scanf_s("%d %d", &v7, &v8);
//	//puts("");
//	//int sum = v7 + v8;
//	//printf("합 : %d\n", sum);
//	//if (sum % 2 == 0 && sum % 3 == 0) {
//	//	puts("2 and 3의 배수");
//	//}
//	//if (sum % 2 != 0 || sum % 3 != 0) {
//	//	puts("2 or 3의 배수가 아니에요..");
//	//}
//
//
//	//// 두 수 거리 구하기
//	//int lo1, lo2, loSum;
//	//printf("첫번째 위치 입력:");
//	//scanf_s("%d", &lo1);
//	//printf("두번째 위치 입력:");
//	//scanf_s("%d", &lo2);
//	//if (lo1 > lo2) {
//	//	loSum = lo1 - lo2;
//	//	printf("%d와 %d 사이의 거리는 %d입니다", lo1, lo2, loSum);
//	//}
//	//if (lo2 > lo1) {
//	//	loSum = lo2 - lo1;
//	//	printf("%d와 %d 사이의 거리는 %d입니다", lo1, lo2, loSum);
//	//}
//	//if (lo1 == lo2) {
//	//	loSum = lo1 - lo2;
//	//	printf("%d와 %d 사이의 거리는 %d입니다", lo1, lo2, loSum);
//	//}
//	//선생님꺼
//	/*int p1, p2;
//	printf("첫번째 위치 입력 > "); scanf_s("%d", &p1);
//	printf("두번째 위치 입력 > "); scanf_s("%d", &p2);
//	puts("");
//
//	int distance = p1 - p2;
//	if (p2 > p1)
//	distance = p2 - p1;
//	printf("두점 사이의 거리 : %d\n", distance);*/
//
//}
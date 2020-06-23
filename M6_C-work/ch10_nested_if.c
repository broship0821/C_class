//#include <stdio.h>
//
///*
//중첩 if
//	if(조건식1){
//		if(조건식2){
//			조건식1,2가 모두 참일때 실행;
//		}
//		else{
//			조건식1은 참이고, 조건식2는 거짓일때 실행
//		}
//	}
//	
//	어떤 결과에 대해서 재분류 하거나 세분화 할때 중첩if문 사용
//*/
//
//int main() {
//	int value = -7;
//	printf("value: %d\n", value);
//	puts("");
//	if (value >= 0) {
//		printf("plus: ");
//		if (value % 2 == 1)
//			puts("홀수");
//		else
//			puts("짝수");
//	}
//	else {
//		printf("minus: ");
//		int cValue = value * -1;
//		if (cValue % 2 == 1)
//			puts("홀수");
//		else
//			puts("짝수");
//	}
//}
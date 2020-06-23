//#include <stdio.h>
//
//int main() {
//	//// 태어난 년도를 입력받아서 나이를 구하세요
//	//// 나이를 사용해서 성인과 미성년자로 분류하고,
//	//// 성인이면 청년층( 20 ~ 39 ), 중장년층(40 이상)인지 확인하고,
//	//// 미성년자이면 청소년(14 ~ 19), 어린이(13 이하)인지 확인하는 코드를 작성하세요
//	//int age;
//	//printf("당신이 태어난 년도를 입력하세요:");
//	//scanf("%d", &age);
//	//int nowYear = 2020;
//	//if (nowYear - age >= 20) {
//	//	if (nowYear - age >= 40)
//	//		puts("당신은 중장년층 입니다.");
//	//	else
//	//		puts("당신은 청년층 입니다.");
//	//}
//	//else {
//	//	if (nowYear - age >= 14)
//	//		puts("당신은 청소년 입니다.");
//	//	else
//	//		puts("당신은 어린이입니다.");
//	//}
//	////선생님꺼
//	//int userYear;
//	//printf("태어난 년도 입력 > "); scanf_s("%d", &userYear);
//	//puts("");
//	//int userAge = 2020 - userYear + 1;
//	//printf("나이 : %d 세\n", userAge);
//	//if (userAge > 19) {
//	//	printf("성인 : ");
//	//	if (userAge < 40)
//	//		puts("청년층");
//	//	else
//	//		puts("중장년층");
//	//}
//	//else {
//	//	printf("미성년자 : ");
//	//	if (userAge > 13)
//	//		puts("청소년");
//	//	else
//	//		puts("어린이");
//	//}
//
//	//// 보유한 금액에 따라서 구매 가능한 아이템 목록을 보여주는 코드를 작성하세요
//	//// - 3000 미만
//	////   > 쇠검 - 일반물약 - 쇠방패
//	////   3000 이상
//	////   > 광선검 - 에너지드링크 - 방어막
//	//// - 3000 이상이면 모든 아이템 목록이 나와야 합니다
//	//int balance;
//	//printf("보유 금액을 입력하시오: ");
//	//scanf("%d", &balance);
//	//puts("");
//	//if (balance > 0) {
//	//	puts("구매 가능 품목:");
//	//	if (balance > 3000) {
//	//		printf("광선검-에너지드링크-방머막\n");
//	//	}
//	//	puts("쇠검-일반물약-쇠방패");
//	//}
//	//else {
//	//	puts("구매 가능한 품목이 없습니다");
//	//}
//	////선생님꺼
//	//int money = 3000;
//	//printf("보유 금액 : %d 원\n", money);
//	//puts("");
//	//puts("----- 아이템 목록 -----");
//	//if (money >= 0) {
//	//	puts("쇠검 - 일반물약 - 쇠방패");
//	//	if (money >= 3000)
//	//		puts("광선검 - 에너지드링크 - 방어막");
//	//}
//
//	//// 물품의 크기와 무게에 따라서 사용해야 하는 cart를 알려주는 코드를 작성하세요
//	//// - 크기    무게          cart
//	////   S       50kg 미만     cart-A
//	////   S       50kg 이상     cart-B
//	////   L       50kg 미만     cart-C 
//	////   L       50kg 이상     cart-D
//	//char size;
//	//int weight;
//	//printf("물품 사이즈를 입력하시오(라지: L, 스몰: S)\n>>>>> ");
//	//scanf_s("%c", &size, 1);
//	//printf("물품 무게를 입력하시오\n>>>>>      kg\b\b\b\b\b\b\b");
//	//scanf_s("%d", &weight);
//	//if (size == 'S') {
//	//	if (weight < 50)
//	//		puts("cart-A를 이용하십시오");
//	//	else
//	//		puts("cart-B를 이용하십시오");
//	//}
//	//else {
//	//	if (weight < 50)
//	//		puts("cart-C를 이용하십시오");
//	//	else
//	//		puts("cart-D를 이용하십시오");
//	//}
//	////선생님꺼
//	//char size;
//	//printf("크기 입력 > "); size = getchar();
//
//	//int weight;
//
//	//if (size == 'S' || size == 'L') {
//	//	printf("무게 입력 > "); scanf_s("%d", &weight);
//	//	puts("");
//	//	if (size == 'S') {
//	//		if (weight < 50)
//	//			puts("cart-A");
//	//		else
//	//			puts("cart-B");
//	//	}
//	//	else {
//	//		if (weight < 50)
//	//			puts("cart-C");
//	//		else
//	//			puts("cart-D");
//	//	}
//	//}
//	//else {
//	//	puts("크기는 S, L 만 가능합니다..");
//	//}
//
//}
//
//
//// ch15-Quiz_VendingMachine.c
//
//#include <stdio.h>
//
//int main() {
//
//	int coin = 0;              // �ݾ�
//	int select = 0;           // ��ǰ ����
//	int coffee = 300;         // Ŀ�� �ݾ�
//	int coke = 1000;          // �ݶ� �ݾ�
//
//	printf("�ݶ� : %d , Ŀ�� : %d\n", coke, coffee);
//	printf("�ݾ��� �����ϼ��� > "); scanf_s("%d", &coin);
//	while (getchar() != '\n');
//	puts("");
//
//	while (coin >= coffee) {
//
//		printf("1.�ݶ� : %d  2.Ŀ�� : %d ���� > ", coke, coffee); scanf_s("%d", &select);
//
//		switch (select) {
//		case 1: // �ݶ�
//			if (coin >= coke) {
//				coin -= coke;
//				puts("�ݶ� ���ɴϴ�~");
//			}
//			else {
//				puts("�ݾ��� �����մϴ�");
//			}
//			break;
//		case 2: // Ŀ��
//			if (coin >= coffee) {
//				coin -= coffee;
//				puts("Ŀ�ǰ� ���ɴϴ�~");
//			}
//			else {
//				puts("�ݾ��� �����մϴ�");
//			}
//			break;
//		default:
//			puts("���� ��ǰ�Դϴ�~");
//		}
//
//		// �߰� ����
//		int repur = 0;   // 0 : ����,  1 : �߰� ����
//		if (coin >= coffee) {
//			printf("���� �ܾ� : %d ��\n", coin);
//			while (1) {
//				printf("�߰� ����(1.yes   0.no) > "); scanf_s("%d", &repur);
//				while (getchar() != '\n');
//				if (repur == 0 || repur == 1)
//					break;
//			}
//		}
//		if (repur == 0)
//			break;
//		puts("");
//	}
//	printf("��ȯ �ݾ� : %d ��\n", coin);
//
//}
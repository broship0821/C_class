//#include <stdio.h>
//int main() {
//	//// Q-1 �������� ������ �Է¹޾Ƽ� �հ�, ���հ��� �Ǵ��ϴ� �ڵ带 �ۼ��ϼ���
//	////     - �հ� ���� : �� ���� ������ 40 �̻��̰�, ����� 60 �̻��̾�� �մϴ�
//	//int kor, eng, math;
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &kor);
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &eng);
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &math);
//	//int avg = (kor + eng + math) / 3;
//	//if (avg >= 60 && kor >= 40 && eng >= 40 && math >= 40) {
//	//	puts("�հ��Դϴ�!");
//	//}
//	//else {
//	//	puts("���հ��Դϴ�");
//	//}
//	//// �����Բ�
//	//int subA, subB, subC;
//	//printf("������ ���� �Է� > "); scanf_s("%d %d %d", &subA, &subB, &subC);
//
//	//int tot = subA + subB + subC;
//	//double avg = (double)tot / 3;
//	//printf("��� : %.1f\n", avg);
//	//if (subA >= 40 && subB >= 40 && subC >= 40 && avg >= 60)
//	//	puts("���⸦ ������ �����ϴ�..�Ф�");
//	//else
//	//	puts("����� ���� ���ƾ� �մϴ�..^^");
//
//
//	// Q-2 ATM �� �ڵ带 �ۼ��ϼ���
//	//     - ���� ���� �ܾ��� �˷��ݴϴ�
//	//       ��� �� �ݾ��� �Է��޽��ϴ�
//	//       ����� �����ϸ� ��� �� ���� �ܾ��� �˷��ݴϴ�
//	//       > ��� ���� : ���� �ݾ��� 10000�� �����θ� �����մϴ�( 10001�� X )
//	//                    ���� �ݾ��� �ܾ׺��� ���� �� �����ϴ�
//
//	//int balance=100000, withdraw;
//	//printf("���� �ܾ�: %d\n", balance);
//	//printf("����Ͻ� �ݾ�:");
//	//scanf_s("%d", &withdraw);
//	//if (withdraw % 10000 != 0)
//	//	printf("�ܾ��� 10000�� �����θ� �����մϴ�\n");
//	//else {
//	//	if (balance >= withdraw) {
//	//		balance -= withdraw;
//	//		printf("%d�� ����ϼ̽��ϴ�\n���� �ݾ�: %d��\n", withdraw, balance);
//	//	}
//	//	else {
//	//		puts("�ܾ��� �����մϴ�");
//	//	}
//	//}
//	//// �����Բ�
//	//int balance = 100000;
//	//printf("���� �ܾ� : %d ��\n", balance);
//
//	//int money;
//	//printf("���� �ݾ� �Է� > "); scanf_s("%d", &money);
//	//puts("");
//
//	//if (money > 0 && money % 10000 == 0 && money <= balance) {
//	//	balance -= money;
//	//	printf("%d �� ��� ����\n", money);
//	//	printf("��� �� �ܾ� : %d ��\n", balance);
//	//}
//	//else {
//	//	puts("���� �ݾ� ����~");
//	//}
//	//printf("�ܾ� : %d ��\n", balance);
//}
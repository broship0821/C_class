//#include <stdio.h>
//
//int main() {
//	//// ���� �Է¹޾Ƽ� �ش� ���ϱ��� �ִ��� �˷��ִ� �ڵ带 �ۼ��ϼ���
//	//// - 2���� "28 or 29��"�� ó���ϼ���
//	//int month;
//	//printf("�˰���� ���� �Է��ϼ���:");
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
//	//	printf("%d������ �� 31���� �ֽ��ϴ�\n", month);
//	//	break;
//	//case 4:
//	//case 6:
//	//case 9:
//	//case 11:
//	//	printf("%d������ �� 30���� �ֽ��ϴ�\n", month);
//	//	break;
//	//case 2:
//	//	puts("2������ 28�� or 29��");
//	//	break;
//	//default:
//	//	puts("��Ȯ�� ���� �Է��ϼ���");
//	//	break;
//	//}
//	//////enum�Ἥ �غ���
//	//enum MONTH {
//	//	Jan = 1,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
//	//};
//	//int month;
//	//printf("�˰���� ���� �Է��ϼ���:");
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
//	//	printf("%d������ �� 31���� �ֽ��ϴ�\n", month);
//	//	break;
//	//case Apr:
//	//case Jun:
//	//case Sep:
//	//case Nov:
//	//	printf("%d������ �� 30���� �ֽ��ϴ�\n", month);
//	//	break;
//	//case Feb:
//	//	puts("2������ 28�� or 29��");
//	//	break;
//	//default:
//	//	puts("��Ȯ�� ���� �Է��ϼ���");
//	//	break;
//	//}
//	////�����Բ�
//	//// ���� Ȯ��
//	//int year;
//	//printf("�⵵ �Է� > "); scanf_s("%d", &year);
//	//char leapCheck = 'n';  // y : ����,  n : ���� �ƴ�
//	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//	//	leapCheck = 'y';
//	//}
//
//	//int month;
//	//printf("�� �Է� > "); scanf_s("%d", &month);
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
//	//	printf("%d�� %d��\n", month, day);
//	//}
//	//else {
//	//	puts("�� �Է� ����~");
//	//}
//
//
//	//// �����ܸ��� �ڵ带 �ۼ��ϼ���
//	//// - ��� : �Ϲ�(1250),  �л�(720)
//	////   ����ī�� �ܾ��� �����մϴ�
//	////   ī�带 Ȯ���մϴ�( g : �Ϲ�, s : �л� )
//	////   Ȯ���Ŀ� ������ �ݾ��� �˷��ּ���
//	//int balance;
//	//printf("��� �ܾ��� �Է��ϼ���:");
//	//scanf("%d", &balance);
//	//printf("��� �ܾ�: %d��", balance);
//	//puts("");
//	//while (getchar() != '\n');
//	//char id;
//	//printf("���Ȯ��(g: �Ϲ�, s: �л�) >>> ");
//	//scanf_s("%c", &id, 1);
//	//char check = 'y'; // y: ���� n: ��� ���� p: �Է� ����
//
//	//switch (id)
//	//{
//	//case 'g':
//	//	if (balance >= 1250) {
//	//		puts("�Ϲݿ�� 1250�� �Դϴ�");
//	//		balance -= 1250;
//	//	}
//	//	else {
//	//		check = 'n';
//	//	}
//	//	break;
//	//case 's':
//	//	if (balance >= 720) {
//	//		puts("�л���� 720�� �Դϴ�");
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
//	//	printf("���� ���: %d��\n", balance);
//	//else if (check == 'n')
//	//	puts("����� �����մϴ�");
//	//else
//	//	puts("����� �Է��ϼ���");
//	////�����Բ�
//	//int money = 200;
//	//printf("�ܾ� : %d ��\n", money);
//
//	//char userCard;
//	//printf("g : �Ϲ� , s : �л� > "); userCard = getchar();
//	//puts("");
//
//	//int general = 1250;
//	//int student = 720;
//	//char cardCheck = 'y';   // y : ����,  n : �̽���
//	//switch (userCard) {
//	//case 'g':
//	//	if (money >= general)
//	//		money -= general;
//	//	else {
//	//		puts("�ܾ��� �����մϴ�~");
//	//		cardCheck = 'n';
//	//	}
//	//	break;
//	//case 's':
//	//	if (money >= student)
//	//		money -= student;
//	//	else {
//	//		puts("�ܾ��� �����մϴ�~");
//	//		cardCheck = 'n';
//	//	}
//	//	break;
//	//default:
//	//	puts("ī�带 Ȯ���ϼ���~");
//	//	cardCheck = 'n';
//	//}
//	//if (cardCheck == 'y') {
//	//	printf("��! �ܾ� : %d ��\n", money);
//	//}
//
//
//	//char cal;
//	//printf("+, -, *, /  ����\n>>>");
//	//scanf_s("%c", &cal, 1);
//	//puts("");
//	//int num1, num2;
//	//printf("���� 2�� �Է� > ");
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
//	//	puts("����� �Է��ϼ���");
//	//	break;
//	//}
//	//printf("%d %c %d = %.2f", num1, cal, num2, sum);
//	////�����Բ�
//	//char opt;
//	//printf("+ , - , * , / ���� > "); opt = getchar();
//	//puts("");
//
//	//int dataA, dataB;
//	//printf("���� 2�� �Է� > "); scanf_s("%d %d", &dataA, &dataB);
//	//puts("");
//
//	//char calcRun = 'y';  // y : ��� ����, n : ��� ���� 
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
//	//		calcRun = 'n'; // 0�� ������ ����
//	//	break;
//	//default:
//	//	puts("������ ���� ����~");
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
//	//	puts("���Ұ�!!");
//	//}
//}
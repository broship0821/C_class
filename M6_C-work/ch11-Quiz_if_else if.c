//#include <stdio.h>
//
//int main() {
//	//// ���̸� �Է¹޾Ƽ� ��������� �������� �˷��ִ� �ڵ带 �ۼ��ϼ���
//	//// - ������(0 ~ 6) : 0,   ���(7 ~ 13) : 450,  �л�(14 ~ 19) : 720,  �Ϲ� : 1250
//	//int age;
//	//printf("���̸� �Է��ϼ���:");
//	//scanf("%d", &age);
//	//if (age > 19)
//	//	puts("�Ϲݿ�� 1250�� �Դϴ�");
//	//else if (age > 14)
//	//	puts("�л���� 720�� �Դϴ�");
//	//else if (age > 7)
//	//	puts("��̿�� 450�� �Դϴ�");
//	//else
//	//	puts("��¥�Դϴ�");
//	////�����Բ�
//	//int age;
//	//printf("���� �Է� > "); scanf_s("%d", &age);
//	//puts("");
//	//int fare = 0;
//	//if (age < 7) fare = 0;
//	//else if (age < 14) fare = 450;
//	//else if (age < 20) fare = 720;
//	//else fare = 1250;
//	//printf("��� : %d ��\n", fare);
//
//
//
//	//// �������� ������ ����ؼ� ����, ���, ������ ���ϴ� �ڵ带 �ۼ��ϼ���
//	//// - ������ ����� ����ؼ� ���մϴ�
//	////   > 100 ~ 90 : A,  89 ~ 80 : B,  79 ~ 70 : C,  69 ~ 60 : D,  59 ~ 0 : F
//	//int kor, eng, math, total;
//	//double avg;
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &kor);
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &eng);
//	//printf("���� ���� �Է�:");
//	//scanf_s("%d", &math);
//	//total = kor + eng + math;
//	//avg = total / 3.0;
//	//char grade;
//	//if (avg >= 90)
//	//	grade = 'A';
//	//else if (avg >= 80)
//	//	grade = 'B';
//	//else if (avg >= 70)
//	//	grade = 'C';
//	//else if (avg >= 60)
//	//	grade = 'D';
//	//else
//	//	grade = 'F';
//	//puts("");
//	//printf("-----���� ����-----\n");
//	//printf("���� ����: %d\n", kor);
//	//printf("���� ����: %d\n", eng);
//	//printf("���� ����: %d\n", math);
//	//printf("����: %d\n", total);
//	//printf("���: %.2f\n", avg);
//	//printf("����: %c\n", grade);
//	////�����Բ�
//	//int s1, s2, s3;
//	//printf("������ ���� �Է� > "); scanf_s("%d %d %d", &s1, &s2, &s3);
//	//while (getchar() != '\n');
//	//int tot = s1 + s2 + s3;
//	//double avg = (double)tot / 3;
//	//char grade;
//	//if (avg >= 90) grade = 'A';
//	//else if (avg >= 80) grade = 'B';
//	//else if (avg >= 70) grade = 'C';
//	//else if (avg >= 60) grade = 'D';
//	//else grade = 'F';
//	//
//	//printf("���� : %d\n", tot);
//	//printf("��� : %.1f\n", avg);
//	//printf("���� : %c\n", grade);
//
//
//	//// ������(kg), Ű(cm)�� ����ؼ� BMI(ü���� ����)�� ���ϰ�, �����¸� �˷��ִ� �ڵ带 �ۼ��ϼ���
//	////            ������(kg)
//	//// - BMI = --------------
//	////          Ű(m) * Ű(m)
//	////
//	//// - bmi                ������
//	////   0    ~ 18.4        ��ü��
//	////   18.5 ~ 22.9        ����
//	////   23.0 ~ 24.9        ��ü��
//	////   25.0 ~ 29.9        ��
//	////   30.0 ~             ����
//	//double weight, height, BMI, mHeight;
//	//printf("����� �����Ը� �Է��Ͻÿ�:     kg\b\b\b\b\b\b");
//	//scanf("%lf", &weight);
//	//printf("����� Ű�� �Է��Ͻÿ�:       cm\b\b\b\b\b\b\b\b");
//	//scanf("%lf", &height);
//	//mHeight = height / 100;
//	//BMI = weight / (mHeight * mHeight);
//	//printf("BMI: %.1f\n", BMI);
//	//if (BMI > 30.0)
//	//	puts("����");
//	//else if (BMI > 25.0)
//	//	puts("��");
//	//else if (BMI > 23.0)
//	//	puts("��ü��");
//	//else if (BMI > 18.5)
//	//	puts("����");
//	//else
//	//	puts("��ü��");
//	//////�����Բ�
//	//double weight;
//	//printf("������ �Է� > "); scanf_s("%lf", &weight);
//
//	//double height;
//	//printf("Ű     �Է� > "); scanf_s("%lf", &height);
//	//puts("");
//
//	//double mHeight = height / 100;
//	//double bmi = weight / (mHeight * mHeight);
//	//printf("BMI : %.1f\n", bmi);
//	//printf("������ : ");
//	//if (bmi < 18.5) puts("��ü��");
//	//else if (bmi < 23.0) puts("����");
//	//else if (bmi < 25.0) puts("��ü��");
//	//else if (bmi < 30.0) puts("��");
//	//else puts("����");
//
//}
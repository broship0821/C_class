//#include <stdio.h>
//
//int main() {
//	//// 나이를 입력받아서 버스요금이 얼마인지를 알려주는 코드를 작성하세요
//	//// - 영유아(0 ~ 6) : 0,   어린이(7 ~ 13) : 450,  학생(14 ~ 19) : 720,  일반 : 1250
//	//int age;
//	//printf("나이를 입력하세요:");
//	//scanf("%d", &age);
//	//if (age > 19)
//	//	puts("일반요금 1250원 입니다");
//	//else if (age > 14)
//	//	puts("학생요금 720원 입니다");
//	//else if (age > 7)
//	//	puts("어린이요금 450원 입니다");
//	//else
//	//	puts("공짜입니다");
//	////선생님꺼
//	//int age;
//	//printf("나이 입력 > "); scanf_s("%d", &age);
//	//puts("");
//	//int fare = 0;
//	//if (age < 7) fare = 0;
//	//else if (age < 14) fare = 450;
//	//else if (age < 20) fare = 720;
//	//else fare = 1250;
//	//printf("요금 : %d 원\n", fare);
//
//
//
//	//// 세과목의 점수를 사용해서 총점, 평균, 학점을 구하는 코드를 작성하세요
//	//// - 학점은 평균을 사용해서 구합니다
//	////   > 100 ~ 90 : A,  89 ~ 80 : B,  79 ~ 70 : C,  69 ~ 60 : D,  59 ~ 0 : F
//	//int kor, eng, math, total;
//	//double avg;
//	//printf("국어 성적 입력:");
//	//scanf_s("%d", &kor);
//	//printf("영어 성적 입력:");
//	//scanf_s("%d", &eng);
//	//printf("수학 성적 입력:");
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
//	//printf("-----성적 정보-----\n");
//	//printf("국어 성적: %d\n", kor);
//	//printf("영어 성적: %d\n", eng);
//	//printf("수학 성적: %d\n", math);
//	//printf("총점: %d\n", total);
//	//printf("평균: %.2f\n", avg);
//	//printf("학점: %c\n", grade);
//	////선생님꺼
//	//int s1, s2, s3;
//	//printf("세과목 점수 입력 > "); scanf_s("%d %d %d", &s1, &s2, &s3);
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
//	//printf("총점 : %d\n", tot);
//	//printf("평균 : %.1f\n", avg);
//	//printf("학점 : %c\n", grade);
//
//
//	//// 몸무게(kg), 키(cm)를 사용해서 BMI(체질량 지수)를 구하고, 몸상태를 알려주는 코드를 작성하세요
//	////            몸무게(kg)
//	//// - BMI = --------------
//	////          키(m) * 키(m)
//	////
//	//// - bmi                몸상태
//	////   0    ~ 18.4        저체중
//	////   18.5 ~ 22.9        정상
//	////   23.0 ~ 24.9        과체중
//	////   25.0 ~ 29.9        비만
//	////   30.0 ~             고도비만
//	//double weight, height, BMI, mHeight;
//	//printf("당신의 몸무게를 입력하시오:     kg\b\b\b\b\b\b");
//	//scanf("%lf", &weight);
//	//printf("당신의 키를 입력하시오:       cm\b\b\b\b\b\b\b\b");
//	//scanf("%lf", &height);
//	//mHeight = height / 100;
//	//BMI = weight / (mHeight * mHeight);
//	//printf("BMI: %.1f\n", BMI);
//	//if (BMI > 30.0)
//	//	puts("고도비만");
//	//else if (BMI > 25.0)
//	//	puts("비만");
//	//else if (BMI > 23.0)
//	//	puts("과체중");
//	//else if (BMI > 18.5)
//	//	puts("정상");
//	//else
//	//	puts("저체중");
//	//////선생님꺼
//	//double weight;
//	//printf("몸무게 입력 > "); scanf_s("%lf", &weight);
//
//	//double height;
//	//printf("키     입력 > "); scanf_s("%lf", &height);
//	//puts("");
//
//	//double mHeight = height / 100;
//	//double bmi = weight / (mHeight * mHeight);
//	//printf("BMI : %.1f\n", bmi);
//	//printf("몸상태 : ");
//	//if (bmi < 18.5) puts("저체중");
//	//else if (bmi < 23.0) puts("정상");
//	//else if (bmi < 25.0) puts("과체중");
//	//else if (bmi < 30.0) puts("비만");
//	//else puts("고도비만");
//
//}
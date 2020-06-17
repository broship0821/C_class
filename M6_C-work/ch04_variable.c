

// ch04_variable.c

#include <stdio.h>

/*
상수 : 값 변경 불가

리터럴 상수 ( literal )
- 메모리에 있지만 사용자가 위치를 알 수 없는 데이터를 말합니다
  데이터가 있는 곳을 모르기 때문에 재사용 or 수정이 불가능 합니다

자료형
- 데이터를 저장하는 공간을 만들 때 사용하는 이름입니다
  > 정수   : int     -> 4byte
    실수   : double  -> 8byte
    문자   : char    -> 1byte

변수
- 메모리의 데이터 공간에 이름이 부여되어 있는 것을 말합니다
- 자료형 변수명;

변수명 작성 규칙
- 영문자, 숫자, 밑줄(_) 만을 사용합니다
- 이름의 시작은 영문자, _ 로 시작해야 합니다 ( a1, _1 -> O, 1a -> X )
- 예약어는 사용 할 수 없습니다
- 대소문자를 구분합니다 ( Name, name 은 다른 변수 )
- 변수명 안에서는 공백을 사용 할 수 없습니다 ( a_1 -> O, a 1 -> X )
- 자료형이 틀리다고 해서 같은 이름의 변수를 사용 할 수 없습니다

*/

//int main() {
//
//    //printf("숫자 : %d\n", 10);
//
//    //// 정수
//    //int a;      // 변수 선언(생성)
//    //// printf("a : %d\n", a); Error
//    //// 초기화되지 않은 변수를 사용하면 Error 입니다
//
//    //a = 10;     // 변수 초기화
//    //printf("a : %d\n", a);
//
//    //a = 22;
//    //printf("a : %d\n", a);
//    //printf("\n");
//
//    //int age = 20;
//    //printf("나이 : %d 세\n", age);
//    //printf("\n");
//
//    //// 실수
//    //double pi = 3.141592;
//    //printf("원주율 : %f\n", pi);
//    //printf("\n");
//
//    //// 문자
//    //char area = 'A';
//    //printf("%c 구역\n", area);
//    //printf("\n");
//
//    //// 문자열
//    //char hi[10] = "hello";
//    //// hi = "수정불가";
//    //// 문자열 데이터는 대입연산자를 사용해서 변경 할 수 없습니다
//    //printf("hi : %s\n", hi);
//    //printf("\n");
//
//    //
//    ////int n = 11;
//    ////double n = 2.2; Error
//
//
//    //int v1, v2, v3;
//    //int n1 = 1, n2 = 2;
//    //
//    //// int z1 = 10, double z2 = 3.3; Error
//
//
//    //// 아래의 데이터를 변수 or 배열에 저장하여 출력하세요
//    //// 8.888 
//    //double da = 8.888;
//    //printf("da: %.3f\n", da);
//    //// d 
//    //char ddd = 'd';
//    //printf("ddd: %c\n", ddd);
//    //// 30 
//    //int ia = 30;
//    //printf("ia: %d\n", ia);
//    //// 이순신 
//    //char name[8] = "이순신";
//    //printf("name: %s\n", name);
//    //// 3.24 + 5.34 
//    //double db = 3.24;
//    //double dc = 5.34;
//    //double res = db + dc;
//    //printf("%.2f + %.2f = %.2f\n", db, dc, res);
//    //// 10+20 
//    //int aa = 10;
//    //int bb = 20;
//    //int cc = aa + bb;
//    //printf("%d + %d = %d\n", aa, bb, cc);
//    //// 3.333 
//    //// po 
//    //char apo[3] = "po";
//    //printf("apo: %s\n", apo);
//    //// ㄱ 
//    //// 가나다라abcde 
//    //char ddc[14] = "가나다라abcde";
//    //printf("ddc: %s\n", ddc);
//    //// abcd 12345 
//    //char abc[11] = "abcd 12345";
//    //printf("abc: %s\n", abc);
//    //// 010-1234-5678 
//    //char num[14] = "010-1234-5678";
//    //printf("num: %s\n", num);
//
//
//    
//    /*변수의 주소 사용:
//        변수명 앞에 '&'기호를 붙이면 해당 변수 메모리의 주소를 사용하게 됩니다
//        주소를 출력 할때에는 '%p'를 사용합니다*/
//    /*int a = 10;
//    printf("a: %d\n", a);
//    printf("a의 주소: %p\n", &a);*/
//
//    
//}


/*
sizeof()
    메모리에 할당 된 데이터 공간의 크기를 계산합니다(byte단위)
연산식에서의 형변환
    서로 다른 자료형이 연산하려고 할때는,
    크기가 작은 자료형이 크기가 큰 자료형으로 자동 형변환되어 계산합니다.
*/
//int main() {
//    double result;
//    result = 5 / 2;
//    printf("result: %f\n", result);
//    printf("5/2 결과 크기: %d\n", sizeof(5 / 2));
//    printf("result 크기: %d\n", sizeof(result));
//    printf("\n");
//
//    result = 5 / 2.0;
//    printf("result: %f\n", result);
//    printf("5/2.0 결과 크기: %d\n", sizeof(5 / 2.0));
//}

/*
대입식에서의 형변환
    대입연산자(=) 오른쪽의 자료형이 왼쪽의 자료형으로 자동 형변환되어 대입됨
        데이터 손실이 발생할 수 있음
*/
//int main() {
//    double d = 12.3;
//    int z = d;
//    printf("z: %d\n", z);
//    
//    float f = 1.1f;
//    printf("f: %f\n", f);
//}

//int main() {
//    int ia = 5;
//    int ib = 2;
//    double div;
//    div = ia / ib;
//    printf("div: %f\n", div);
//    printf("\n");
//    /*강제 형 변환 (형변환 자료형): 
//        사용하려는 데이터의 왼쪽에 ()를 사용해서 자료형을 쓰면
//        순간적으로 ()안의 자료형으로 형변환되어 실행됨*/
//    div = (double)ia / ib;
//    printf("div: %f\n", div);
//    printf("ia 크기: %d\n", sizeof(ia));
//    printf("\n");
//}


//int main() {
//    char ca = 'A';
//    // 아스키코드 문자를 %d로 출력하면 해당 숫자가 표현됨 (A : 65)
//    printf("ca: %c, %d\n", ca, ca);
//    printf("\n");
//    int na = ca + 1;
//    printf("na: %d\n", na);
//    printf("na: %c\n", na);
//    char sa = ca + 32;
//    printf("sa: %c\n", sa);
//
//    char nl = '\n'; //엔터값
//    printf("nl: %d, %c!!\n", nl, nl);
//}
//
//int main() {
//    int dataA = 123;
//    printf("%d\n", dataA);
//    printf("%5d!!\n", dataA); //5만큼 공간확보하고 우측정렬
//    printf("%-5d!!\n", dataA); //5만큼 공간확보하고 좌측정렬
//    printf("%10s\n", "korea");
//    printf("\n");
//
//    double dataB = 12.39;
//    printf("%.1f\n", dataB); //%.숫자: 실수값을 숫자자리까지만 출력, 짤리면 반올림처리
//    printf("%5.1f\n", dataB); // 5칸 확보하고 소수점 1자리만 표시
//}

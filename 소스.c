

/*
#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct list
{
	
	char name[10];
	char phonenumber[20];
	int age;
	char job[20];

}list;




typedef struct score {
	int kor,math,eng,total;

}score;








int main(void) {
	/*
	/*
	char* p = "abcdefg";
	printf("%s", p+3);
	
	
	char str[6]; // 배열의 이름과 포인터의 차이점: 배열의 이름은 첫번째 원소만을 가리키는 '상수'포인터임
	strcpy(str, "apple");//그래서 배열을 초기화안한상태로 선언하고 그냥 배열에 문자열을 넣을려하면 주소를 바꾸라는것이므로 오류발생
	//즉, str="apple"; 이거 안됨. 좌항은 &str[0]이고 우항은 내부적으로 주소값이므로 주소를 바꾸란소리임
	
	
	printf("%s", str); //따라서 strcpy(=stringcopy)함수 사용 strcpy(도착지,출발지);
	*/
	/*

    const char* str[3] = { "banana","apple","mango" };// 문자열원소는 주소값이니까 여러개의 주소값을 원소에 저장하는것은 포인터배열 (2차원배열)
	const char* string = "apple"; //문자열은 메모리상의 상수영역에 위치하므로 역참조를 할수없게끔 const처리
	
	printf("%s", string);//%s는 주소값을 넘겨줘야함
	*/
	/*list s1;
	printf("이름:");
	gets_s(s1.name,10);
	
	printf("나이:");
	scanf_s("%d", &s1.age);
	while (getchar() != '\n'); // 버퍼를 한문자씩 검사하면서 남아있는 엔터를 읽어서 없애버림, 엔터가 나오면 조건문 탈출
	printf("직업:");
	gets_s(s1.job, 20);
	
	printf("전화번호:");
	gets_s(s1.phonenumber,20);

	printf("\n\n*****신상정보*****\n\n이름:%3s\n나이:%d \n직업:%3s \n전화번호:%10s", s1.name, s1.age, s1.job, s1.phonenumber);
	*/
/*
	score sco[3] = { {10,20,30},{100,200,300},{1000,2000,3000} };
	score* p1 = sco;//== &sco[0]
	score* p2 = sco+1;//== &sco[1]
	score* p3 = sco+2;//== &sco[2]
	p1->total = p1->kor + p1->eng + p1->math;// == sco[0].total=sco[0].kor + sco[0].eng + sco[0].math; 
                                             // == p1[0].total = p1[0].kor + p1[0].eng + p1[0].math;
	p2->total = p2->kor + p2->eng + p2->math;
	p3->total = p3->kor + p3->eng + p3->math;
	printf("1번:kor:%d   eng:%d   math:%d   total:%d\n",p1->kor,p1->eng,p1->math,p1->total );
	printf("2번:kor:%d   eng:%d   math:%d   total:%d\n", p2->kor, p2->eng, p2->math, p2->total);
	printf("3번:kor:%d   eng:%d   math:%d   total:%d", p3->kor, p3->eng, p3->math, p3->total);
	*/
/*

	int array[3][10];
	int* p = (*array)[10];

	



	return 0;
}
*/

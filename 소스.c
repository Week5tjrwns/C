

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
	
	
	char str[6]; // �迭�� �̸��� �������� ������: �迭�� �̸��� ù��° ���Ҹ��� ����Ű�� '���'��������
	strcpy(str, "apple");//�׷��� �迭�� �ʱ�ȭ���ѻ��·� �����ϰ� �׳� �迭�� ���ڿ��� �������ϸ� �ּҸ� �ٲٶ�°��̹Ƿ� �����߻�
	//��, str="apple"; �̰� �ȵ�. ������ &str[0]�̰� ������ ���������� �ּҰ��̹Ƿ� �ּҸ� �ٲٶ��Ҹ���
	
	
	printf("%s", str); //���� strcpy(=stringcopy)�Լ� ��� strcpy(������,�����);
	*/
	/*

    const char* str[3] = { "banana","apple","mango" };// ���ڿ����Ҵ� �ּҰ��̴ϱ� �������� �ּҰ��� ���ҿ� �����ϴ°��� �����͹迭 (2�����迭)
	const char* string = "apple"; //���ڿ��� �޸𸮻��� ��������� ��ġ�ϹǷ� �������� �Ҽ����Բ� constó��
	
	printf("%s", string);//%s�� �ּҰ��� �Ѱ������
	*/
	/*list s1;
	printf("�̸�:");
	gets_s(s1.name,10);
	
	printf("����:");
	scanf_s("%d", &s1.age);
	while (getchar() != '\n'); // ���۸� �ѹ��ھ� �˻��ϸ鼭 �����ִ� ���͸� �о ���ֹ���, ���Ͱ� ������ ���ǹ� Ż��
	printf("����:");
	gets_s(s1.job, 20);
	
	printf("��ȭ��ȣ:");
	gets_s(s1.phonenumber,20);

	printf("\n\n*****�Ż�����*****\n\n�̸�:%3s\n����:%d \n����:%3s \n��ȭ��ȣ:%10s", s1.name, s1.age, s1.job, s1.phonenumber);
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
	printf("1��:kor:%d   eng:%d   math:%d   total:%d\n",p1->kor,p1->eng,p1->math,p1->total );
	printf("2��:kor:%d   eng:%d   math:%d   total:%d\n", p2->kor, p2->eng, p2->math, p2->total);
	printf("3��:kor:%d   eng:%d   math:%d   total:%d", p3->kor, p3->eng, p3->math, p3->total);
	*/
/*

	int array[3][10];
	int* p = (*array)[10];

	



	return 0;
}
*/

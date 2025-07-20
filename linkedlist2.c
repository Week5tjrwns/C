
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//���ڿ� �Ǿտ� ����
#pragma warning(disable:4996)
typedef struct Node {
	char* str;
	struct Node* next;

}Node; // ����ü ���� ����

typedef struct intNode {
	int value;
	struct intNode* next;

}intNode;


void insert_char(char* p);
void lineupint(int a);
void showif(intNode*ptr1);

int main(void) {
	
	int n = 0;
	int count = 0;
	char ch = 0;
	char array[100];
	int num2 = 0;

	while (1) {
		
		printf("\n�޴� ��ȣ �Է��ϼ���.\n");
		(void)scanf("%d",&n);
		switch (n) {
		case 0: printf("���α׷��� �����մϴ�.\n");
			exit(0);
		case 1:
			printf("�Է��� ���ڿ��� ���Ͽ��Ḯ��Ʈ�� ���� �տ� �߰��ؼ� ����մϴ�\n");
			printf("���ڸ� �Է����ּ���\n");
			(void)scanf("%s",array);
			insert_char(array);
			break;
		case 2: 
			printf("�Է��� ���ڸ� �����Ͽ� ���Ḯ��Ʈ�� ǥ���մϴ�\n");
			printf("������ �Է����ּ���\n");
			(void)scanf("%d", &num2);
			lineupint(num2);
			break;
		}


	}
}





void insert_char(char* p)
{
	static Node* head = NULL; //�Լ����ο��� �ѹ��� �ʱ�ȭ�ǰ� ���α׷����������� �� ���� ������,��, �ݺ����� �ָ���������, ��������ó�� ��밡��
	Node* Newnode = (Node*)malloc(sizeof(Node));
	char* array = (char*)malloc(strlen(p)+1);//�迭����+1(NULL���ڵ� ���Խ��Ѿ� ��Ȯ������
	if (Newnode == NULL) {

		printf("Newnode �����Ҵ� ����.\n");
		return;
	}
	else if (array == NULL) {
		printf("array �����Ҵ� ����.\n");
		free(Newnode);
		return;

	}
	Newnode->next = NULL;
	strcpy(array, p);
	if (head == NULL) {
		head = Newnode;
		Newnode->str = array;
		printf("[%s]\n", Newnode->str);
		return;
	}//��尡 NULL�̸� ������ �ƿ� �ȵǾ������Ƿ� �����ϰ� ����� ���� str�� �迭 ����Ű�Բ�
	
	
	Newnode->next = head;
	head = Newnode;
	Newnode->str = array;
	while (Newnode != NULL) {	
		printf("[%s]\n", Newnode->str);
		Newnode = Newnode->next;

	}
} // ��� ���� ����+���ڿ� ��� ��ü ���� �߰��ٶ�

void lineupint(int a)//��� ���� ����
{
	static intNode* head = NULL;	
	intNode* Newnode = (intNode*)malloc(sizeof(intNode));
	
	if (Newnode == NULL) {

		printf("�����Ҵ� ����\n");
		return;
	}
	Newnode->next = NULL;
	if (head == NULL) {
		head = Newnode;
		head->value = a;
		showif(head);
		return;
	 }//1.head==NULL
	Newnode->value = a;
	if (Newnode->value <= head->value) {
		Newnode->next = head;
		head = Newnode;
		showif(head);
		return;
	}//2.���� ���� �� ���� 

	intNode* Curnode = head;
	intNode* prevnode = head;
	while (Curnode->next!=NULL) {
		Curnode = Curnode->next;

		if (Curnode->value >= a) {
			Newnode->next = Curnode;
			prevnode->next = Newnode;
			showif(head);
			return;
		}
		prevnode = prevnode->next;
		showif(head);
	}//3.�Ϲ����� �� ����
	Curnode->next = Newnode; //4. ���� ū �� ����
	showif(head);

}
void showif(intNode* cur) {
	while (cur) {
		printf("%d", cur->value);
		if (cur->next) printf("=>");
		cur = cur->next;
	}
	printf("\n");
}




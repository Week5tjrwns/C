
#pragma once
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef struct Node {

	int value;
	struct Node* next;

}Node;

int deletenode = 0;

Node* head = NULL;
void insert_node_front(int a);//�Է¹��� a���� ���� value ���� 
void insert_node_rear(int a);
void delete_node(int a);
void display(void);
void free_memory(void);


int main(void) {
	
	int menu = 0;
	int newvalue = 0;
	while (1) {
		
		printf("\n####���� ����Ʈ ����####\n");
		printf("1��:���� ��� ���� �տ� �߰�(�Է°�:����� value)\n");
		printf("2��:���� ��� �� ��ȸ�ϸ� ������\n");
		printf("3��:���� �޸� ����\n");
		printf("4��:��� ���� �ڿ� �߰�\n");
		printf("5��:���� ��� ����\n");
		printf("0��:����\n");


		scanf_s("%d", &menu);
		while (menu<0||menu>5) {
			printf("�޴� ��ȣ�� �ٽ� �Է��ϼ���\n");
			scanf_s("%d", &menu);
			if (menu<5 && menu>=0)
			{
				break;
			}
		}

		switch (menu) {
		case 1:
			printf("�ű� ��� �� �տ� ������ value���� �Է��ϼ���.\n");
			scanf_s("%d", &newvalue);
			insert_node_front(newvalue);
			system("cls");
			break;


		case 2:
			display();
			break;


		case 3:
			printf("�����޸� ����\n");
			free_memory();
			break;
        
        
		case 4:
			printf("�ű� ��� �� �ڿ� ������ value���� �Է��ϼ���.\n");
			scanf_s("%d", &newvalue);
			insert_node_rear(newvalue);
			system("cls");
			break;

		case 5:
			printf("������ n��° ��带 �Է��ϼ���.\n");
			scanf_s("%d", &deletenode);
			delete_node(deletenode);
			break;

  		case 0:
			
			printf("���α׷��� �����մϴ�.");
			exit(0);



		}

		
	}
	return 0;
}

void insert_node_front(int a)
{
	
	Node* NewNode = (Node*)malloc(sizeof(Node)); 
	if (NewNode == NULL) {
		printf("�����Ҵ����");
		return;
	}
	NewNode->next = NULL;
	
	NewNode->value = a;
	if (head == NULL) {
		head = NewNode;
		return; // ù ���ට �� ���ǹ��� �ɸ��ϱ� �̰� �����ϰ� ���� ����
	}
	NewNode->next = head;
	head = NewNode;
}

void insert_node_rear(int a)
{
	Node* Newnode = (Node*)malloc(sizeof(Node));
	if (Newnode == NULL) {
		printf("�����Ҵ����.\n");
		return;
	}
	Newnode->value = a;
	Newnode->next = NULL;
	Node* Curnode = head;
	if (head == NULL) {
		head = Newnode;
		return;
	}
	
	
	while (Curnode->next!=NULL) {
		Curnode = Curnode->next;
	}
	Curnode->next = Newnode;


}


void delete_node(int a)
{
	if (a <= 0) {
		printf("�߸��� ��ġ: 1 �̻��� ���� �Է��ϼ���.\n");
		return;
	}
	if (head == NULL) {
		printf("������ ��尡 �����ϴ�.\n");
		return;
	}

	
	if (a == 1) {
		Node* to_delete = head;
		head = head->next;
		free(to_delete);
		printf("���� �Ϸ�.\n");
		return;
	}

	
	Node* prevnode = head;
	Node* delnode = head->next;
	int  count = 2;  

	
	while (delnode != NULL && count < a) {
		prevnode = delnode;
		delnode = delnode->next;
		count++;
	}

	
	if (delnode == NULL) {
		printf("%d��° ���� �������� �ʽ��ϴ�.\n", a);
		return;
	}

	
	prevnode->next = delnode->next;
	free(delnode);
	printf("%d��° ��� ���� �Ϸ�.\n", a);
}

	
void display(void)
{
	Node* Curnode;

	if (head == NULL) {

		printf("����� ��尡 �����ϴ�.��� �������� �ϼ���.\n");
		return;
	}
	Curnode = head;
	printf("%d", Curnode->value);
	
	while (Curnode->next != NULL) {
		Curnode = Curnode->next;
		printf(" => %d", Curnode->value);
		
	}
	printf("=> NULL��");
	
}

void free_memory(void)
{
	Node* Curnode=head;
	
	while (Curnode->next != NULL) {
		Node*next_add= Curnode->next;
		free(Curnode);
		Curnode = next_add;
	}
	free(Curnode);
	head = NULL;
}






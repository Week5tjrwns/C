/*
#include <stdio.h>
#include <stdlib.h> //malloc������ �ʼ� ��� ����



int main(void) {
	
	int n;
	printf("�迭 ũ�� �Է�: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("���� ������ �Է��ϼ���.");
		return 1;

	}
	int* p = (int*)malloc(n * sizeof(int));//malloc�� void�����Ͱ��� �����ϹǷ� ����ȯ, ������ ������ p�� ����
	//�Ҵ�� �޸��� �����ּҸ� ����Ű�Ե�, nĭ�� �迭�� �������� ������
	if (p == NULL) {

		printf("�����Ҵ翡 �����Ͽ����ϴ�.");
		return 1;

	}
	
	


	for (int i = 0; i < n; i++) {

		p[i] = i;
		printf("����� �迭�� % d�Դϴ�.\n",i );

	}
	
	free(p);
	return 0;
}*/
/*#include <stdio.h>
#pragma warning(disable:4996)


int main(void) {
	FILE* fp; //FILE�� C���̺귯�� ���������� ���ǵ� ����ü 
	fp = fopen("�����Ӹ��ҳ�.txt", "r"); // fopen�� �ϸ� c��� ���̺귯�� ���������� ������ ��������� �ش��ϴ� ����ü�� �����
	// �� �ּҸ� ������
	char ch;
	int count = 0;
	int count2 = 0;
	if (fp == NULL) //fopen�� �޸� ������� ���������� �����ϸ� �ּҰ����� NULL���� ��ȯ��
	{

		printf("���� ���� ����");
		return 0;
	}
	
	while (1) {
		
		ch = fgetc(fp);
		if (ch == EOF) //END OF FILE, �ƽ�Ű�ڵ�� -1�� �ش� 
		{

			break;
		}
		if (ch >= 'A' && ch <= 'Z') {
			count++;

		}
		else if (ch >= 'a' && ch <= 'z') {

			count2++;
		}
		 
		printf("%c", ch);

	}
	printf("\n�ҹ����� ����:%d", count2);
	printf("\n�빮���� ����:%d", count);

	fclose(fp);


}*/
/*

#include <stdio.h>
#include <stdlib.h>

int isEven(int a);
int isOdd(int a);
void showif(int* arr, int size, int(*pred)(int));
int main(void) {
	int arr[1000];
	
	for (int i = 0; i < 1000; i++) {
		arr[i] = i + 1;
	}

	showif(arr, 1000, isEven);
	puts("\n");
	showif(arr, 1000, isOdd);


	return 0;
}

int isEven(int a) {

	if (a % 2 == 0) {
		return 1;
	}

	else return 0;

}


int isOdd(int a) {

	if (a % 2 == 1) {
		return 1;
	}

	else return 0;

}


void showif(int* arr, int size, int(*pred)(int)) {

	for (int i = 0; i < size; i++) {

		if (pred(arr[i])) //�Լ������ͷ� �Լ��� �����ּҸ� ����Ű�� �Լ��� �Ȱ��� ����� ���������� ������
			//��, �̰� �Լ�(�Ķ����)�� ���� ������
		{
			printf("%4d", arr[i]);

		}
	
	}


}
*/

/*
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)



//void function(int(*p)[3]);


void double_ptr(int*(* p)[3]);


int main(void) {

	/*
	int array[2][3] = {
		{1,2,3},
		{3,4,5},
	};

	int(*ptr)[3] = array;


	function(ptr);

	*/

/*
	int a = 10;
	int b = 20;
	int c = 30;


	int d = 1000;
	int e = 2000;
	int f = 3000;

	int* ptr1 = &a;
	int* ptr2 = &b;
	int* ptr3 = &c;

	int* ptr4 = &a;
	int* ptr5 = &b;
	int* ptr6 = &c;

	*/

	/*
	int* array[2][3] = { {ptr1,ptr2,ptr3},
		                {ptr4,ptr5,ptr6} }; //2���� ������ �迭
	

	int*(*Dptr)[3] = array; //2���������� �迭int (*Dptr)[3]�� ����Ű�� �������̹Ƿ� int*(*Dptr)[3] 
	                        //�迭�� �̸�(=�ּҰ�)�� +1�ɶ����� (���� ����*�ڷ����� ũ��) BYTE��ŭ ����
	double_ptr(Dptr);


	return 0;
}

void double_ptr(int*(* p)[3]) {


	for (int i = 0; i < 2; i++) {
	
		for (int j = 0; j < 3; j++) {

			printf("%d\n",*(*( *(p + i) +j)));
		}
	}





}

*/

/*
void function(int(*p)[3])  // 
{

	for (int i = 0; i < 2; i++) {

     for(int j=0; j<3; j++){

		 printf("%d ",*(*(p+i)+j));

		}

	}

}

*/



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
		                {ptr4,ptr5,ptr6} }; //2차원 포인터 배열
	

	int*(*Dptr)[3] = array; //2차원포인터 배열int (*Dptr)[3]을 가리키는 포인터이므로 int*(*Dptr)[3] 
	                        //배열의 이름(=주소값)이 +1될때마다 (열의 개수*자료형의 크기) BYTE만큼 점프
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


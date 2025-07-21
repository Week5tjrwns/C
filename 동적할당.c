/*
#include <stdio.h>
#include <stdlib.h> //malloc쓰려면 필수 헤더 파일



int main(void) {
	
	int n;
	printf("배열 크기 입력: ");
	scanf_s("%d", &n);
	if (n <= 0) {
		printf("양의 정수를 입력하세요.");
		return 1;

	}
	int* p = (int*)malloc(n * sizeof(int));//malloc은 void포인터값을 리턴하므로 형변환, 정수형 포인터 p가 동적
	//할당된 메모리의 시작주소를 가리키게됨, n칸의 배열이 동적으로 생성됨
	if (p == NULL) {

		printf("동적할당에 실패하였습니다.");
		return 1;

	}
	
	


	for (int i = 0; i < n; i++) {

		p[i] = i;
		printf("저장된 배열은 % d입니다.\n",i );

	}
	
	free(p);
	return 0;
}*/
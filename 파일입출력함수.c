/*#include <stdio.h>
#pragma warning(disable:4996)


int main(void) {
	FILE* fp; //FILE은 C라이브러리 내부적으로 정의된 구조체 
	fp = fopen("빨간머리소녀.txt", "r"); // fopen을 하면 c언어 라이브러리 내부적으로 파일의 모든정보에 해당하는 구조체를 만들고
	// 그 주소를 리턴함
	char ch;
	int count = 0;
	int count2 = 0;
	if (fp == NULL) //fopen이 메모리 저장공간 부족등으로 실패하면 주소값으로 NULL값을 반환함
	{

		printf("파일 열기 실패");
		return 0;
	}
	
	while (1) {
		
		ch = fgetc(fp);
		if (ch == EOF) //END OF FILE, 아스키코드로 -1에 해당 
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
	printf("\n소문자의 개수:%d", count2);
	printf("\n대문자의 개수:%d", count);

	fclose(fp);


}*/
#include "myheader.h"

int main(void) {

	int ary[SIZE] = { 0 };
	int key = 0;

	srand(time(NULL));
	printf("정렬전 배열 값 : ary[10] = {");
	for (int i = 0; i < SIZE; i++)
	{
		ary[i] = rand() % 99 + 1;
		printf("%d ", ary[i]);
	}
	printf("}");
	printf("\n");

	sort(ary, SIZE);		//void sort(int*, int);

	printf("탐색할 값 = ");
	scanf("%d", &key);

	bSearch(ary, SIZE, key);  //void bSearch(int*, int, int);
	return 0;
}
#include "myheader.h"

int main(void) {

	int ary[SIZE] = { 0 };
	int key = 0;

	srand(time(NULL));
	printf("������ �迭 �� : ary[10] = {");
	for (int i = 0; i < SIZE; i++)
	{
		ary[i] = rand() % 99 + 1;
		printf("%d ", ary[i]);
	}
	printf("}");
	printf("\n");

	sort(ary, SIZE);		//void sort(int*, int);

	printf("Ž���� �� = ");
	scanf("%d", &key);

	bSearch(ary, SIZE, key);  //void bSearch(int*, int, int);
	return 0;
}
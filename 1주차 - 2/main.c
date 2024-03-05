#include "a.h"

int main(void) {
	int ary[SIZE] = { 0 };
	int a = 0;

	srand(time(NULL));

	printf("----------------------------------------------------\n");
	printf("   1   2   3   4   5   6   7   8   9   10\n");
	printf("----------------------------------------------------\n");
	printf("  ");
	for (int i = 0; i < SIZE; i++)
	{
		ary[i] = rand() % 30 + 20;
		printf("%3d ", ary[i]);
	}
	printf("\n\n");

	minMax(ary, SIZE); //void minMax(int*, int);

	return 0;
}
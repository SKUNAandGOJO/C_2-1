void display(int* ip, int s) {
	printf("-----------------------------------------------\n");
	printf("   1   2   3   4   5   6   7   8   9   10\n");
	printf("-----------------------------------------------\n");
	
	for (int i = 0; i < s; i++)
	{
		printf("%3d ", ip[i]);
	}
	printf("\n\n");
}
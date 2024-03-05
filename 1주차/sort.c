void sort(int* ip, int s) {
	/*for (int i = 0; i < s; i++)
	{
		printf("%d ", ip[i]);
	}*/

	int least = 0, temp = 0;

	for (int i = 0; i < s-1; i++)
	{
		least = i;
		for (int j = i+1; j < s; j++)
		{
			if (ip[j] < ip[least]) {
				least = j;

			}
		}
		temp = ip[i];
		ip[i] = ip[least];
		ip[least] = temp;
	}
	printf("정렬 후 배열값 = ip[10] = {");
	for (int i = 0; i < s; i++)
	{
		printf("%d ", ip[i]);
	}
	printf("}");
	printf("\n");
}
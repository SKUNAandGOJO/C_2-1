void minMax(int* ip, int s) {
	int min = 0, max = 0;
	int minI = 0, maxI = 0;

	min = ip[0]; 
	max = ip[0];
	
	for (int i = 1; i < s; i++)
	{
		if (min > ip[i]) {
			min = ip[i];
			minI = i;
		}
		if (max < ip[i]) {
			max = ip[i];
			maxI = i;
		}
	}
	printf("�迭�� �ּҰ� : %d, ��ġ�� %d \n", min, minI);
	printf("�迭�� �ִ밪 : %d, ��ġ�� %d \n", max, maxI);
}
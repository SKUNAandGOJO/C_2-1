void bSearch(int* ip, int s, int k) {

	int low = 0, high = s-1, mid = 0, count = 1;

	while (low <= high)
	{
		
		mid = (low + high) / 2;
		printf("%d ��° �õ� : low = [%d] high = [%d] mid = [%d]\n", count, low, high, mid);
		count++;
		if (k == ip[mid]) {
			printf("Ž������ key �� ��ġ : %d\n", mid);
			exit(0);
		}
		else if (k > ip[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	printf("Ž������ \n");

}
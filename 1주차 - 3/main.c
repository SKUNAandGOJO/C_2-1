#include "head.h"

int main(void) {

	int seat[SIZE] = { 0 };
	char ans = 0;
	int num = 0;

	while (1)
	{
		printf("�����Ͻðڽ��ϱ�? : ");
		scanf("%c", &ans);

		if (ans == 'n' || ans == 'N') {
			printf("���α׷� ����");
			exit(0);
		}
		else if (ans == 'y' || ans == 'Y') {
			display(seat, SIZE);	//void display(int*, int);

			printf("�� �� �¼��� �����ұ��? : ");
			scanf("%d", &num);

			if (seat[num-1] == 0) {
				seat[num - 1] = 1;
				display(seat, SIZE);
			
			}
			else {
				printf("�̹� �Ǹŵ� �ڸ��Դϴ�.\n");
			}
		}
		else if (ans == 't' || ans == 'T') {
			funcA(seat, SIZE);
		}

		getchar();
		system("pause");
		system("cls");
		
		

	}

	return 0;
}
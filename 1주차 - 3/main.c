#include "head.h"

int main(void) {

	int seat[SIZE] = { 0 };
	char ans = 0;
	int num = 0;

	while (1)
	{
		printf("예약하시겠습니까? : ");
		scanf("%c", &ans);

		if (ans == 'n' || ans == 'N') {
			printf("프로그램 종료");
			exit(0);
		}
		else if (ans == 'y' || ans == 'Y') {
			display(seat, SIZE);	//void display(int*, int);

			printf("몇 번 좌석을 예약할까요? : ");
			scanf("%d", &num);

			if (seat[num-1] == 0) {
				seat[num - 1] = 1;
				display(seat, SIZE);
			
			}
			else {
				printf("이미 판매된 자리입니다.\n");
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
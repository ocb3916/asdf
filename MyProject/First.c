#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/*void dice(){
	srand(time(NULL));
	int a, b, c, d, m;
	printf("���ϴ� ���� �Է����ּ���.(2~12)\n->");
	scanf_s("%d", &d);
	int count = 10;
	while (count > 0) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		if (d == 2) {
			printf("ù��° �ֻ��� ���� %d, �ι�° �ֻ��� ���� %d, ���� %d�Դϴ�.\n", a, b, a + b);

		}
	}
}

void main() {
	srand(time(NULL));
	int a, b, c,d, m;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;

	printf("***************************");
	printf("\n*                         *");
	printf("\n*   �ֻ��� ������ ����    *");
	printf("\n*                         *");
	printf("\n***************************");

	while (1) {
		printf("\n\n���ӿ� ���� ������ 1��Ű��, ������ �����ϰ� �����ø� 2�� Ű�� �����ּ���.\n->");
		scanf_s("%d", &c);

		if (c == 1) {
			printf("\n<�ֻ��� ������ ���� ����>");
			printf("\n�ֻ����� �����⿡ �ռ� �ڽ��� ���ϴ� ���� �����Ѵ�.(2~12)");
			printf("\n�ֻ��� 2���� ������ ���� �� ���� ���� �ڽ��� ���ϴ� ���� ��ġ�ϸ� ������ 1�� ��´�.");
			printf("\n���� ��ġ���� ������ ������ ���� ���ϰ�, �̸� �� 10�� �����Ѵ�.");
			printf("\n�׷��� ���� �� ���� ���� 7�� ���´ٸ� ���ݱ��� ���� Ƚ���� ������� �ٽ� 10���� ������.");
			printf("\n���� ���� ������ ���� ����� �¸��ϴ� �����̴�.");
		}
		else if (c == 2) {
			printf("�ֻ��� ������ ������ �Ͻðڽ��ϱ�?(1.yes/2.no)\n->");
			scanf_s("%d", &m);
			if (m == 1) {
				dice();
			}
			else if (m == 2) {
				break;
			}
		}
	}
}*/









/*int dice(int score, int count, int d) {
	int a, b;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	if (a + b == 7) {
		printf("�ֻ��� �� : %d, �ʱ�ȭ\n", a + b);
		count = 1;
	}
	else if (d == a + b) {
		printf("%d° �ֻ��� ���� %d, �ι�° �ֻ��� ���� %d, ���� %d�Դϴ�.\n", count, a, b, a + b);
		printf("���� 1�� ȹ��\n\n");
		score++;
		count++;
	}
	else {
		printf("%d° �ֻ��� ���� %d, �ι�° �ֻ��� ���� %d, ���� %d�Դϴ�.\n", count, a, b, a + b);
		count++;
	}
	if (count == 10) return score;
	else dice(score, count, d);
}

int main() {
	int m, c, d;
	int score = 0;
	int count = 1;
	srand(time(NULL));
	printf("***************************");
	printf("\n*                         *");
	printf("\n*   �ֻ��� ������ ����    *");
	printf("\n*                         *");
	printf("\n***************************");
	while (1) {
		printf("\n\n���ӿ� ���� ������ 1��Ű��, ������ �����ϰ� �����ø� 2�� Ű�� �����ּ���.\n->");
		scanf("%d", &c);
		if (c == 1) {
			printf("\n<�ֻ��� ������ ���� ����>");
			printf("\n�ֻ����� �����⿡ �ռ� �ڽ��� ���ϴ� ���� �����Ѵ�.(2~12)");
			printf("\n�ֻ��� 2���� ������ ���� �� ���� ���� �ڽ��� ���ϴ� ���� ��ġ�ϸ� ������ 1�� ��´�.");
			printf("\n���� ��ġ���� ������ ������ ���� ���ϰ�, �̸� �� 10�� �����Ѵ�.");
			printf("\n�׷��� ���� �� ���� ���� 7�� ���´ٸ� ���ݱ��� ���� Ƚ���� ������� �ٽ� 10���� ������.");
			printf("\n���� ���� ������ ���� ����� �¸��ϴ� �����̴�.");
		}
		else if (c == 2) {
			printf("�ֻ��� ������ ������ �Ͻðڽ��ϱ�?(1.yes/2.no)\n->");
			scanf("%d", &m);
			if (m == 1) {
				printf("���ϴ� ���� �Է����ּ���.(2~12)\n->");
				scanf("%d", &d);
				printf("�� ���� : %d", dice(score, count, d));
			}
			else if (m == 2) {
				break;
			}
		}
	}
	return 0;
}*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void dice(int score, int count, int d) {
	int a, b;
	a = rand() % 6 + 1;
	b = rand() % 6 + 1;
	if (a + b == 7) {
		printf("�ֻ��� �� : %d, �ʱ�ȭ\n", a + b);
		count = 1;
	}
	else if (d == a + b) {
		printf("%d° �ֻ��� ���� %d, �ι�° �ֻ��� ���� %d, ���� %d�Դϴ�.\n", count, a, b, a + b);
		printf("���� 1�� ȹ��\n\n");
		score++;
		count++;
	}
	else {
		printf("%d° �ֻ��� ���� %d, �ι�° �ֻ��� ���� %d, ���� %d�Դϴ�.\n", count, a, b, a + b);
		count++;
	}
	if (count == 10) printf("�� ���� : %d\n", score);
	else dice(score, count, d);
}

void main() {
	int m, c, d;
	int score = 0;
	int count = 1;
	srand(time(NULL));
	printf("***************************");
	printf("\n*                         *");
	printf("\n*   �ֻ��� ������ ����    *");
	printf("\n*                         *");
	printf("\n***************************");
	while (1) {
		printf("\n\n���ӿ� ���� ������ 1��Ű��, ������ �����ϰ� �����ø� 2�� Ű�� �����ּ���.\n->");
		scanf("%d", &c);
		if (c == 1) {
			printf("\n<�ֻ��� ������ ���� ����>");
			printf("\n�ֻ����� �����⿡ �ռ� �ڽ��� ���ϴ� ���� �����Ѵ�.(2~12)");
			printf("\n�ֻ��� 2���� ������ ���� �� ���� ���� �ڽ��� ���ϴ� ���� ��ġ�ϸ� ������ 1�� ��´�.");
			printf("\n���� ��ġ���� ������ ������ ���� ���ϰ�, �̸� �� 10�� �����Ѵ�.");
			printf("\n�׷��� ���� �� ���� ���� 7�� ���´ٸ� ���ݱ��� ���� Ƚ���� ������� �ٽ� 10���� ������.");
			printf("\n���� ���� ������ ���� ����� �¸��ϴ� �����̴�.");
		}
		else if (c == 2) {
			printf("�ֻ��� ������ ������ �Ͻðڽ��ϱ�?(1.yes/2.no)\n->");
			scanf("%d", &m);
			if (m == 1) {
				printf("���ϴ� ���� �Է����ּ���.(2~12)\n->");
				scanf("%d", &d);
				dice(score, count, d);
			}
			else if (m == 2) {
				break;
			}
		}
	}
	
}
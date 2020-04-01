#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/*void dice(){
	srand(time(NULL));
	int a, b, c, d, m;
	printf("원하는 수를 입력해주세요.(2~12)\n->");
	scanf_s("%d", &d);
	int count = 10;
	while (count > 0) {
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		if (d == 2) {
			printf("첫번째 주사위 눈은 %d, 두번째 주사위 눈은 %d, 합은 %d입니다.\n", a, b, a + b);

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
	printf("\n*   주사위 던지기 게임    *");
	printf("\n*                         *");
	printf("\n***************************");

	while (1) {
		printf("\n\n게임에 대한 설명은 1번키를, 게임을 진행하고 싶으시면 2번 키를 눌러주세요.\n->");
		scanf_s("%d", &c);

		if (c == 1) {
			printf("\n<주사위 던지기 게임 설명서>");
			printf("\n주사위를 던지기에 앞서 자신이 원하는 수를 결정한다.(2~12)");
			printf("\n주사위 2개를 던져서 나온 두 수의 합이 자신이 원하는 수와 일치하면 점수를 1점 얻는다.");
			printf("\n수가 일치하지 않으면 점수를 얻지 못하고, 이를 총 10번 시행한다.");
			printf("\n그런데 만약 두 수의 합이 7이 나온다면 지금까지 던진 횟수와 상관없이 다시 10번을 던진다.");
			printf("\n이후 가장 점수가 높은 사람이 승리하는 게임이다.");
		}
		else if (c == 2) {
			printf("주사위 던지기 게임을 하시겠습니까?(1.yes/2.no)\n->");
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
		printf("주사위 합 : %d, 초기화\n", a + b);
		count = 1;
	}
	else if (d == a + b) {
		printf("%d째 주사위 눈은 %d, 두번째 주사위 눈은 %d, 합은 %d입니다.\n", count, a, b, a + b);
		printf("점수 1점 획득\n\n");
		score++;
		count++;
	}
	else {
		printf("%d째 주사위 눈은 %d, 두번째 주사위 눈은 %d, 합은 %d입니다.\n", count, a, b, a + b);
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
	printf("\n*   주사위 던지기 게임    *");
	printf("\n*                         *");
	printf("\n***************************");
	while (1) {
		printf("\n\n게임에 대한 설명은 1번키를, 게임을 진행하고 싶으시면 2번 키를 눌러주세요.\n->");
		scanf("%d", &c);
		if (c == 1) {
			printf("\n<주사위 던지기 게임 설명서>");
			printf("\n주사위를 던지기에 앞서 자신이 원하는 수를 결정한다.(2~12)");
			printf("\n주사위 2개를 던져서 나온 두 수의 합이 자신이 원하는 수와 일치하면 점수를 1점 얻는다.");
			printf("\n수가 일치하지 않으면 점수를 얻지 못하고, 이를 총 10번 시행한다.");
			printf("\n그런데 만약 두 수의 합이 7이 나온다면 지금까지 던진 횟수와 상관없이 다시 10번을 던진다.");
			printf("\n이후 가장 점수가 높은 사람이 승리하는 게임이다.");
		}
		else if (c == 2) {
			printf("주사위 던지기 게임을 하시겠습니까?(1.yes/2.no)\n->");
			scanf("%d", &m);
			if (m == 1) {
				printf("원하는 수를 입력해주세요.(2~12)\n->");
				scanf("%d", &d);
				printf("내 점수 : %d", dice(score, count, d));
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
		printf("주사위 합 : %d, 초기화\n", a + b);
		count = 1;
	}
	else if (d == a + b) {
		printf("%d째 주사위 눈은 %d, 두번째 주사위 눈은 %d, 합은 %d입니다.\n", count, a, b, a + b);
		printf("점수 1점 획득\n\n");
		score++;
		count++;
	}
	else {
		printf("%d째 주사위 눈은 %d, 두번째 주사위 눈은 %d, 합은 %d입니다.\n", count, a, b, a + b);
		count++;
	}
	if (count == 10) printf("내 점수 : %d\n", score);
	else dice(score, count, d);
}

void main() {
	int m, c, d;
	int score = 0;
	int count = 1;
	srand(time(NULL));
	printf("***************************");
	printf("\n*                         *");
	printf("\n*   주사위 던지기 게임    *");
	printf("\n*                         *");
	printf("\n***************************");
	while (1) {
		printf("\n\n게임에 대한 설명은 1번키를, 게임을 진행하고 싶으시면 2번 키를 눌러주세요.\n->");
		scanf("%d", &c);
		if (c == 1) {
			printf("\n<주사위 던지기 게임 설명서>");
			printf("\n주사위를 던지기에 앞서 자신이 원하는 수를 결정한다.(2~12)");
			printf("\n주사위 2개를 던져서 나온 두 수의 합이 자신이 원하는 수와 일치하면 점수를 1점 얻는다.");
			printf("\n수가 일치하지 않으면 점수를 얻지 못하고, 이를 총 10번 시행한다.");
			printf("\n그런데 만약 두 수의 합이 7이 나온다면 지금까지 던진 횟수와 상관없이 다시 10번을 던진다.");
			printf("\n이후 가장 점수가 높은 사람이 승리하는 게임이다.");
		}
		else if (c == 2) {
			printf("주사위 던지기 게임을 하시겠습니까?(1.yes/2.no)\n->");
			scanf("%d", &m);
			if (m == 1) {
				printf("원하는 수를 입력해주세요.(2~12)\n->");
				scanf("%d", &d);
				dice(score, count, d);
			}
			else if (m == 2) {
				break;
			}
		}
	}
	
}
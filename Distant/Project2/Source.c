//                                                                                 Direct By Semen Dostavalov

/*
������ ��� ������������ ��� ���������� ������� ������� N
� ��������� ��������� �� -� �� �,� ���������� ������������ ������ ������
�� � ���������.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A = 0, K = 0, N = 0, i = 0;
	int* Massive;

	printf("������� ������ ������� -\n");
	scanf_s("%d", &N);
	Massive = (int)malloc(N * sizeof(int));
	printf("������� ������ ��������� ������� -\n ");
	scanf_s("%d", &A);
	printf("������� �������� � -\n");
	scanf_s("%d", &K);

	for (i = 0; i < N; i++) {
		Massive[i] = rand() % (2 * A) - A;
	}

	for (i = 0; i < N; i++) {
		printf("%d  = %d\n",i+1,Massive[i]);
	}

	for (i = 0; i < K; i++) {
		 int min = Massive[N - 1];
		for (int j = N - 1; j > -1; j--) {
			Massive[j] = Massive[j - 1];
		}
		Massive[0] = min;
	}
	printf("������ �� �������:\n");

	for (i = 0; i < N; i++) {
		printf("%d - ������� -%d\n", i - 1, Massive[i]);
	}

	for (i = 0; i < N / 2; i++) {
			int min = Massive[i];
				Massive[i] = Massive[N - i - 1];
				Massive[N - i - 1] = min;
		}

		printf("���������:\n");

	for (i = 0; i < N; i++) {
		printf("%d ; %d", i + 1, Massive[i]);
	}
	return 0;
}
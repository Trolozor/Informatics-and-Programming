//                                                                                 Direct By Semen Dostavalov

/*
Данный код предназначен для заполнение массива размера N
и случайным значением от -А до А,и вылненения циклического сдвига вправо
на К элементов.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A = 0, K = 0, N = 0, i = 0;
	int* Massive;

	printf("Введите размер Массива -\n");
	scanf_s("%d", &N);
	Massive = (int)malloc(N * sizeof(int));
	printf("Введите размер диапозона массива -\n ");
	scanf_s("%d", &A);
	printf("Введите значение К -\n");
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
	printf("Массив со сдвигом:\n");

	for (i = 0; i < N; i++) {
		printf("%d - элемент -%d\n", i - 1, Massive[i]);
	}

	for (i = 0; i < N / 2; i++) {
			int min = Massive[i];
				Massive[i] = Massive[N - i - 1];
				Massive[N - i - 1] = min;
		}

		printf("Результат:\n");

	for (i = 0; i < N; i++) {
		printf("%d ; %d", i + 1, Massive[i]);
	}
	return 0;
}